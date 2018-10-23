/*********************************************************************
** Program name: War Game with Dice
** Author: Ryan DiRezze
** Date: October 14, 2018
** Description: Defines the dice classes, Die and LoadedDie, which
	are used in the War Game. Die is used when any number from 1 to
	the number of its "sides" can be "rolled" with comparable probability.
	LoadedDie is used when numbers within the range of 1 to the die's
	number of sides are skewed to be larger than those from the Die class.
*********************************************************************/

// begin the include guard
#ifndef LOADEDDIE_H
#define LOADEDDIE_H

#include "inputValidation.hpp"

#include<iostream>
using std::cout;
using std::endl;
using std::cin;
#include<string>
using std::string;
#include<ctime>
#include<cstdlib>
#include<algorithm>

// all numbers of 1 through the number of sides have comparable
// probability of being rolled (normal distribution)
class Die {
protected:
	int N = 0;
	std::string type = "Die";
public:
	Die(int sides){
		N = sides;
	};

	std::string getType();
	virtual int roll();
};

// LoadedDie objects inherit members from the Die class, and
// "rolled" values are skewed to be larger than those of the Die class
class LoadedDie : public Die {
private:
	//int N = 0;		// inherited from Die()
public:
	LoadedDie(int sides) : Die(sides){
		N = sides;
		type = "LoadedDie";		
	};
	
	// inherits getType() function
	int roll();
};

#endif	// end the include guard
