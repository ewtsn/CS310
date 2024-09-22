#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    while(num < 5) {
        cout << "The number is: " << num << endl;
        num++;
    }

    for (int i = 0; i < 10; i++) {
        cout << "i is: " << i << endl;
    }

    return 0;
}