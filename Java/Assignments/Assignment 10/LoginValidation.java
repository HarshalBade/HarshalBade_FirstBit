import java.util.Scanner;

class InvalidUsernameException extends  Exception{
    @Override
    public String toString() {
        return "Entered username is invalid..!";
    }
}
class InvalidPasswordException extends Exception{
    @Override
    public String toString() {
        return "Entered password is invalid..!";
    }
}

class Login{
    String username = "admin";
    String password = "12345";

    public void validateUsername(String user) throws InvalidUsernameException{
        if (!user.equals(username))
            throw new InvalidUsernameException();
    }
    public void validatePassword(String pass) throws InvalidPasswordException{
        if (!pass.equals(password))
            throw new InvalidPasswordException();
    }
}

class LoginValidation{
    public static void main(String[] args) {
        Login login = new Login();
        Scanner sc = new Scanner(System.in);

        try {
            System.out.println("Enter Username: ");
            String username = sc.nextLine();
            login.validateUsername(username);

            int attempt = 3;
            boolean success = false;
            while(attempt>0){
                System.out.println("\nEnter Password: ");
                String password = sc.nextLine();

                try {
                    login.validatePassword(password);
                    System.out.println("Login Successful!");
                    success = true;
                    break;
                }catch (InvalidPasswordException ipass){
                    attempt--;
                    System.out.println(ipass);
                    if (attempt > 0)
                        System.out.println("Remaining Attempts: " + attempt);
                }
            }
            if(!success)
                System.out.println("Account Locked..!");
        }
        catch (InvalidUsernameException iuser){
            System.out.println(iuser);
            System.out.println("Program Terminated..!");
        }
        sc.close();
    }
}
