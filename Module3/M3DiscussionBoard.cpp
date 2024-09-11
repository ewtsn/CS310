#include <iostream>

using namespace std;

int main() {

    string name;
    string favoriteNumber;

    cout << "what is your name?" << endl;
    cin << name;
    cout << "what is your favorite number?" << endl;
    cin >> favoriteNumber;

    if (favoriteNumber <= 10) {
        cout << "wow thats a low number!" << endl;
    }
    if (favoriteNumber > 10) {
        cout << "wow thats a high number!" << endl;
    }

}