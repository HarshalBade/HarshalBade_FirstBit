import javax.smartcardio.Card;

abstract class Payment {
    int paymentId;
    double amount;
    String payerName;
    String status="PENDING"; //(possible values: "PENDING", "SUCCESS", "FAILED")

    Payment(){}
    Payment(int paymentId, double amount, String payerName){
        this.paymentId=paymentId;
        this.amount=amount;
        this.payerName=payerName;
    }
    public int getPaymentId() {
        return paymentId;
    }

    public void setPaymentId(int paymentId) {
        this.paymentId = paymentId;
    }

    public double getAmount() {
        return amount;
    }

    public void setAmount(double amount) {
        this.amount = amount;
    }

    public String getPayerName() {
        return payerName;
    }

    public void setPayerName(String payerName) {
        this.payerName = payerName;
    }

    public String getStatus() {
        return status;
    }

    public void setStatus(String status) {
        this.status = status;
    }

    void printSummary(){
        System.out.println("\n----- Payment Summary -----");
        System.out.println("Payment Id: " +getPaymentId());
        System.out.println("Payer Name: " +getPayerName());
        System.out.println("Amount: " +getAmount());
        System.out.println("Payment Status: " +getStatus());
    }
    final void process(){
        System.out.println("\nProcessing Payment...");

        if(validate()){
            deductAmount();
            sendNotification();
            setStatus("SUCCESS");
            System.out.println("Payment Successful");
        }
        else{
            setStatus("FAILED");
            System.out.println("Payment Failed..!");
        }
    }
    abstract boolean validate();
    abstract void deductAmount();
    abstract void sendNotification();
} //class Payment ends here

class CardPayment extends Payment{
    String cardNumber;
    String cvv;

    CardPayment(){}
    CardPayment(int paymentId, double amount, String payerName,String cardNumber, String cvv){
        super(paymentId, amount, payerName);
        this.cardNumber=cardNumber;
        this.cvv=cvv;
    }

    public String  getCardNumber() {
        return cardNumber;
    }

    public void setCardNumber(String cardNumber) {
        this.cardNumber = cardNumber;
    }

    public String getCvv() {
        return cvv;
    }

    public void setCvv(String cvv) {
        this.cvv = cvv;
    }

    @Override
    boolean validate() {
        if(getCardNumber().length()==16 && getCvv().length()==3 && getAmount()>0) {
            System.out.println("Card Validation Successful");
            return true;
        }
        else{
            System.out.println("Invalid Card Details");
            return false;
        }
    }

    void deductAmount() {
        System.out.println("Amount Rs." + amount + " deducted from Card");
    }

    void sendNotification() {
        System.out.println("Notification Sent for Card Payment");
    }
}//class CardPayment ends here

class UPIPayment extends Payment{
    String upiId;

    UPIPayment(){}
    UPIPayment(int paymentId, double amount, String payerName, String upiId){
        super(paymentId, amount, payerName);
        this.upiId=upiId;
    }
    public String getUpiId() {
        return upiId;
    }

    public void setUpiId(String upiId) {
        this.upiId = upiId;
    }

    @Override
    boolean validate() {
        if(getUpiId().contains("@") && (getAmount()>1 && getAmount()<100000)) {
            System.out.println("UPI Validation Successful");
            return true;
        }
        else{
            System.out.println("Invalid UPI Details");
            return false;
        }
    }

    @Override
    void deductAmount() {
        System.out.println("Amount Rs." + amount + " deducted using UPI");
    }

    @Override
    void sendNotification() {
        System.out.println("Notification Sent for UPI Payment");
    }
}//class UPIPayment ends here

class PaymentTest{
    public static void main(String[] args) {
        Payment payment = new CardPayment(12345,10000,"Harshal Bade", "1234567890123456","877");
        payment.process();
        payment.printSummary();

        Payment payment2 = new UPIPayment(12235,99999,"Harry Bade","harry@sbi.com");
        payment2.process();
        payment2.printSummary();
    }
}