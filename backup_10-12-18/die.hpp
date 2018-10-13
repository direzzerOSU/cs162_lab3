/*********************************************************************
** Program name: War Game with Dice
** Author: Ryan DiRezze
** Date: October 14, 2018
** Description:
*********************************************************************/

// #include guard to prevent this header file's contents from being compiled more than once
#ifndef DIE_H
#define DIE_H

// enable the random number generator
#include<ctime>
#include<cstdlib>
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<string>
using std::string;

class Die{
private:
   int N;   // number of sides on the individual Die
public:
   // Die class' function prototypes
   Die();
   Die(int);
   void setN(int);
   int roll();
};
// end of the #include guard
#endif
