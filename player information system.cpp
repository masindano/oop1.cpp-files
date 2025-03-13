/*Authour: Masindano Masila
Reg NO: BSCIT-05-0133/2024
Date: Wen, March 12
Version 2*/

// Objective: Create a player information system that stores player name, score and level. The system should be able to display the player information.
#include <iostream>
using namespace std;

// structure to store player information
struct Player
{
    string name;
    int score;
    int level;
};

// function to display player information
void displayPlayer(Player p)
{
    cout << "Player name: " << p.name << endl;
    cout << "Player score: " << p.score << endl;
    cout << "Player level: " << p.level << endl;
}

// main function
int main()
{
    // prompts the user to enter player 1 information
    Player p1;
    cout << "Enter player 1 name: " << endl;
    cin >> p1.name;
    cout << "Enter player 1 score: " << endl;
    cin >> p1.score;
    cout << "Enter player 1 level: " << endl;
    cin >> p1.level;
    cout << endl;

    // prompts the user to enter player 2 information
    Player p2;
    cout << "Enter player 2 name: " << endl;
    cin >> p2.name;
    cout << "Enter player 2 score: " << endl;
    cin >> p2.score;
    cout << "Enter player 2 level: " << endl;
    cin >> p2.level;


    // Display player 1 information
    cout << "Player 1 information:" << endl;
    displayPlayer(p1);
    cout << endl;


    // Display player 2 information
    cout << "Player 2 information:" << endl;
    displayPlayer(p2);
    cout << endl;

    return 0;
}
