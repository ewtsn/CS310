#include <iomanip>
#include <iostream>

using namespace std;

// Your class should, at least, provide the following operations: set the account number, retrieve the account number, retrieve the balance,
// deposit and withdraw money, and print account information. Add appropriate constructors.
class bankAccount {
   private:
    string name;
    int accountNumber;
    double balance;

    static int nextAccountNumber;

    void setAccountNumber() {
        accountNumber = nextAccountNumber++;
    }

   public:
    string getAccountName() {
        return name;
    }

    int getAccountNumber() {
        return accountNumber;
    }

    double getBalance() {
        return balance;
    }

    void setBalance(double b) {
        balance = b;
    }

    void setAccountName(string n) {
        name = n;
    }

    void deposit(double a) {
        balance += a;
    }

    void withdraw(double a) {
        balance -= a;
    }

    void display() {
        cout << setw(15) << left << "Name" << " : " << getAccountName() << endl;
        cout << setw(15) << left << "Number" << " : " << getAccountNumber() << endl;
        cout << setw(15) << left << "Balance" << " : " << getBalance() << endl;
    }

    bankAccount(string n, double b) {
        setAccountName(n);
        setAccountNumber();
        setBalance(b);
    }
};

// set interest rate, retrieve interest rate, set minimum balance, retrieve minimum balance, set service charges, retrieve service charges,
// post interest, verify if the balance is less than the minimum balance, write a check,
// withdraw (override the method of the base class), and print account information. Add appropriate constructors.

class checkingAccount : public bankAccount {
   private:
    double minimumnBalance;
    double serviceCharge;
    double interestRate;

    bool verifyBalance() {
        if (getBalance() < minimumnBalance) {
            return false;
        }
        return true;
    }
    void applyServiceCharge() {
        bankAccount::withdraw(serviceCharge);
        cout << "Service Charge Applied!" << endl;
    }

   public:
    void setMinimumBalance(double b) {
        minimumnBalance = b;
    }
    double getMinimumBalance() {
        return minimumnBalance;
    }
    void setServiceCharge(double c) {
        serviceCharge = c;
    }
    double getServiceCharge() {
        return serviceCharge;
    }
    void withdraw(double a) {
        bankAccount::withdraw(a);
        if (!verifyBalance()) applyServiceCharge();
    }
    void postInterest() {
        deposit(getBalance() * getInterestRate());
    }
    void setInterestRate(double interest) {
        interestRate = interest;
    }
    double getInterestRate() {
        return interestRate;
    }
    void accountInfo() {
        display();
        cout << setw(15) << left << "Minimum Balance" << " : " << getMinimumBalance() << endl;
        cout << setw(15) << left << "Service Charge" << " : " << getServiceCharge() << endl;
        cout << setw(15) << left << "Interest Rate" << " : " << getInterestRate() << endl;
        cout << endl;
    }
    checkingAccount(string n, double b, double m, double sc, double rate) : bankAccount(n, b) {
        minimumnBalance = m;
        serviceCharge = sc;
        interestRate = rate;
    }
};

// set interest rate, retrieve interest rate, post interest, withdraw (override the method of the base class), and print account information. Add

class savingsAccount : public bankAccount {
   private:
    double interestRate;

   public:
    void setInterestRate(double interest) {
        interestRate = interest;
    }
    double getInterestRate() {
        return interestRate;
    }
    void withdraw(double a) {
        bankAccount::withdraw(a);
    }
    void postInterest() {
        deposit(getBalance() * getInterestRate());
    }
    void accountInfo() {
        display();
        cout << setw(15) << left << "Interest Rate" << " : " << getInterestRate() << endl;
        cout << endl;
    }

    savingsAccount(string n, double b, double rate) : bankAccount(n, b) {
        interestRate = rate;
    }
};

//  must be initialized outside the class to avoid errors with static declaration inside classes.
//  https://stackoverflow.com/questions/5019856/initialize-static-variables-in-c-class
int bankAccount::nextAccountNumber = 1;

int main() {
    checkingAccount c("John", 500, 10, 100, .10);
    savingsAccount s("Bill", 10000, .01);

    cout << "Checking Account Test:" << endl;
    c.accountInfo();
    c.deposit(100);
    c.postInterest();
    c.withdraw(1000);
    c.accountInfo();

    cout << "Savings account test:" << endl;
    s.accountInfo();

    s.deposit(100);
    s.postInterest();
    s.withdraw(500);
    s.accountInfo();
}