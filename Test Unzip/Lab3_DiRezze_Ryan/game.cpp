/*********************************************************************
** Program name: War Game with Dice
** Author: Ryan DiRezze
** Date: October 14, 2018
** Description: Implements the Game class constructor and other class
	functions. The Game constructor gathers all requird information in
	order to begin a round (and all subsequent rounds until the game
	completes). 
*********************************************************************/

#include "game.hpp"

// initializes and runs the game: War
Game::Game(){
   cout << "How many rounds do you want to play? ";
   cin >> maxRounds;

   intValidation(maxRounds);

   cout << endl << "What type of die will each player have? A normal die or a loaded die?" << endl;
   
   cout << "   a. Normal Die" << endl;
   cout << "   b. Loaded Die" << endl;

	cout << endl << "Please input the die's corresponding letter (a/b): " << endl;

   char selection1;

	// input validation for Player 1's die selection
   while(tolower(selection1) != 'a' && tolower(selection1) != 'b'){
		cout << "   Player 1's Die: ";
      cin >> selection1;

      if(tolower(selection1) != 'a' && tolower(selection1) != 'b')
      {
         cout << "Uh oh... You didn't select a valid option. Please try again..." << endl;
      }
   }

   char selection2;

	// input validation for Player 2's die selection
   while(tolower(selection2) != 'a' && tolower(selection2) != 'b'){
		cout << "   Player 2's Die: ";
      cin >> selection2;
      cout << endl;

      if(tolower(selection2) != 'a' && tolower(selection2) != 'b')
      {
         cout << "Uh oh... You didn't select a valid option. Please try again..." << endl;
      }
   }

   // collect (with input validation) the number of sides for each die
	cout << "How many sides should each player's die have?" << endl;
	int numSides1 = 0;
	cout << "   Player 1's " << charToString(selection1) << ": ";
	cin >> numSides1;

	intValidation(numSides1);

	int numSides2 = 0;
	cout << "   Player 2's " << charToString(selection2) << ": ";
	cin >> numSides2;

	intValidation(numSides2);

   // initialize Player1's object
   if(tolower(selection1) == 'a'){
		player1 = new Die(numSides1);
   }
   else if(tolower(selection1) == 'b'){
		player1 = new LoadedDie(numSides1);
   }

   // initialize Player2's object
   if(tolower(selection2) == 'a'){
		player2 = new Die(numSides2);
   }
   else if(tolower(selection2) == 'b'){
		player2 = new LoadedDie(numSides2);
   }
}

// plays a "round", including dice rolls and a comparison to see who won the round
// adds 1 point to the round winner's score
void Game::play() {
   int value1 = player1->roll();
   int value2 = player2->roll();

	// add 1 to Player 1's score
   if(value1 > value2){
      score_player1();
   }
	// add 1 to Player 2's score
   else if(value2 > value1){
      score_player2();
   }
	// round draw
   else if(value1 == value2){
      // score is unchanged
   }
	// text to help with bug fixing
   else{
      cout << "Uh oh... There appears to be an issue with scoring." << endl;
   }

	// output at the end of each round; round summary
	cout << "War Game (with Dice) | Round: " << currentRound << endl;
   cout << "   Roll (P1):  " << value1 << endl;
   cout << "   Type:  " << player1->getType() << endl;

   cout << "   Roll (P2):  " << value2 << endl;
   cout << "   Type:  " << player2->getType() << endl;

	// print total game scores for each player
   printScores();

   currentRound += 1;
}

// print the game scores for each player
void Game::printScores(){
   cout <<  "Game Score:" << endl;
   cout << "   Player 1 (P1): " << getScore1() << endl;
   cout << "   Player 2 (P2): " << getScore2() << endl << endl;
}

// return Player 1's game score
int Game::getScore1(){
   return player1_score;
}

// return Player 2's game score
int Game::getScore2(){
   return player2_score;
}

// add 1 point to Player 1's game score
void Game::score_player1(){
   player1_score += 1;
}

// add 1 point to Player 2's game score
void Game::score_player2(){
   player2_score += 1;
}

// easily print Die or LoadedDie in text prompts based on user input selections
std::string Game::charToString(char input) {
	std::map<char, std::string> letter;

	letter['a'] = "Die";
	letter['b'] = "LoadedDie";

	return letter[input];
}

// returns the current round number for the current game
int Game::getRound() {
	return currentRound;
}

// returns the max number of rounds for the current game
int Game::getMaxRounds() {
	return maxRounds;
}
