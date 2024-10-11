// Write a program that allows the user to enter the last names of five candidates in a local election and the number of votes received by each candidate.
// The program should then output each candidate’s name, the number of votes received, and the percentage of the total votes received by the candidate.

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    string candidates[5];
    int votesReceived[5];
    int totalVotes = 0;
    int winnerVotes = -1;
    string winners = "";

    // input
    for (int i = 0; i < 5; i++) {
        cout << "Please enter the last name of candidate " << i + 1 << endl;
        cin >> candidates[i];
            cout << "Please enter the number of votes for candidate " << candidates[i] << endl;
        cin >> votesReceived[i];
        totalVotes += votesReceived[i];
    }
    // for (int i = 0; i < 5; i++) {

    // }

    cout << setw(25) << left << "Candidate" << setw(25) << left << "Number of Votes" << setw(25) << left << "% of Total Votes" << endl;
    for (int i = 0; i < 5; i++) {
        cout << setw(25) << left << candidates[i] << setw(25) << left << votesReceived[i] << setprecision(2) << fixed << ((float)votesReceived[i] / (float)totalVotes) * 100.0 << "%" << endl;
    }

    for (int i = 0; i < 5; i++) {
        if (votesReceived[i] == winnerVotes) {
            winners += " and " + candidates[i];
        }

        if (votesReceived[i] > winnerVotes) {
            winners = candidates[i];
            winnerVotes = votesReceived[i];
        }
        
    }
    cout << "The winner(s) is " << winners << " with " << winnerVotes << " votes" << endl;
}
