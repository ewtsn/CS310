// Define the class bankAccount to implement the basic properties of a bank account. An object of this class should store the following data:

//     Account holder’s name (string)
//     account number ( int )
//     account type (string, checking/saving)
//     balance ( double )
//     interest rate ( double )
//         Special note: store interest rate as a decimal number

// Add appropriate member functions to manipulate the object. Use a static member in the class to automatically assign account numbers.
// Also declare an array of 10 components of type bankAccount to process up to 10 customers and write a program to illustrate how to use your class.

#include <iomanip>
#include <iostream>

using namespace std;

class bankAccount {
   private:
    string name;
    string accountType;
    int accountNumber;
    double balance;
    double interestRate;

    static int nextAccountNumber;

    void setAccountNumber() {
        accountNumber = nextAccountNumber++;
    }

   public:
    string getAccountName() {
        return name;
    }

    string getAccountType() {
        return accountType;
    }

    int getAccountNumber() {
        return accountNumber;
    }

    double getBalance() {
        return balance;
    }
    double getInterestRate() {
        return interestRate;
    }

    void setAccountName(string n) {
        name = n;
    }

    void setAccountType(string type) {
        if (type == "checking" || type == "saving")
            accountType = type;
        else
            cout << "Account type error!" << endl;
    }

    void setBalance(double b) {
        balance = b;
    }
    void setInterestRate(double interest) {
        interestRate = interest;
    }

    void display() {
        cout << setw(9) << left << "Name:" << getAccountName() << endl;
        cout << setw(9) << left << "Type:" << getAccountType() << endl;
        cout << setw(9) << left << "Number:" << getAccountNumber() << endl;
        cout << setw(9) << left << "Balance:" << getBalance() << endl;
        cout << setw(9) << left << "Rate:" << getInterestRate() << endl;
    }

    bankAccount(string n, string t, double b, double interest) {
        setAccountName(n);
        setAccountType(t);
        setAccountNumber();
        setBalance(b);
        setInterestRate(.025);
    }
};

// must be initialized outside the class to avoid errors with static declaration inside classes.
//  https://stackoverflow.com/questions/5019856/initialize-static-variables-in-c-class
int bankAccount::nextAccountNumber = 1;

int main() {
    bankAccount accounts[10] = {
        bankAccount("Rohn", "checking", 120, .01),
        bankAccount("John", "saving", 120, .02),
        bankAccount("Bohn", "checking", 1940, .03),
        bankAccount("Dohn", "saving", 220, .05),
        bankAccount("Tohn", "checking", 19, .01),
        bankAccount("James", "checking", 920, .1),
        bankAccount("Roger", "saving", 15220, .09),
        bankAccount("Jeffery", "saving", 1920, .01),
        bankAccount("Bob", "checking", 2130, 1),
        bankAccount("Alice", "saving", 112420, .01)};

    cout << "Here is the information for all the accounts";
    for (int i = 0; i < 10; i++) {
        accounts[i].display();
        cout << endl;
    }

    cout << "Here is an example of the member methods for the bankAccount class" << endl;
    cout << "Before: " << endl;
    accounts[0].display();
    accounts[0].setAccountName("Todd");
    accounts[0].setAccountType("saving");
    accounts[0].setBalance(999999);
    accounts[0].setInterestRate(.15);
    cout << endl;
    cout << "After:" << endl;
    accounts[0].display();
}