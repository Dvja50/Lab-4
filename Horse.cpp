#include "Horse.h"
#include <iostream> 
#include <cstdlib>
#include <ctime>

Horse::Horse(std::string name){
	this->name = name;
	this->position = 0;
	this->hasWon = false;
}
void Horse::move(){
	if (rand() % 2 == 0) {
		position++;
	}
}
bool Horse::checkWin(int finishLine)const  {
	return position>= finishLine;
}
std::string Horse::getName()const { 
	return name;
}
int Horse::getPosition()const {
	return position;
}

