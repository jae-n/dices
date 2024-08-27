#include "die.h"
#include "cstdlib"
#include "ctime"

//constructor take arguement for number of side and perform a roll
die::die(int numSides) {
	unsigned seed = time(0);

	//see the random number generator
	srand(seed);

	//set the number of sides
	sides = numSides;

	//perform an intial roll
	roll();
}

//member function roll,roll the die
void die::roll() {
	//const for the min die value
	const int MIN_VALUE = 1;
	//get random vale for the die
	value = (rand() % (sides - MIN_VALUE + 1)) + MIN_VALUE;
}

//member get side function return the number for the id
int die::getSides() {
	return sides;
}

//get value member function return the die value
int die::getValue() {
	return value;
}

//loop for number of dice
/*int die::Nofdie(int ndie) {
	for (int i = 0; i < ndie; i++) {

	}
}

void die::dieFour() {
	srand(static_cast<unsigned int>(time(0)));
	int ran = rand();
	//min value
	const int MIN_VALUE = 1;
	// get the value
	value = (rand() % (4 - MIN_VALUE + 1)) + MIN_VALUE;
}
*/