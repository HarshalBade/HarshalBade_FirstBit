package p2;
import p1.Employee;

public class Admin extends Employee{
    double allowance;

    public Admin(){
        super();
    }
    public Admin(int id, String name, double sal, double allowance){
        super(id, name, sal);
        this.allowance=allowance;
    }

    public void setAllowance(double allowance) {
        this.allowance = allowance;
    }

    double getAllowance(){
        return this.allowance;
    }

    @Override
    public String toString() {
        return super.toString() + " Admin{" +
                "allowance=" + allowance +
                '}';
    }
    public double calSal(){
        return getSalary() + getAllowance();
    }
}