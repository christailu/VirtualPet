#ifndef PIKACHU_H
#define PIKACHU_H

#include "Pokemon.h"

class Pikachu : public Pokemon {
	private:
		int electricPower;
		int useElectricShock;//only accessible by pikachu
	public:
		//constructor
		Pikachu(const string& PikachuName, const string& pikachuSpecies, 		 const int& PikaHealth, const int& electricPower);
};
