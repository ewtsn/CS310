/*During the tax season, every Friday, the J&J accounting firm provides assistance to people who prepare their own tax returns. Their charges are as follows:

    If a person has low income (<= 25,000) and the consulting time is less than or equal to 30 minutes, there are no charges;
    otherwise, the service charges are 40% of the regular hourly rate for the time over 30 minutes.

    For others, if the consulting time is less than or equal to 20 minutes, there are no service charges;
    otherwise, service charges are 70% of the regular hourly rate for the time over 20 minutes.

(For example, suppose that a person has low income and spent 1 hour and 15 minutes, and the hourly rate is $70.00.
Then the billing amount is 70.00 x 40 x (45/60) = $21.00.)

Write a program that prompts the user to enter the hourly rate, the total consulting time, and whether the person has low income.
The program should output the billing amount.
Your program must contain a function that takes as input the hourly rate, the total consulting time, and a value indicating whether the person has low income.
The function should return the billing amount. Your program may prompt the user to enter the consulting time in minutes.
*/

#include <iostream>

using namespace std;

float billingAmount(float rate, float consultingTime, float income) {

    if (income <= 25000) {
        if (consultingTime <= 30) {
            return 0;
        }
        return ((consultingTime - 30) / 60) * .4 * rate;
    } 
    if (consultingTime <= 20) {
        return 0;
    }
    return ((consultingTime - 20) / 60) * .7 * rate;


}

int main() {
    float rate;
    float consultingTime;
    float income;

    cout << "Please enter the hourly rate" << endl;
    cin >> rate;
    cout << "Please enter the consulting time (minutes)" << endl;
    cin >> consultingTime;
    cout << "Please enter the income" << endl;
    cin >> income;

    cout.precision(2);
    cout << fixed << "The billing amount is $" << billingAmount(rate, consultingTime, income) << "." << endl;

    return 0;
}

