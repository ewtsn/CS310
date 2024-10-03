#include <iostream>

using namespace std;

Enum Letter {
    A, B, C, D, E, F, G, H, I, J, K, L, M, N, O P, Q, R, S, T, U, V, W, X, Y, Z
};

int main() {
    Letter l = E;

    cout << "I made an enumerator for the alphabet" << endl;

    if (l == E) {
        cout << "Todays letter is E!" << endl;
    } 

    
}