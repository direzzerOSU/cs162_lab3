/*********************************************************************
** Program name: War Game with Dice
** Author: Ryan DiRezze
** Date: October 14, 2018
** Description: Implements the functions that are callable by one of
	(or both) the dice classes, Die and LoadedDie.
*********************************************************************/

#include "dice.hpp"

// implement a means of returning a random number from 1 to the number
// of possible sides (on the Die object)
int Die::roll(){
	int value = -435;
	value = (std::rand() % N) + 1;

	return value;
}

// returns the type (Die/LoadedDie) of die for a particular object
std::string Die::getType(){
	return type;
}

// skews the randomly generated number from 1 to the number of sides
// so that LoadedDie's "roll" values are (on average) larger than those
// of the Die class' "roll" values
int LoadedDie::roll(){
	int value;
	// generate 2 random values, and return the larger of the two values
	value = std::max(((std::rand() % N) + 1), ((std::rand() % N) + 1));

	// return the max of two randomly generated numbers
	return value;
}
