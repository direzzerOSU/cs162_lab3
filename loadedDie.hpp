/*********************************************************************
** Program name: War Game with Dice
** Author: Ryan DiRezze
** Date: October 14, 2018
** Description:
*********************************************************************/

#ifndef LOADEDDIE_H
#define LOADEDDIE_H

#include "die.hpp"
#include "inputValidation.hpp"

class LoadedDie : public Die {
private:
public:
	//LoadedDie();	// ask for the # of sides
	virtual int roll();
}

// class LoadedDie{
// private:
//    Die* die;
// public:
//    // default constructor that initializes the "LoadedDie" with a particular number of sides (as a parameter)
//    LoadedDie();
//
//    // sets/updates the number of sides for the "LoadedDie", which determines the range of possible
//       // values when "rolling" the "LoadedDie", which is: 1 through N
//    void setN(int);
//
//    // "rolls" the "LoadedDie", which returns a value from 1 through N; "LoadedDie" "rolls" are skewed
//       // such that the average output is higher than that of "Die" objects
//    int roll();
// };

#endif
