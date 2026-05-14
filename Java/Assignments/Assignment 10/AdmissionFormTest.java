import java.awt.*;

class EmptyNameException extends Exception{
    @Override
    public String toString() {
        return "Name is empty..!";
    }
}
class UnderAgeException extends Exception{
    @Override
    public String toString() {
        return "Age must be greater than 16..!";
    }
}
class InvalidPercentageException extends Exception{
    @Override
    public String toString() {
        return "Percentage must be in range of 0 to 100";
    }
}
class NotFitForAdmissionException extends Exception{
    @Override
    public String toString() {
        return "Percentage is should be greater than 35..!";
    }
}
class FeesNotPaidException extends Exception{
    @Override
    public String toString() {
        return "Your does not paid any fees";
    }
}
class InsufficientFeesException extends Exception{
    @Override
    public String toString() {
        return "Firstly paid the all fees..!";
    }
}

class AdmissionForm{
    String studentName;
    int age;
    double percent;
    double courseFees ;
    double feesPaid;

    public AdmissionForm(String name, int age, double percent, double courseFees, double feesPaid){
        this.studentName=name;
        this.age=age;
        this.percent=percent;
        this.courseFees=courseFees ;
        this.feesPaid= feesPaid;
    }
    public void validateForm() throws EmptyNameException,UnderAgeException,InvalidPercentageException,NotFitForAdmissionException,FeesNotPaidException,InsufficientFeesException
    {
        if(studentName==null || studentName.trim().isEmpty()){
            throw new EmptyNameException();
        } else if (age<17) {
            throw new UnderAgeException();
        } else if (percent<0 && percent>100) {
            throw new InvalidPercentageException();
        } else if (percent<35) {
            throw new NotFitForAdmissionException();
        } else if (feesPaid==0) {
            throw new FeesNotPaidException();
        } else if ((courseFees * 0.3) < feesPaid){
            throw new InsufficientFeesException();
        }
    }
}

public class AdmissionFormTest {
    public static void main(String[] args) {
        AdmissionForm form = new AdmissionForm("Harry", 23, 87.66, 40000, 38999);
        try {
            form.validateForm();
        } catch (EmptyNameException en) {
            System.out.println(en);
        } catch (UnderAgeException ua) {
            System.out.println(ua);
        } catch (InvalidPercentageException ip) {
            System.out.println(ip);
        } catch (NotFitForAdmissionException nffa) {
            System.out.println(nffa);
        } catch (FeesNotPaidException fnp) {
            System.out.println(fnp);
        } catch (InsufficientFeesException ife) {
            System.out.println(ife);
        }
    }
}