#ifndef HORSE_H
#define HORSE_H

#include <string> 

class Horse {
private:
	std::string name;
	int position;
	bool hasWon;
public:
	Horse(std::string name);
	void move();
	bool checkWin(int finishLine) const ;
	std::string getName() const;
	int getPosition() const;
}; 

#endif 
