#ifndef RACE_H
#define RACE_H

#include <vector>
#include "Horse.h"

class Race { 
private:
	std::vector<Horse>horses;
	int finishLine;

public:
	Race(int numHorses, int finishLine);
	void startRace();
	void printRaceStatus();
	bool checkRaceEnd();
};
#endif

