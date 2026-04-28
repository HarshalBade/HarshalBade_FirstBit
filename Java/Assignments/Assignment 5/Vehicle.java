public class Vehicle {
    int vehicleNumber;
    String model;
    String companyName;
    int noOfWheels;
    double price;

    Vehicle(){
    }
    Vehicle(int vehicleNumber, String model, String companyName, int noOfWheels, double price){
        this.vehicleNumber=vehicleNumber;
        this.model=model;
        this.companyName=companyName;
        this.noOfWheels=noOfWheels;
        this.price=price;
    }

    public void setVehicleNumber(int vehicleNumber) {
        this.vehicleNumber = vehicleNumber;
    }

    public int getVehicleNumber() {
        return vehicleNumber;
    }

    public void setModel(String model) {
        this.model = model;
    }

    public String getModel() {
        return model;
    }

    public void setCompanyName(String companyName) {
        this.companyName = companyName;
    }

    public String getCompanyName() {
        return companyName;
    }

    public void setNoOfWheels(int noOfWheels) {
        this.noOfWheels = noOfWheels;
    }

    public int getNoOfWheels() {
        return noOfWheels;
    }

    public void setPrice(double price) {
        this.price = price;
    }

    public double getPrice() {
        return price;
    }
    void display(){
        System.out.println("Vehicle Number: "+getVehicleNumber());
        System.out.println("Model: "+getModel());
        System.out.println("Company Name: "+getCompanyName());
        System.out.println("No of Wheels: "+getNoOfWheels());
        System.out.println("Price: "+getPrice());
    }
}//class vehicle ends here

class Bike extends Vehicle{
    int noOfStands;
    int noOfHelmets;
    String bikeCategory;

    Bike(){
        super();
    }
    Bike(int vehicleNumber, String model, String companyName, int noOfWheels, double price,int noOfStands, int noOfHelmets, String bikeCategory){
        super(vehicleNumber, model, companyName, noOfWheels, price);
        this.noOfStands=noOfStands;
        this.noOfHelmets=noOfHelmets;
        this.bikeCategory=bikeCategory;
    }

    public void setNoOfStands(int noOfStands) {
        this.noOfStands = noOfStands;
    }

    public int getNoOfStands() {
        return noOfStands;
    }

    public void setNoOfHelmets(int noOfHelmets) {
        this.noOfHelmets = noOfHelmets;
    }

    public int getNoOfHelmets() {
        return noOfHelmets;
    }

    public void setBikeCategory(String bikeCategory) {
        this.bikeCategory = bikeCategory;
    }

    public String getBikeCategory() {
        return bikeCategory;
    }
    void display(){
        super.display();
        System.out.println("No of Stands: "+getNoOfStands());
        System.out.println("No of Helmets: "+getNoOfHelmets());
        System.out.println("Bike Category: "+getBikeCategory()+"\n");
    }
} // class bike ends here

class Car extends Vehicle{
    boolean hasPowerSteering;
    String driveMode;
    String parkingAssistSensors;

    Car(){
        super();
    }
    Car(int vehicleNumber, String model, String companyName, int noOfWheels, double price, boolean hasPowerSteering, String driveMode, String parkingAssistSensors){
        super(vehicleNumber, model, companyName, noOfWheels, price);
        this.hasPowerSteering=hasPowerSteering;
        this.driveMode=driveMode;
        this.parkingAssistSensors=parkingAssistSensors;
    }

    public void setHasPowerSteering(boolean hasPowerSteering) {
        this.hasPowerSteering = hasPowerSteering;
    }

    public boolean isHasPowerSteering() {
        return hasPowerSteering;
    }

    public String getDriveMode() {
        return driveMode;
    }

    public void setDriveMode(String driveMode) {
        this.driveMode = driveMode;
    }

    public String getParkingAssistSensors() {
        return parkingAssistSensors;
    }

    public void setParkingAssistSensors(String parkingAssistSensors) {
        this.parkingAssistSensors = parkingAssistSensors;
    }
    void display(){
        super.display();
        System.out.println("Power Streering: "+isHasPowerSteering());
        System.out.println("Drive Mode: "+getDriveMode());
        System.out.println("Parking Assist Sensor: "+getParkingAssistSensors()+"\n");
    }
}//Class Car ends Here

class Bus extends Vehicle{
    int passengerCapacity;
    int standingCapacity;

    Bus(){
        super();
    }
    Bus(int vehicleNumber, String model, String companyName, int noOfWheels, double price, int passengerCapacity, int standingCapacity){
        super(vehicleNumber, model, companyName, noOfWheels, price);
        this.passengerCapacity=passengerCapacity;
        this.standingCapacity=standingCapacity;
    }
    public int getPassengerCapacity() {
        return passengerCapacity;
    }

    public void setPassengerCapacity(int passengerCapacity) {
        this.passengerCapacity = passengerCapacity;
    }

    public int getStandingCapacity() {
        return standingCapacity;
    }

    public void setStandingCapacity(int standingCapacity) {
        this.standingCapacity = standingCapacity;
    }

    @Override
    void display() {
        super.display();
        System.out.println("Passenger Capacity: "+getPassengerCapacity());
        System.out.println("Standing Capacity: "+getStandingCapacity()+"\n");
    }
}//Class Bus ends here

class VehicleTest{
    public static void main(String[] args) {
        Bike bike = new Bike(1234, "NS160", "Pulsur", 2, 150000, 1, 1, "Petrol");
        bike.display();

        Car car = new Car(1111, "X7", "BMW", 4, 2500000, true, "Automatic", "ObjectDetection");
        car.display();

        Bus bus = new Bus(2222, "Traveller", "Borce", 6, 2000000, 22, 10);
        bus.display();
    }
}
