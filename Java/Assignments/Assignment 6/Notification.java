public class Notification {
    int notificationId;
    String message;
    String senderName;
    String receiverName;

    Notification(){}
    Notification(int notificationId, String msg, String sender, String reciever){
        this.notificationId=notificationId;
        this.message=msg;
        this.senderName=sender;
        this.receiverName=reciever;
    }

    public int getNotificationId() {
        return notificationId;
    }

    public void setNotificationId(int notificationId) {
        this.notificationId = notificationId;
    }

    public String getMessage() {
        return message;
    }

    public void setMessage(String message) {
        this.message = message;
    }

    public String getSenderName() {
        return senderName;
    }

    public void setSenderName(String senderName) {
        this.senderName = senderName;
    }

    public String getReceiverName() {
        return receiverName;
    }

    public void setReceiverName(String receiverName) {
        this.receiverName = receiverName;
    }

    void sendNotification(){
        System.out.println("Notification Sending...");
    }
}

class SMS extends Notification{
    int mobileNumber;

    SMS(){
        super();
    }
    SMS(int notificationId, String msg, String sender, String reciever, int mobileNumber){
        super(notificationId, msg, sender, reciever);
        this.mobileNumber=mobileNumber;
    }

    public int getMobileNumber() {
        return mobileNumber;
    }

    public void setMobileNumber(int mobileNumber) {
        this.mobileNumber = mobileNumber;
    }

    @Override
    void sendNotification() {
        super.sendNotification();
        System.out.println("Send Notification via SMS to Mobile Number\n");
    }
}

class Email extends Notification{
    String emailAddress;
    String subject;

    Email(){
        super();
    }
    Email(int notificationId, String msg, String sender, String reciever, String emailAddress, String subject){
        super(notificationId, msg, sender, reciever);
        this.emailAddress=emailAddress;
        this.subject=subject;
    }
    public String getEmailAddress() {
        return emailAddress;
    }

    public void setEmailAddress(String emailAddress) {
        this.emailAddress = emailAddress;
    }

    public String getSubject() {
        return subject;
    }

    public void setSubject(String subject) {
        this.subject = subject;
    }

    @Override
    void sendNotification() {
        super.sendNotification();
        System.out.println("Send Notification via Email Server\n");
    }
}


class TestNotificaion{
    public static void main(String[] args) {
        Notification notify = new SMS(12345, "Hello, I am Harshal.", "Harshal", "Harry", 1234567890);
        notify.sendNotification();

        notify = new Email(67891, "Hello, I am Harry", "Harry", "Harshal", "harshal@gmail.com","About Team Meeting");
        notify.sendNotification();
    }
}