/*********************************************************************
** Program name: War Game with Dice
** Author: Ryan DiRezze
** Date: October 14, 2018
** Description:
*********************************************************************/

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

class Die {
private:
	int sides = 0;
	std::string type = "Die";
public:
	Die(){
		cout << "How many sides would you like on this Die?" << endl;
		cin >> sides;

		intValidation(sides);
	};

	std::string getType();
	virtual int roll();
};


class LoadedDie : public Die {
private:
	int sides = 0;
	std::string type = "LoadedDie";
public:
	LoadedDie() : Die(){
		cout << "How many sides would you like on this LoadedDie?" << endl;
		cin >> sides;

		intValidation(sides);	
	};
	
	int roll();
};

#endif
