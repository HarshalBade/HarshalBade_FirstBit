package p1;

abstract public class Employee{
    protected int id;
    protected String name;
    protected double salary;

    public Employee(){}

    public Employee(int id, String name,double sal){
        this.id=id;
        this.name=name;
        this.salary=sal;
    }
    public void setId(int id){
        this.id=id;
    }
    public int getId(){
        return this.id;
    }
    public void setName(String name){
        this.name=name;
    }
    public String getName(){
        return this.name;
    }
    public void setSalary(double salary){
        this.salary=salary;
    }
    public double getSalary(){
        return this.salary;
    }

    @Override
    public String toString() {
        return "Employee{" +
                "id=" + id +
                ", name='" + name + '\'' +
                ", salary=" + salary +
                '}';
    }
    public abstract double calSal();
}
