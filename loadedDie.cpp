/*********************************************************************
** Program name: War Game with Dice
** Author: Ryan DiRezze
** Date: October 14, 2018
** Description:
*********************************************************************/

#include "loadedDie.hpp"

LoadedDie::LoadedDie(){
   cout << "How many sides would you like this LoadedDie to have?" << endl;
   int num;
   cin >> num;

   // validate the user's input is an integer
   intValidation(num);

   Die test = Die(num);
   die = &test;
   // die->setN(sides);    // for a pointer member variable
}

void LoadedDie::setN(int sides){
   // die.setN(sides);
   die->setN(sides);    // for a pointer member variable
}

int LoadedDie::roll(){
   return die->roll();
}
