#ifndef DIGIMON_H
#define DIGIMON_H

#include "VirtualPet.h"

class Digimon : public VirtualPet {
	private:
		int element;
	public:
		Digimon(const string& DigimonName, int ElementType);
		void useSpecialAttack();
};

#endif
