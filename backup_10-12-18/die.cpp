/*********************************************************************
** Program name: War Game with Dice
** Author: Ryan DiRezze
** Date: October 14, 2018
** Description:
*********************************************************************/

// allows this file for function implementations to access & use the Die class and each function's prototypes
#include "die.hpp"
#include "inputValidation.hpp"

// constructor for the Die class, which initializes objects of type Die
   // by passing the number of sides that each Die would possess and
   // sets the corresponding value (i.e., member variable) within the Die
   // object, representing the number of sides on the Die
Die::Die(){
   cout << "How many sides would you like this Die to have?" << endl;
   cin >> N;

   // validate the user's input is an integer
   intValidation(N);
}

Die::Die(int sides){
   N = sides;
}

// updates the number of sides that the Die object possesses, which also
   // corresponds to the range of possible values when "rolling the die/dice"
void Die::setN(int sides){
   N = sides;
}

// "rolls the die/dice" object, which returns a random number within the
   // range of 1 to N; N = # of sides on the Die
int Die::roll(){
   // initialize the value that is returned after "rolling the die"
   int roll;

   // sets/updates the "seed", which is used by the "rand()" function to generate a random #
      // setting the "srand()" parameter to the current time sets/updates a new seed every time the function is called.
      // since time isn't constant, "time(0)" (current time) will never pass the same parameter to the "srand()" function,
      // which generates a new "seed" for "rand()" every time the function is called
   srand(time(0));

   // generate a random number within the range of 1 to N, which is a private member within each Die object
   roll = (rand() % N) + 1;

   // returns the randomly generated number within the range: 1 to N
   return roll;
}
