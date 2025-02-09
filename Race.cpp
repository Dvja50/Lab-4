#include "Race.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Race::Race(int numHorses, int finishLine){
	this->finishLine = finishLine;
	for(int i = 0; i <numHorses; ++i){
		horses.push_back(Horse("Horse "+ std::to_string(i + 1)));
	}
}
void Race::startRace(){
	srand(time(0));
	bool raceEnd = false;

	while (!raceEnd){
		for(auto& horse : horses){
			horse.move();
			if (horse.checkWin(finishLine)){
				std::cout << horse.getName() << "Has won the race!\n";
				raceEnd = true;
				break;
			}
		   }
		printRaceStatus();
	}
}

void Race::printRaceStatus(){
	std::cout << "Race Status:\n";
	for(const auto& horse : horses){
		std::cout << horse.getName() << ": " << horse.getPosition() << "units\n";
	}
	std::cout << "--------------------\n";
}
bool Race::checkRaceEnd(){
	for(const auto& horse : horses){
		if(horse.checkWin(finishLine)){
			return true;
		}
	}
	return false;
}

