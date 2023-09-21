#ifndef PIKACHU_H
#define PIKACHU_H

#include "Pokemon.h"

class Pikachu : public Pokemon {
	private:
		int electricPower;
	
	public:
		//constructor
		Pikachu(const string& PikachuName, const int& LevelPower);
		int getElectricPower() const;//getter for electric power
		void useElectricShock();
};

#endif
