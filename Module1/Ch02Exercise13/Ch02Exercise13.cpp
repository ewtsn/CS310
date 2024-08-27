#include <iostream>

using namespace std;

int main()
{
    float price = 10;
    float markup = .05;
    float salesTax = .08;
    float markedUpPrice = (markup * price) + price;
    float finalPrice = (markedUpPrice * salesTax) + markedUpPrice;

    cout << "The original price of the item is: $" << price << endl;
    cout << "The markup percentage is: " << markup * 100 << "%" << endl;
    cout << "The marked up price is: $" << markedUpPrice << endl;
    cout << "The sales tax is: " << salesTax * 100 << "%" << endl;
    cout << "The price after tax is: $" << finalPrice << endl;

    return 1;
}