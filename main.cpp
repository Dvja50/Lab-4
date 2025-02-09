#include <iostream>
#include "Race.h"

int main(){
	int numHorses = 5; 
	int finishLine = 10;

	Race race(numHorses, finishLine);
	race.startRace();
	
	return 0;
}

