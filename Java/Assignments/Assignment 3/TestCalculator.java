class Calculator{
	int add(int x, int y){
		return x+y;
	}
	double add(double x, double y){
		return x+y;
	}
	double add(int x, double y){
		return x+y;
	}
	double add(double x, int y){
		return x+y;
	}
	int sub(int x, int y){
		return x-y;
	}
	double sub(double x, double y){
		return x-y;
	}
	double sub(int x, double y){
		return x-y;
	}
	double sub(double x, int y){
		return x-y;
	}
	int mul(int x, int y){
		return x*y;
	}
	double mul(double x, double y){
		return x*y;
	}
	double mul(int x, double y){
		return x*y;
	}
	double mul(double x, int y){
		return x*y;
	}
	int div(int x, int y){
		return x/y;
	}
	double div(double x, double y){
		return x/y;
	}
	double div(int x, double y){
		return x/y;
	}
	double div(double x, int y){
		return x/y;
	}
}
class TestCalculator{
	public static void main(String[] args){
		Calculator cal = new Calculator();
		System.out.println("Addition -> int 10 + int 10 = "+cal.add(10,10));
		System.out.println("Addition -> float 12.5 + float 12.5 = "+cal.add(12.5,12.5));
		System.out.println("Addition -> int 10 + float 12.5 = "+cal.add(10,12.5));
		System.out.println("Addition -> float 12.5 + int 10 = "+cal.add(12.5,10));

		System.out.println("\nSubtraction -> int 10 - int 10 = "+cal.sub(10,10));
		System.out.println("Subtraction -> float 12.5 - float 12.5 = "+cal.sub(12.5,12.5));
		System.out.println("Subtraction -> int 10 - float 12.5 = "+cal.sub(10,12.5));
		System.out.println("Subtraction -> float 12.5 - int 10 = "+cal.sub(12.5,10));

		System.out.println("\nMultiplition -> int 10 * int 10 = "+cal.mul(10,10));
		System.out.println("Multiplition -> float 12.5 * flaot 12.5 = "+cal.mul(12.5,12.5));
		System.out.println("Multiplition -> int 10 * flaot 12.5 = "+cal.mul(10,12.5));
		System.out.println("Multiplition -> float 12.5 * int 10 = "+cal.mul(12.5,10));

		System.out.println("\nDivision -> int 10 / int 10 = "+cal.div(10,10));
		System.out.println("Division -> float 12.5 / float 12.5 = "+cal.div(12.5,12.5));
		System.out.println("Division -> int 10 / float 12.5 = "+cal.div(10,12.5));
		System.out.println("Division -> float 12.5 / int 10 = "+cal.div(12.5,10));
	}
}