import java.util.Scanner;

abstract class ElectricityBill{
    String customerName;
    int unit;

    ElectricityBill(){};
    ElectricityBill(String customerName ,int unit){
        this.customerName=customerName;
        this.unit=unit;
    }

    public String getCustomerName() {
        return customerName;
    }

    public void setCustomerName(String customerName) {
        this.customerName = customerName;
    }

    public int getUnit() {
        return unit;
    }

    public void setUnit(int unit) {
        this.unit = unit;
    }
    void showUsage(){
        System.out.println("\n- - - Customer Bill- - -");
        System.out.println("Customer Name: " +getCustomerName());
        System.out.println("Units Consumed: " +getUnit());
    }
    abstract double calculateBill();
    final void generateBill(){
        double bill = calculateBill();
        double tax = 0.05;
        int fixedCharge = 50;

        double finalBill = bill * tax * fixedCharge;

        showUsage();
        System.out.println("Bill Amount : Rs." + bill);
        System.out.println("Tax (5%) : Rs." + tax);
        System.out.println("Fixed Charge : Rs.50");
        System.out.println("Final Bill : Rs." + finalBill);
    }
}//class ElectrictyBill ends here

class ResidentialBill extends ElectricityBill{
    ResidentialBill(){}
    ResidentialBill(String customerName ,int unit){
        super(customerName ,unit);
    }

    @Override
    double calculateBill() {
        double bill = 0;
        if(unit<=100)
            bill = unit * 2.5;
        else if (unit>101 && unit<=300)
            bill = (100 * 2.5) + ((unit - 100) * 3.5);
        else if (unit>300)
            bill = (100 * 2.5) + (200 * 3.5) + ((unit - 300) * 5);

        if(unit>500)
            bill+=150;

        return bill;
    }
}//class ResidencialBill ends here

class CommercialBill extends ElectricityBill{
    CommercialBill(){}
    CommercialBill(String customerName ,int unit){
        super(customerName ,unit);
    }

    @Override
    double calculateBill() {
        double bill = unit * 6.5;

        if(unit<200)
            bill=1500;
        if(unit>1000){
            double surCharge = bill * 0.08;
            bill += surCharge;
        }

        return bill;
    }
}//class CommercialBill ends here

class ElectricityTest{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("1. Residential");
        System.out.println("2. Commercial");
        System.out.print("Enter Customer Type : ");
        int choice = sc.nextInt();
        sc.nextLine();

        System.out.print("Enter Customer Name : ");
        String name = sc.nextLine();

        System.out.print("Enter Units Consumed : ");
        int units = sc.nextInt();

        ElectricityBill bill;
        if (choice == 1)
            bill = new ResidentialBill(name, units);
        else
            bill = new CommercialBill(name, units);

        bill.generateBill();
    }
}
