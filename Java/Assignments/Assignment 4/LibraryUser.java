public class LibraryUser {
    int userId;
    String userName;
    int noOfDays;
    static int fineChargePerDay;

    static {
        fineChargePerDay=5;
    }
    LibraryUser(int id, String name, int days){
        this.userId=id;
        this.userName=name;
        this.noOfDays=days;
    }
    public int getUserId() {
        return userId;
    }

    public void setUserId(int userId) {
        this.userId = userId;
    }

    public String getUserName() {
        return userName;
    }

    public void setUserName(String userName) {
        this.userName = userName;
    }

    public int getNoOfDays() {
        return noOfDays;
    }

    public void setNoOfDays(int noOfDays) {
        this.noOfDays = noOfDays;
    }

    public static int getFineChargePerDay() {
        return fineChargePerDay;
    }

    public static void setFineChargePerDay(int fineChargePerDay) {
        LibraryUser.fineChargePerDay = fineChargePerDay;
    }
    public double calculateFine(){
        double totalFine = this.getNoOfDays() * getFineChargePerDay();
        return totalFine;
    }
    void display() {
        System.out.println("User Id: " + this.getUserId());
        System.out.println("User Name: " + this.getUserName());
        System.out.println("No of Days Are Passed: " + this.getNoOfDays());
        System.out.println("Fine Per Day: " + getFineChargePerDay());
        System.out.println("Total Fine Charged: " +calculateFine()+"\n");
    }
}

class LibraryTest{
    public static void main(String[] args) {
        LibraryUser user = new LibraryUser(101,"Harshal Bade",10);
        user.display();

        LibraryUser.setFineChargePerDay(6);
        user.display();
    }
}
