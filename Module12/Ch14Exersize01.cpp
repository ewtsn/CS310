// Write a program that prompts the user to enter a length in feet and inches and outputs the equivalent length in centimeters.
// If the user enters a negative number or a nondigit number, throw and handle an appropriate exception and prompt the user to enter another set of numbers.
// Your program must contain at least two exception classes es: negativeNumber and nonNumber.

#include <iomanip>
#include <iostream>
#include <limits>

using namespace std;

class negativeNumber : public runtime_error {
   public:
    negativeNumber() : runtime_error("Input is negative.  Please enter a positive number!") {}
};

class nonNumber : public runtime_error {
   public:
    nonNumber() : runtime_error("Input is not a number. Please enter a non-negative number!") {}
};

int main() {
    double feet;
    double inches;

    cout << "Please enter the amount of feet to convert: " << endl;
    while (true) {
        try {
            cin >> feet;
            if (cin.fail()) {  // https:// stackoverflow.com/questions/5655142/how-to-check-if-input-is-numeric-in-c
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                throw nonNumber();
            }
            if (feet < 0) throw negativeNumber();
            break;
        }

        catch (nonNumber& e) {
            cout << e.what() << endl;
        } catch (negativeNumber& e) {
            cout << e.what() << endl;
        }
    }
    cout << "Please enter the amount of inches to convert: " << endl;
    while (true) {
        try {
            cin >> inches;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                throw nonNumber();
            }
            if (inches < 0) throw negativeNumber();
            break;
        } catch (nonNumber& e) {
            cout << e.what() << endl;
        } catch (negativeNumber& e) {
            cout << e.what() << endl;
        }
    }
    inches += (feet * 12.0);
    cout << "The measurement in centimeters is: " << setprecision(2) << fixed << (inches * 2.54) << "cm" << endl;

    return 0;
}