public class Shape {
    double area(){
        return 0;
    }
}

class Circle extends Shape{
    double radius;

    Circle(){
        super();
    }
    Circle(int radius){
        super();
        this.radius=radius;
    }
    public void setRadius(double radius) {
        this.radius = radius;
    }

    public double getRadius() {
        return radius;
    }

    @Override
    double area() {
        return 3.14*radius*radius;
    }
} //class circle ends here

class Triangle extends Shape{
    double base;
    double height;

    Triangle(){
        super();
    }
    Triangle(double base, double height){
        this.base=base;
        this.height=height;
    }
    public double getBase() {
        return base;
    }

    public void setBase(double base) {
        this.base = base;
    }

    public double getHeight() {
        return height;
    }

    public void setHeight(double height) {
        this.height = height;
    }

    @Override
    double area() {
        return base*height/2;
    }
} //class Triangle ends here

class Rectangle extends Shape{
    double length;
    double breadth;

    Rectangle(double length, double breadth){
        this.length=length;
        this.breadth=breadth;
    }
    public double getLength() {
        return length;
    }

    public void setLength(double length) {
        this.length = length;
    }

    public double getBreadth() {
        return breadth;
    }

    public void setBreadth(double breadth) {
        this.breadth = breadth;
    }

    @Override
    double area() {
        return length*breadth;
    }
}//class Rectangle ends here

class ShapeTest{
    public static void main(String[] args) {
        Shape shape = new Circle(10);
        System.out.println("Area of Circle: "+shape.area());

        shape = new Triangle(10,10);
        System.out.println("Area of Triangle: "+shape.area());

        shape = new Rectangle(12,15);
        System.out.println("Area of Reactangle: "+shape.area());
    }
}
