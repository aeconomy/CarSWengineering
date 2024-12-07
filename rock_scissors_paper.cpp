#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string getComputerChoice() {
    srand(time(0));
    int randomChoice = rand() % 3;
    if (randomChoice == 0) return "Rock";
    else if (randomChoice == 1) return "Paper";
    else return "Scissors";
}

string getUserChoice() {
    string choice;
    cout << "Enter Rock, Paper, or Scissors: ";
    cin >> choice;
    return choice;
}

string determineWinner(string userChoice, string computerChoice) {
    if (userChoice == computerChoice) return "It's a tie!";
    if ((userChoice == "Rock" && computerChoice == "Scissors") ||
        (userChoice == "Paper" && computerChoice == "Rock") ||
        (userChoice == "Scissors" && computerChoice == "Paper")) {
        return "You win!";
    } else {
        return "Computer wins!";
    }
}

int main() {
    string userChoice = getUserChoice();
    string computerChoice = getComputerChoice();
    
    cout << "Computer chose: " << computerChoice << endl;
    cout << determineWinner(userChoice, computerChoice) << endl;

    return 0;
}