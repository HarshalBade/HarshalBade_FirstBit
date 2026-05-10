package p2;
import p1.Employee;

public class HR extends Employee{
    private double commission;

    public HR(){
        super();
    }
    public HR(int id,String name,double sal,double commission){
        super(id, name, sal);
        this.commission=commission;
    }
    public void setCommission(double commission){
        this.commission=commission;
    }
    public double getCommission(){
        return this.commission;
    }

    @Override
    public String toString() {
        return super.toString() + " HR{" +
                "commission=" + commission +
                '}';
    }
    public double calSal(){
        return salary + commission;
    }
}
