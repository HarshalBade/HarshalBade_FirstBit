    public class Payment {
        int paymentID;
        double amount;
        String customerName;

        Payment(){}
        Payment(int paymentID, double amount, String customerName){
            this.paymentID=paymentID;
            this.amount=amount;
            this.customerName=customerName;
        }

        public int getPaymentID() {
            return paymentID;
        }

        public void setPaymentID(int paymentID) {
            this.paymentID = paymentID;
        }

        public double getAmount() {
            return amount;
        }

        public void setAmount(double amount) {
            this.amount = amount;
        }

        public String getCustomerName() {
            return customerName;
        }

        public void setCustomerName(String customerName) {
            this.customerName = customerName;
        }
        void makePayment(){
            System.out.println("Payment Processing...");
        }
    }


    class CreditCard extends Payment{
        int cardNumber;
        int cvv;

        CreditCard(){
            super();
        }
        CreditCard(int paymentID, double amount, String customerName, int cardNumber, int cvv){
            super(paymentID,amount, customerName);
            this.cardNumber=cardNumber;
            this.cvv=cvv;
        }

        public int getCardNumber() {
            return cardNumber;
        }

        public void setCardNumber(int cardNumber) {
            this.cardNumber = cardNumber;
        }

        public int getCvv() {
            return cvv;
        }

        public void setCvv(int cvv) {
            this.cvv = cvv;
        }

        @Override
        void makePayment() {
            super.makePayment();
            System.out.println("Cash Deduct from credit limit with OTP\n");
        }
    }

    class UPIPayment extends Payment{
        int upiId;
        String linkedBank;

        UPIPayment(){
            super();
        }
        UPIPayment(int paymentID, double amount, String customerName, int upiId, String linkedBank){
            super(paymentID, amount, customerName);
            this.upiId=upiId;
            this.linkedBank=linkedBank;
        }

        public int getUpiId() {
            return upiId;
        }

        public void setUpiId(int upiId) {
            this.upiId = upiId;
        }

        public String getLinkedBank() {
            return linkedBank;
        }

        public void setLinkedBank(String linkedBank) {
            this.linkedBank = linkedBank;
        }

        @Override
        void makePayment() {
            super.makePayment();
            System.out.println("Transfer via UPI id with UPI pin\n");
        }
    }

    class PaymentTest{
        public static void main(String[] args) {
            CreditCard credit = new CreditCard(123, 15000, "Harshal", 12345, 543);
            credit.makePayment();

            UPIPayment upi = new UPIPayment(456, 20000, "Harry", 45678, "SBI");
            upi.makePayment();
        }
    }