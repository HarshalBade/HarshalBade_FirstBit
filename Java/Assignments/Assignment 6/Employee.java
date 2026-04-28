public class Employee{
    int id;
    String name;
    double salary;

    Employee(){}

    Employee(int id, String name,double sal){
        this.id=id;
        this.name=name;
        this.salary=sal;
    }
    void setId(int id){
        this.id=id;
    }
    int getId(){
        return this.id;
    }
    void setName(String name){
        this.name=name;
    }
    String getName(){
        return this.name;
    }
    void setSalary(double salary){
        this.salary=salary;
    }
    double getSalary(){
        return this.salary;
    }
    void display(){
        System.out.println("-- Employee Details --");
        System.out.println("Id : " + this.getId());
        System.out.println("Name : " + this.getName());
        System.out.println("Salary : " + this.getSalary());
    }
}// class Employee ends here

class SalesManager extends Employee{
    double incentive;
    int target;

    SalesManager(){
        super();
    }
    SalesManager(int id,String name,double sal,double incentive,int target){
        super(id, name, sal);
        this.incentive=incentive;
        this.target=target;
    }

    void setIncentive(double incentive){
        this.incentive=incentive;
    }
    double getIncentive(){
        return this.incentive;
    }
    void setTarget(int target){
        this.target=target;
    }
    int getTarget(){
        return this.target;
    }

    void display(){
        super.display();
        System.out.println("Incentive : " + this.getIncentive());
        System.out.println("Target : " + this.getTarget()+"\n");
    }
}//class sales manager ends here

class HR extends Employee{
    double commission;

    HR(){
        super();
    }
    HR(int id,String name,double sal,double commission){
        super(id, name, sal);
        this.commission=commission;
    }
    void setCommission(double commission){
        this.commission=commission;
    }
    double getCommission(){
        return this.commission;
    }

    void display(){
        super.display();
        System.out.println("Commission : " + this.getCommission()+"\n");
    }
} //class HR ends here

class Admin extends Employee{
    double allowance;

    Admin(){
        super();
    }
    Admin(int id, String name, double sal, double allowance){
        super(id, name, sal);
        this.allowance=allowance;
    }

    public void setAllowance(double allowance) {
        this.allowance = allowance;
    }

    double getAllowance(){
        return this.allowance;
    }

    void display(){
        super.display();
        System.out.println("Allowance : " + this.getAllowance()+"\n");
    }
}//class Admin ends here

class EmployeeDemo{
    public static void main(String[] args){
        Employee emp = new SalesManager(101, "Harshal",50000,4000,50);
        emp.display();

        emp = new HR(102, "Nilhil",45000,5000);
        emp.display();

        emp = new Admin(103,"Harry",40000, 10000);
        emp.display();
    }
}