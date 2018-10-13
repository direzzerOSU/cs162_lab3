/*********************************************************************
** Program name: War Game with Dice
** Author: Ryan DiRezze
** Date: October 14, 2018
** Description:
*********************************************************************/

#ifndef GAME_H
#define GAME_H

#include "inputValidation.hpp"
#include "die.hpp"
#include "loadedDie.hpp"

class Game{
private:
   int player1_score = 0;
   int player2_score = 0;
   int maxRounds;
   int currentRound = 1;

public:
   Game();
   void play(int, int);
   void printScores();
   void score_player1();
   void score_player2();
   int getScore1();
   int getScore2();
};

#endif
