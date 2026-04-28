public class BankAccount {
    int accountNumber;
    String HolderName;
    double balance;
    int mobNumber;

    BankAccount(){}
    BankAccount(int account, String name, double balance, int mobile){
        this.accountNumber=account;
        this.HolderName=name;
        this.balance=balance;
        this.mobNumber=mobile;
    }
    public int getAccountNumber() {
        return accountNumber;
    }

    public void setAccountNumber(int accountNumber) {
        this.accountNumber = accountNumber;
    }

    public int getMobNumber() {
        return mobNumber;
    }

    public void setMobNumber(int mobNumber) {
        this.mobNumber = mobNumber;
    }

    public double getBalance() {
        return balance;
    }

    public void setBalance(double balance) {
        this.balance = balance;
    }

    public String getHolderName() {
        return HolderName;
    }

    public void setHolderName(String holderName) {
        HolderName = holderName;
    }

    void withdrawal(double amount){
        System.out.println("Current Balance: "+getBalance());
    }
}//class BankAccount ends here

class SavingAccount extends BankAccount{
    double minBalanceLimit;
    double withdrawalLimit;

    SavingAccount(){
        super();
    }
    SavingAccount(int account, String name, double balance, int mobile, double minBalance, double withdrowLimit){
        super(account,name,balance,mobile);
        this.minBalanceLimit=minBalance;
        this.withdrawalLimit=withdrowLimit;
    }
    public double getMinBalanceLimit() {
        return minBalanceLimit;
    }
    public void setMinBalanceLimit(double minBalanceLimit) {
        this.minBalanceLimit = minBalanceLimit;
    }
    public double getWithdrawalLimit() {
        return withdrawalLimit;
    }
    public void setWithdrawalLimit(double withdrawalLimit) {
        this.withdrawalLimit = withdrawalLimit;
    }

    @Override
    void withdrawal(double amount) {
        super.withdrawal(amount);
        if(amount <= balance && amount <= 5000){
            balance-=amount;
            System.out.println("Withdrawal Successfully."+"\n");
        }
        else
            System.out.println("Insufficient Balance..!"+"\n");
    }
}//class SavingAccount ends here

class CurrentAccount extends BankAccount{
    double overdraftLimit;
    double overdraftBalance;

    CurrentAccount(){
        super();
    }
    CurrentAccount(int account, String name, double balance, int mobile, double overdraftLimit, double overdraftBalance){
        super(account, name, balance, mobile);
        this.overdraftLimit=overdraftLimit;
        this.overdraftBalance=overdraftBalance;
    }
    public double getOverdraftBalance() {
        return overdraftBalance;
    }

    public void setOverdraftBalance(double overdraftBalance) {
        this.overdraftBalance = overdraftBalance;
    }

    public double getOverdraftLimit() {
        return overdraftLimit;
    }

    public void setOverdraftLimit(double overdraftLimit) {
        this.overdraftLimit = overdraftLimit;
    }

    @Override
    void withdrawal(double amount) {
        super.withdrawal(amount);
        if(amount<=balance+overdraftLimit){
            balance-=amount;
            System.out.println("Withdrawal Successfully."+"\n");
        }
        else
            System.out.println("Overdraft limit exceeded...");
    }
}

class BankTest{
    public static void main(String[] args) {
        BankAccount account = new SavingAccount(12345,"Harshal Bade", 100000,1234567890,1000,50000);
        account.withdrawal(4000);

        account = new CurrentAccount(11112,"Harry Bade", 200000, 1234512345, 500000, 300000);
        account.withdrawal(12000);
    }
}