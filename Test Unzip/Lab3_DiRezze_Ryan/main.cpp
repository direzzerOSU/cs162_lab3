/*********************************************************************
** Program name: War Game with Dice
** Author: Ryan DiRezze
** Date: October 14, 2018
** Description: Runs the War Game with Dice program by integrating
	all header files with class definitions and corresponding
	implementation files.
*********************************************************************/

#include "menu.hpp"
#include "game.hpp"
#include "dice.hpp"
#include "inputValidation.hpp"

// runs the program by integrating all class' and function implementations
int main(){
	// initialize the "seed" (for the use of "rand()" later on within this program)
	std::srand(std::time(0));

   cout << endl;
   // initialize variables for this program
   bool selection = true;   // used to determine when to execute the menu & program vs. quit the program
   string programName = "Ryan's War Game";

	// keeps prompting the menu after playing a game of "War" until the player tells the program to quit
   while(selection == true){
      // prompts the menu with options to play a game, which begins a game, or quit the program
      menu(selection);

      if(selection == false){
         break;
      }

		// starts (and plays) a game of War with Dice if the user decides to play (and doesn't quit the program)
      Game game = Game();

		cout << endl;
		while(game.getRound() <= game.getMaxRounds()) {
			// plays a round of War until all rounds have been played
			game.play();
		}
   }
   cout << endl;
}
