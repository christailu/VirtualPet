#include "Digimon.h"

//constructor
Digimon::Digimon(const string& DigimonName, int ElementType):VirtualPet(DigimonName) {
	happiness = 100;
	hunger = 0;
	element = ElementType;
	
}
// methode to simulate a digimon attack
void Digimon::useSpecialAttack() {
	cout << "Digimon use Special Attack !!" <<endl;
} 

//getter to get access to element
int Digimon::getElement() const{
    return element;
}

