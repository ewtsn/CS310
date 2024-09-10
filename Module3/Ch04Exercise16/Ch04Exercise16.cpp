// A new author is in the process of negotiating a contract for a new romance novel. The publisher is offering three options. 
// In the first option, the author is paid $5,000 upon delivery of the final manuscript and $20,000 when the novel is published. 
// In the second option, the author is paid 12.5% of the net price of the novel for each copy of the novel sold. 
// In the third option, the author is paid 10% of the net price for the first 4,000 copies sold, and 14% of the net price for the copies sold over 4,000. 
// The author has some idea about the number of copies that will be sold and would like to have an estimate of the royalties generated under each option. 
// Write a program that prompts the author to enter the net price of each copy of the novel and the estimated number of copies that will be sold. 
// The program then outputs the royalties under each option and the best option the author could choose. 
// (Use appropriate named constants to store the special values such as royalty rates and fixed royalties.)

#include <iostream>

using namespace std;

int main() {

    const int firstOption1 = 5000;
    const int firstoption2 = 20000;
    const float secondOption = .125f;
    const float thirdOption1 = .1f;
    const float thirdOption2 = .14f;

    float firstOptionRoyalties;
    float secondOptionRoyalties;
    float thirdOptionRoyalties;

    float netPrice;
    int numberOfCopies;

    cout << "Please input the number of copies: " << endl;
    cin >> numberOfCopies;

    cout << "Please input the net price of the book: " << endl;
    cin >> netPrice;

    firstOptionRoyalties = firstOption1 + firstoption2;
    secondOptionRoyalties = (secondOption * netPrice) * numberOfCopies;
    
    if (numberOfCopies > 4000) {
        thirdOptionRoyalties = ((thirdOption1 * netPrice) * 4000) + ((thirdOption2 * netPrice) * (numberOfCopies - 4000));
    } 
    
    else {
        thirdOptionRoyalties = ((thirdOption1 * netPrice) * numberOfCopies);
    }

    cout << firstOptionRoyalties << " " << secondOptionRoyalties << " " << thirdOptionRoyalties << endl;

    if (firstOptionRoyalties > secondOptionRoyalties && firstOptionRoyalties > thirdOptionRoyalties) {
        cout << "The most profit will be from the first option: $" << firstOptionRoyalties << endl;
    }
    if (thirdOptionRoyalties > secondOptionRoyalties && thirdOptionRoyalties > firstOptionRoyalties) {
        cout << "The most profit will be from the third option: $" << thirdOptionRoyalties << endl;
    }
    if (secondOptionRoyalties > thirdOptionRoyalties && secondOptionRoyalties > firstOptionRoyalties) {
        cout << "The most profit will be from the second option: $" << secondOptionRoyalties << endl;
    }

    return 0;
}