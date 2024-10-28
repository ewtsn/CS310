#include <iostream>

using namespace std;

int main() {
    int *p;
    int number = 10;

    *p = number;

    cout << "Dereferencing pointer: " << *p << endl;

    int arr[5] = {1, 2, 3, 4, 5};
    int *arrayPointer = arr;

    arrayPointer = "Hello world!";

    return 0;
}