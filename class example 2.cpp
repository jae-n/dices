//james nguyen progaming lab 3

using namespace std;
#include <iostream>
#include <string>
#include "die.h"
int main()
{
    //constan 
     const int NUM_SIDES=6;
    const int WINNING_TOTAL = 21;
    cout << "what dice: ";
    
    

    int coupterTotal = 0;
    int userTotal = 0;
    string input;
   // int ndie;

    //ask how many dices to roll
  /*  cout << "how many dice you want to roll: ";
    cin >> ndie;
    cout << endl;*/

    //create two die object to repsrent the dice
    die die1(NUM_SIDES);
    die die2(NUM_SIDES);

    //display the introduction
    cout << "let play a game of 21" << endl << endl;
 
    //play as long as the user want to roll the dice and toal does exceed 21
    do {
        //doe the use want to roll the dice
        cout << "would you like to roll the dice?" << endl;
        cout << "enter Y for yes or N for no: ";
        getline(cin, input);
        if (input == "y" || input == "Y") {
            die1.roll();
            die2.roll();

            //increment the comuopter total point
            coupterTotal += die1.getValue() + die2.getValue();

            //roll the dice for the user
            die1.roll();
            die2.roll();

            //increment the user toal point
            userTotal += die1.getValue() + die2.getValue();

            //display the user toal point
            cout << "\n YOu have " << userTotal << " point. " << endl << endl;
        }
        
    }

    while ((userTotal < WINNING_TOTAL)&&(input == "y" || input == "Y"));
    if (userTotal > 0) {
        //display total
        cout << endl << endl << "the comupter had " << coupterTotal << " point. " << endl;
        cout << "you had " << userTotal << " point. " << endl;
        
        //determine the winner
        if (userTotal < WINNING_TOTAL) {
            if (userTotal > coupterTotal || coupterTotal > WINNING_TOTAL) {
                cout << "\n congratuatlion you won" << endl;
            }
            else {
                cout << "better luck next time";
            }

        }
            else 
            {
            
                cout << "better luck next next time";
            }


        }
        cout << "\n__________________________________________" << endl;
        cout << endl;

    }
    