/*********************************************************************
** Program name: War Game with Dice
** Author: Ryan DiRezze
** Date: October 14, 2018
** Description:
*********************************************************************/

#include "dice.hpp"

//Die::Die(){
//	cout << "How many sides would you like on this Die?" << endl;
//	cin >> sides;
//
//	intValidation(sides);
//}


//LoadedDie::Die(){
//	cout << "How many sides would you like on this LoadedDie?" << endl;
//	cin >> sides;
//
//	intValidation(sides);
//}

int Die::roll(){
	srand(time(0));

	int value = -435;
	value = (rand() % sides) + 1;

	return value;
}

std::string Die::getType(){
	return type;
}

int LoadedDie::roll(){
	srand(time(0));

	int value = -435;
	value = (rand() % sides) + 1;

	return value;
}
