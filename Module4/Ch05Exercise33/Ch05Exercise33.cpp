// Bianca is preparing special dishes for her daughter’s birthday.
// It takes her "a" minutes to prepare the first dish, and each following dish takes "b" minutes longer than the previous dish.
// She has "t" minutes to prepare the dishes.
// For example, if the first dish takes a = 10 minutes and b = 5, then the second dish will take 15 minutes, the third dish will take 20 minutes, and so on.
// If she has 80 minutes to prepare the dishes, then she can prepare four dishes because 10 + 15 + 20 + 25 = 70.
// Write a program that prompts the user to enter the values of a, b, and t, and outputs the number of dishes Bianca can prepare.

#include <iostream>

using namespace std;

int main()
{

    int a;
    int b;
    int t;
    int i;
    int count = 0;

    cout << "Enter the initial time." << endl;
    cin >> a;
    cout << "Enter the time per addional dish" << endl;
    cin >> b;
    cout << "Enter the time limit" << endl;
    cin >> t;

    while (true)
    {
        if ((i + a) < t)
        {
            i += a;
            a += b;
            count++;
        }
        else
        {
            break;
        }
    }

    cout << "Bianca can complete " << count << " dishes." << endl;
}