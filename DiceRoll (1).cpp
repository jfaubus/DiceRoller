#include <iostream>
#include <cstdlib>
#include <ctime>

//Julia Faubus
//Professor Yeaman
//19 Oct 2023

using namespace std;

int main() {

    int diceOne = 0, diceTwo = 0; //declaring variables
    int x = 0;
    (srand(time(0)));
    while (diceOne + diceTwo != 10) { //the while loop runs while this condition is true


        diceOne = (rand() % 6 + 1); //generates first dice roll
        diceTwo = (rand() % 6 + 1); //generates second dice roll

        cout << "The first die is " << diceOne << endl; //prints roll for the dice
        cout << "The second die is " << diceTwo << endl;


        if (diceOne + diceTwo == 10) { //checks if the two dice add up to 10
            cout << "You win!" << endl;
            x += 1; //adds one to count how many rounds it took to win
            cout << "It took you " << x << " try/tries!";

        } else { //if they don't add up to 10:

            cout << "You lost :(" << endl;
            x += 1; //adds one to count how many rounds it took to win

        }
    }
    return 0;
}