/*********************************************************************
** Program name: War Game with Dice
** Author: Ryan DiRezze
** Date: October 14, 2018
** Description:
*********************************************************************/

#include "menu.hpp"
#include "die.hpp"
#include "loadedDie.hpp"
#include "game.hpp"

int main(){
   cout << endl;
   // initialize variables for this program
   bool selection = true;   // used to determine when to execute the menu & program vs. quit the program
   string programName = "Ryan's War Game";

   while(selection == true){
      // repeatedly run the menu after completing the program (until the program is told to quit)
      menu(selection);

      if(selection == false){
         break;
      }

      Game game = Game();

      // // request user input for the # of sides on each die
      // cout << "Please indicate how many sides each die should have while playing " << programName << ": ";
      // int sides;  // # of sides for each die
      // cin >> sides;
      //
      // cout << "Would you like to roll the dice? (Y/N)" << endl;
      // char option;
      // cin >> option;
      // cout << endl;
      // while(tolower(option) != 'y' && tolower(option) != 'n'){
      //    cout << "   Y" << endl;
      //    cout << "   N" << endl;
      //    if(tolower(option) != 'y' && tolower(option) != 'n'){
      //       cout << "Uh oh... You didn't enter a valid option. Please try again: " << endl;
      //    }
      // }
   }
   cout << endl;
}
