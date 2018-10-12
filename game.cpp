/*********************************************************************
** Program name: War Game with Dice
** Author: Ryan DiRezze
** Date: October 14, 2018
** Description:
*********************************************************************/

#include "game.hpp"

// initializes and runs the game: War
Game::Game(){
   cout << "How many rounds do you want to play?" << endl;
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
   cout << "   b. Loaded Die" << endl << endl;

   char selection2;
   while(tolower(selection2) != 'a' && tolower(selection2) != 'b'){
      cin >> selection2;

      if(tolower(selection2) != 'a' && tolower(selection2) != 'b')
      {
         cout << "Uh oh... You didn't select a valid option. Please try again..." << endl;
      }
   }

   // initialize player1's die
   if(tolower(selection1) == 'a'){
      Die player1 = Die();
      if(tolower(selection2) == 'a'){
         Die player2 = Die();

         int rollValue1;
         int rollValue2;

         while(currentRound <= maxRounds){
            rollValue1 = player1.roll();
            rollValue2 = player2.roll();
            play(rollValue1, rollValue2);
            cout << endl;
            cout << "Player 1: " << endl;
            cout << "   Die Type: Die" << endl;
            cout << "   Roll:     " << rollValue1 << endl;
            cout << "   Score:    " << getScore1() << endl << endl;
            cout << "Player 2: " << endl;
            cout << "   Die Type: Die" << endl;
            cout << "   Roll:     " << rollValue2 << endl;
            cout << "   Score:    " << getScore2() << endl;
         }
      }
      else if(tolower(selection2) == 'b'){
         LoadedDie player2 = LoadedDie();

         int rollValue1;
         int rollValue2;

         while(currentRound <= maxRounds){
            rollValue1 = player1.roll();
            rollValue2 = player2.roll();
            play(rollValue1, rollValue2);
            cout << endl;
            cout << "Player 1: " << endl;
            cout << "   Die Type: Die" << endl;
            cout << "   Roll:     " << rollValue1 << endl;
            cout << "   Score:    " << getScore1() << endl << endl;
            cout << "Player 2: " << endl;
            cout << "   Die Type: LoadedDie" << endl;
            cout << "   Roll:     " << rollValue2 << endl;
            cout << "   Score:    " << getScore2() << endl;
         }
      }
   }
   else if(tolower(selection1) == 'b'){
      LoadedDie player1 = LoadedDie();
      if(tolower(selection2) == 'a'){
         Die player2 = Die();

         int rollValue1;
         int rollValue2;

         while(currentRound <= maxRounds){
            rollValue1 = player1.roll();
            rollValue2 = player2.roll();
            play(rollValue1, rollValue2);
            cout << endl;
            cout << "Player 1: " << endl;
            cout << "   Die Type: LoadedDie" << endl;
            cout << "   Roll:     " << rollValue1 << endl;
            cout << "   Score:    " << getScore1() << endl << endl;
            cout << "Player 2: " << endl;
            cout << "   Die Type: Die" << endl;
            cout << "   Roll:     " << rollValue2 << endl;
            cout << "   Score:    " << getScore2() << endl;
         }
      }
      else if(tolower(selection2) == 'b'){
         LoadedDie player2 = LoadedDie();

         int rollValue1;
         int rollValue2;

         while(currentRound <= maxRounds){
            rollValue1 = player1.roll();
            rollValue2 = player2.roll();
            play(rollValue1, rollValue2);
            cout << endl;
            cout << "Player 1: " << endl;
            cout << "   Die Type: LoadedDie" << endl;
            cout << "   Roll:     " << rollValue1 << endl;
            cout << "   Score:    " << getScore1() << endl << endl;
            cout << "Player 2: " << endl;
            cout << "   Die Type: LoadedDie" << endl;
            cout << "   Roll:     " << rollValue2 << endl;
            cout << "   Score:    " << getScore2() << endl;
         }
      }
   }
}

void Game::play(int player1, int player2){
   if(player1 > player2){
      score_player1();
   }
   else if(player2 > player1){
      score_player2();
   }
   else if(player1 == player2){
      // score is unchanged
   }
   else{
      cout << "Uh oh... There appears to be an issue with scoring." << endl;
   }
   currentRound += 1;
}

void Game::printScores(){
   cout << "Game Scores:" << endl;
   cout << "   Player 1: " << getScore1() << endl;
   cout << "   Player 2: " << getScore2() << endl;
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
