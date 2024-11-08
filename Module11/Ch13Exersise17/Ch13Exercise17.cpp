#include <iostream>
#include <random>

using namespace std;

int main() {
    random_device rd;
    mt19937 mt(rd());
    uniform_real_distribution<double> dist(1.0, 100.0);

    for (int i = 0; i < 25; i++) {
        cout << dist(mt) << endl;
    }
}