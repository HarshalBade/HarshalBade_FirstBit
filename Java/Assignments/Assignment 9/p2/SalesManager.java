package p2;
import p1.Employee;

public class SalesManager extends Employee{
    private double incentive;
    private int target;

    public SalesManager(){
        super();
    }
    public SalesManager(int id,String name,double sal,double incentive,int target){
        super(id, name, sal);
        this.incentive=incentive;
        this.target=target;
    }

    public void setIncentive(double incentive){
        this.incentive=incentive;
    }
    public double getIncentive(){
        return this.incentive;
    }
    public void setTarget(int target){
        this.target=target;
    }
    public int getTarget(){
        return this.target;
    }

    @Override
    public String toString() {
        return super.toString() + " SalesManager{" +
                "incentive=" + incentive +
                ", target=" + target +
                '}';
    }
    public double calSal(){
        return getSalary() + getIncentive();
    }
}//class sales manager ends here