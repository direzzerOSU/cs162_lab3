/*********************************************************************
** Program name: War Game with Dice
** Author: Ryan DiRezze
** Date: October 14, 2018
** Description:
*********************************************************************/

#include "game.hpp"

// initializes and runs the game: War
Game::Game(){
   cout << "How many rounds do you want to play?" << endl << endl;
   cin >> maxRounds;

   intValidation(maxRounds);

   cout << "What type of die will each player have? A normal die or a loaded die?" << endl << endl;
   
   cout << "Player 1: " << endl;
   cout << "   a. Normal Die" << endl;
   cout << "   b. Loaded Die" << endl << endl;

   char selection1;
   while(tolower(selection1) != 'a' && tolower(selection1) != 'b'){
      cin >> selection1;

      if(tolower(selection1) != 'a' && tolower(selection1) != 'b')
      {
         cout << "Uh oh... You didn't select a valid option. Please try again..." << endl;
      }
   }

   cout << endl << "Player 2: " << endl;
   cout << "   a. Normal Die" << endl;
   cout << "   b. Loaded Die" << endl;

   char selection2;
   while(tolower(selection2) != 'a' && tolower(selection2) != 'b'){
      cin >> selection2;
      cout << endl;

      if(tolower(selection2) != 'a' && tolower(selection2) != 'b')
      {
         cout << "Uh oh... You didn't select a valid option. Please try again..." << endl;
      }
   }

   // initializing with a constructor (w/ parameter)
   //cout << "How many sides should Player 1's die have?" << endl;
   //cout << "How many sides should Player 2's die have?" << endl;

   // initialize Player1's object
   //if(tolower(selection1) == 'a'){
	//	player1 = new Die();
   //}
   //else if(tolower(selection1) == 'b'){
	//	player1 = new LoadedDie();
   //}

   // initialize Player2's object
   if(tolower(selection2) == 'a'){
		player2 = new Die();
   }
   else if(tolower(selection2) == 'b'){
		player2 = new LoadedDie();
   }
  
	cout << "Beginning game rounds..." << endl;

   // play each round until the game completes
   while(currentRound <= maxRounds){
      play(player1, player2);
   }
}

void Game::play(Die* player1, Die* player2){
   int value1 = player1->roll();
   int value2 = player2->roll();

   if(value1 > value2){
      score_player1();
   }
   else if(value2 > value1){
      score_player2();
   }
   else if(value1 == value2){
      // score is unchanged
   }
   else{
      cout << "Uh oh... There appears to be an issue with scoring." << endl;
   }
   cout << "Player 1:  " << endl;
   cout << "	Type:  " << player1->getType() << endl;
   cout << "	Value: " << value1 << endl;

   cout << "Player 2:  " << endl;
   cout << "	Type:  " << player2->getType() << endl;
   cout << "	Value: " << value2 << endl;

   printScores();

   currentRound += 1;
}

void Game::printScores(){
   cout << endl <<  "Game Scores:" << endl;
   cout << "   Player 1: " << getScore1() << endl;
   cout << "   Player 2: " << getScore2() << endl << endl;
}

int Game::getScore1(){
   return player1_score;
}

int Game::getScore2(){
   return player2_score;
}

void Game::score_player1(){
   player1_score += 1;
}

void Game::score_player2(){
   player2_score += 1;
}
