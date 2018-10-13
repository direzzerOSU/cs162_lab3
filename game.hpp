/*********************************************************************
** Program name: War Game with Dice
** Author: Ryan DiRezze
** Date: October 14, 2018
** Description:
*********************************************************************/

#ifndef GAME_H
#define GAME_H

#include "inputValidation.hpp"
#include "dice.hpp"

class Game{
private:
	Die* player1;
	Die* player2;
   int player1_score = 0;
   int player2_score = 0;
   int maxRounds;
   int currentRound = 1;

public:
   Game();
   void play(Die*, Die*);
   void printScores();
   void score_player1();
   void score_player2();
   int getScore1();
   int getScore2();
};

#endif
