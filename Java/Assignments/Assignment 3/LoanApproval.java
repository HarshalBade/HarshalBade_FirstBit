class Student {
	int rollNo;
	String name;
	double percentage;

	Student(int roll, String name, double per){
		this.rollNo=roll;
		this.name=name;
		this.percentage=per;
	}
}
class Employee{
	int id;
	String name;
	double annualSalary;
	
	Employee(int id, String name, double annual){
		this.id=id;
		this.name=name;
		this.annualSalary=annual;
	}
} 
class Bank {
	void approveLoan(Student st){
		if(st.percentage <= 100 && st.percentage >= 80)
			System.out.println("Loan Amount: 2,00,000");
		else if(st.percentage < 80 && st.percentage >= 60)
			System.out.println("Loan Amount: 1,00,000");
		else if(st.percentage < 60 && st.percentage >= 40)
	 		System.out.println("Loan Amount: 50,000");
		else
			System.out.println("No loan approved");
	}
	void approveLoan(Employee emp){
		if(emp.annualSalary >= 1200000)
			System.out.println("Loan Amount: 7,00,000");
		else if(emp.annualSalary < 1200000 && emp.annualSalary >= 1000000)
			System.out.println("Loan Amount: 6,00,000");
		else if(emp.annualSalary < 1000000 && emp.annualSalary >= 600000)
	 		System.out.println("Loan Amount: 5,00,000");
		else  if(emp.annualSalary < 600000 && emp.annualSalary >= 400000)
			System.out.println("Loan Amount: 4,00,000");
		else
			System.out.println("No loan approved");
	}
}
class LoanApproval{
	public static void main(String[] args){
		Student stud = new Student(11,"Harshal",88.87);
		Employee emp = new Employee(101,"Harry",460000);

		Bank bk = new Bank();
		bk.approveLoan(stud);
		bk.approveLoan(emp);
	}
}