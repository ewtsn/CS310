// Write a program that prompts the user to input a string. 
// The program then uses the function substr to remove all the vowels from the string. 
// For example, if str = "There", then after removing all the vowels, str = "Thr".
// After removing all the vowels, output the string. 
// Your program must contain a function to remove all the vowels and a function to determine whether a character is a vowel.

#include <iostream>
#include <string>

using namespace std;

bool isVowel(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return true;
    }
    return false;
}

string removeVowels(string str) {
    string newstr = "";

    for (int i = 0; i < str.length(); i++ ) {
        if (!isVowel(str[i])) {
            newstr += str[i];
        }
    }
    return newstr;
}

int main() {
    string str = "";

    cout << "Enter a string to remove the vowels " << endl;
    getline(cin, str); // From here https://stackoverflow.com/questions/5838711/stdcin-input-with-spaces
    cout << "Here is your string without vowels " << removeVowels(str) << endl;
}