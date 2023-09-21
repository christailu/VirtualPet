#ifndef DIGIMON_H
#define DIGIMON_H

#include "VirtualPet.h"

class Digimon : public VirtualPet {
	private:
		int element;
	public:
		//constructor
		Digimon(const string& DigimonName, int ElementType);
		void useSpecialAttack();
		int getElement() const;//getter
};

#endif
