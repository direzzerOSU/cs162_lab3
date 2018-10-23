/*********************************************************************
** Program name: War Game with Dice
** Author: Ryan DiRezze
** Date: October 14, 2018
** Description: Prompts a menu where the user must choose to either:
   play a game of War with Dice or quit the program.
*********************************************************************/

#include "menu.hpp"

// prints the menu and accepts user input to determine whether a game
// will be played or the program will be quit. Depending upon the user's
// input, the function's parameter will be updated, which affects
// the main file's while loop; if the program quits, then the while loop
// exits, preventing the game from being played and ending the program
void menu(bool& result){
   // introduction
   string program_name = "Ryan's War Game";
   cout << "Hello! Welcome to " << program_name << " Program:" << endl;

   // user input to start the program or quit
   cout << endl << "Please select an option from below:" << endl;
   cout << "   a. Start " << program_name << endl;
   cout << "   b. Quit" << endl << endl;
   char selection = ' ';
   cout << "Selection: ";
   cin >> selection;
   cout << endl;

   // input validation until the user selects a valid option
   while(tolower(selection) != 'a' && tolower(selection) != 'b'){
      cout << "Uh oh... That's not a valid option. Please try again." << endl;
      cout << "Selection: ";
      cin >> selection;
   }

   if(tolower(selection) == 'a') {
      result = true;
   }
   else if(tolower(selection) == 'b') {
      cout << "Ending program..." << endl;
      result = false;
   }
}
