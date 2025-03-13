/*Authour: Masindano Masila
Reg NO: BSCIT-05-0133/2024
Date: Wen, March 12
Version 2*/

//Objective: Create a player information system that stores player name, score and level. The system should be able to display the player information.
#include <iostream>
using namespace std;

//structure to store player information
struct Player {
    string name;
    int score;
    int level;

};

//function to display player information
void displayPlayer(Player p) {
    cout << "Player name: " << p.name << endl;
    cout << "Player score: " << p.score << endl;
    cout << "Player level: " << p.level << endl;
}

//main function
int main () {
//create two player objects
    Player p1 = {"Masila", 100, 1};
    Player p2 = {"Martha", 90, 2};


//display the player information
    displayPlayer(p1);
    displayPlayer(p2);

    return 0;
}