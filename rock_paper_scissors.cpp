//
// Created by qqknn on 6/6/2023.
//

/* This program will implement the infamous rock paper scissors lizard spock
 * from the show big bang theory to defy the tie odds and reduce them significantly.
 * Furthermore, the response on the second end is computer generated with a CLI.
 *
 * */
#include <iostream>
#include <string>
#include <stdlib.h> // for random function
using namespace std;

int main() {
    // first we will need a menu for the user
    cout << "________________________________________\n";
    cout << "  Rock, Paper Scissors, Lizard, Spock!\n";
    cout << "  1) ✊\n" << "  2) 🤚 \n" << "  3) ✌️ \n" << "  4) 🦎\n" << "  5) 🖖\n";
    cout << "________________________________________\n";
    cout << "shoot! ";
    int user;
    cin >> user;

    // for the computer response, we want to generate an unexpected sequence of numbers
    srand(time(NULL));
    // our generated number is larger than our options, hence we just take mod 5 and add 1
    // since we do not have option 0
    int computer = rand() % 5 + 1;
    // now we are going to use if statements to define the logic of our program.
    // to further understand what is happening please check the file appended in GitHub.
    bool win = false;
    if(computer == user){
        cout << "computer choose: " << computer << endl;
        cout << "User and Computer Tied!";
    } else {
        switch (user) {
            case 1:
                if (computer == 3 || computer == 4) {
                    win = true;
                } else {
                    win = false;
                }
                break;
            case 2:
                if (computer == 1 || computer == 5) {
                    win = true;
                } else {
                    win = false;
                }
                break;
            case 3:
                if (computer == 2 || computer == 4) {
                    win = true;
                } else {
                    win = false;
                }
                break;
            case 4:
                if (computer == 5 || computer == 2) {
                    win = true;
                } else {
                    win = false;
                }
                break;
            case 5:
                if (computer == 1 || computer == 2) {
                    win = true;
                } else {
                    win = false;
                }
                break;
            default:
                cout << "not an option, try again!";
                return 0;
        }
        // print: message to the winner
        cout << "computer choose: " << computer << endl;
        if (win) {
            cout << "\nthe User wins! 😊";
        } else {
            cout << "Computer Wins 🥲";

        }
    }
    return 0;
}