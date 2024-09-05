// Write a program that accepts as input netBalance, payment, d1, d2, and interest rate per month. 
//The program outputs the interest. 
//Format your output to two decimal places and use a thousands separator for the dollar amounts.

#include <iostream>

using namespace std;

int main() {
    float netBalance, payment, d1, d2, interest, averageDailyBalance;

    cout << "Input your balance shown on the bill: " << endl;
    cin >> netBalance;
    cout << "Input your Payment: " << endl;
    cin >> payment;
    cout << "Input the number of days in the billing cycle: " << endl;
    cin >> d1;
    cout << "Input the number of days until the next payment is made: " << endl;
    cin >> d2;
    cout << "Input the interest rate: " << endl;
    cin >> interest;

    averageDailyBalance = (netBalance * d1 - payment * d2) / d1;
    interest = averageDailyBalance * interest;

    cout << "The total interest is: $" << interest << endl;

    return 0;
}
