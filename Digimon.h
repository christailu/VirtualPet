#ifndef DIGIMON_H
#define DIGIMON_H

#include "VirtualPet.h"

class Digimon : public VirtualPet {
	private:
		string element;
	public:
		//constructor
		Digimon(const string& DigimonName,const string& ElementType);
		void useSpecialAttack();
		string getElement() const;//getter
};

#endif
