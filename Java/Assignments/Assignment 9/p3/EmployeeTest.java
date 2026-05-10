package p3;
import p1.Employee;
import p2.Admin;
import p2.HR;
import p2.SalesManager;

public class EmployeeTest {
    public static void main(String[] args) {
        Employee[] emp = new Employee[3]; // Employee array (Runtime Polymorphism)
        emp[0] = new HR(101, "Harshal",45000,5000);
        emp[1] = new SalesManager(102, "Nikhil",50000,4000,50);
        emp[2] = new Admin(103,"Harry",40000, 10000);

        for (Employee e : emp){
            System.out.println(e);
            System.out.println("calculated Salary: " +e.calSal());
            System.out.println(" - - - - - ");
        }
    }
}
