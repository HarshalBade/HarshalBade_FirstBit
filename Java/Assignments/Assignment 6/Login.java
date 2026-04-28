public class Login {
    int loginId;
    String username;
    String password;

    Login(){}
    Login(int loginId, String username, String password){
        this.loginId=loginId;
        this.username=username;
        this.password=password;
    }
    public int getLoginId() {
        return loginId;
    }

    public void setLoginId(int loginId) {
        this.loginId = loginId;
    }

    public String getUsername() {
        return username;
    }

    public void setUsername(String username) {
        this.username = username;
    }

    public String getPassword() {
        return password;
    }

    public void setPassword(String password) {
        this.password = password;
    }
    void authenticate(){
        System.out.println("Authentication Processing...");
    }
}

class PasswordLogin extends Login{
    String passwordHash;

    PasswordLogin(){
        super();
    }
    PasswordLogin(int loginId, String username, String password, String passwordHash){
        super(loginId,username,password);
        this.passwordHash=passwordHash;
    }

    public void setPasswordHash(String passwordHash) {
        this.passwordHash = passwordHash;
    }

    public String getPasswordHash() {
        return passwordHash;
    }

    @Override
    void authenticate() {
        super.authenticate();
        System.out.println("Match entered password with stored hash\n");
    }
}

class BiometricLogin extends Login{
    String fingerprint;
    String faceId;

    BiometricLogin(){
        super();
    }
    BiometricLogin(int loginId, String username, String password, String fingerprint, String faceId){
        super(loginId, username, password);
        this.fingerprint=fingerprint;
        this.faceId=faceId;
    }
    public String getFingerprint() {
        return fingerprint;
    }

    public void setFingerprint(String fingerprint) {
        this.fingerprint = fingerprint;
    }

    public String getFaceId() {
        return faceId;
    }

    public void setFaceId(String faceId) {
        this.faceId = faceId;
    }

    @Override
    void authenticate() {
        super.authenticate();
        System.out.println("Scan finger and face and verify\n");
    }
}

class OTPLogin extends Login{
    int mobile;

    OTPLogin(){
        super();
    }
    OTPLogin(int loginId, String username, String password,int mobile){
        super(loginId, username, password);
        this.mobile=mobile;
    }
    public int getMobile() {
        return mobile;
    }

    public void setMobile(int mobile) {
        this.mobile = mobile;
    }

    @Override
    void authenticate() {
        super.authenticate();
        System.out.println("Send OTP to mobile number and verify\n");
    }
}

class TestLogin{
    public static void main(String[] args) {
        Login login = new PasswordLogin(101,"Harshal","harshal123","harshal@1c3");
        login.authenticate();

        login = new BiometricLogin(102,"Harry","Harry123","xyz","pqr");
        login.authenticate();

        login = new OTPLogin(103,"Harshal","harshal@123",1234567890);
        login.authenticate();
    }
}