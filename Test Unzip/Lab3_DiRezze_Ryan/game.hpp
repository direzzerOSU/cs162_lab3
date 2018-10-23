/*********************************************************************
** Program name: War Game with Dice
** Author: Ryan DiRezze
** Date: October 14, 2018
** Description: Defines the Game class, which contains all required
	member variables and functions in order to play a complete game.
*********************************************************************/

// begin include guard
#ifndef GAME_H
#define GAME_H

#include "inputValidation.hpp"
#include "dice.hpp"

#include<map>

// defines the attribtues & functions for a game of War
class Game{
private:
	Die* player1;
	Die* player2;
	int player1_score = 0;
   int player2_score = 0;
   int maxRounds = -10;
   int currentRound = 1;
// callable functions by a Game object
public:
   Game();
   void play();
   void printScores();
   void score_player1();
   void score_player2();
   int getScore1();
   int getScore2();
   std::string charToString(char);
	int getRound();
	int getMaxRounds();
};

#endif	// end include guard
