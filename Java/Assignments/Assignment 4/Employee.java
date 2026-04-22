public class Employee {
    int id;
    String name;
    double salary;
    static double bonus;

    static {
        bonus = 10;
    }
    Employee(int id, String name, double salary){
        this.id=id;
        this.name=name;
        this.salary=salary;
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public double getSalary() {
        return salary;
    }

    public void setSalary(double salary) {
        this.salary = salary;
    }

    public static double getBonus() {
        return bonus;
    }

    public static void setBonus(double bonus) {
        Employee.bonus = bonus;
    }
    public double calculateSalary(){
        double totalSalary = this.getSalary() + (this.getSalary() * getBonus()/100);
        return totalSalary;
    }
    public void display(){
        System.out.println("Employee Id: " +this.getId());
        System.out.println("Employee Name: " +this.getName());
        System.out.println("Basic Salary: " +this.getSalary());
        System.out.println("Bonus Rate: " +getBonus() +"%");
        System.out.println("Total Salary: " +this.calculateSalary() +"\n");
    }
}


class EmployeeTest{
    public static void main(String[] args) {
        Employee emp1 = new Employee(111,"Harshal",50000);
        emp1.display();

        Employee.setBonus(15);
        emp1.display();
    }
}