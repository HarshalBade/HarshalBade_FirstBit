public class ElectricityBill {
    int customerNumber;
    String customerName;
    int units;
    static int unitRate;

    static {
        unitRate=10;
    }
    ElectricityBill(int number, String name, int units){
        this.customerNumber= number;
        this.customerName=name;
        this.units=units;   
    }
    public int getCustomerNumber() {
        return customerNumber;
    }
    public void setCustomerNumber(int customerNumber) {
        this.customerNumber = customerNumber;
    }
    public String getCustomerName() {
        return customerName;
    }
    public void setCustomerName(String customerName) {
        this.customerName = customerName;
    }
    public int getUnits(){
        return units;
    }
    public void setUnits(int units){
        this.units=units;
    }
    public static int getUnitRate() {
        return unitRate;
    }
    public static void setUnitRate(int unitRate) {
        ElectricityBill.unitRate = unitRate;
    }
    public double calculateBill(){
        double billAmount = this.getUnits() * getUnitRate();
        return billAmount;
    }
    void display(){
        System.out.println("Customer Number : "+this.getCustomerNumber());
        System.out.println("Customer Name : "+this.getCustomerName());
        System.out.println("Number of Units : "+this.getUnits());
        System.out.println("Unit Rate : "+getUnitRate());
        System.out.println("Total Bill : "+this.calculateBill());
        System.out.println();
    }
}
class ElectriictyBillCalculation{
    public static void main(String[] args) {

        ElectricityBill bill = new ElectricityBill(101,"Harshal Bade",95);
        bill.display();

        ElectricityBill.setUnitRate(9);
        bill.display();
    }
}
