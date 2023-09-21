#include "Digimon.h"

//constructor
Digimon::Digimon(const string& DigimonName, string ElementType):VirtualPet(DigimonName) {
	happiness = 100;
	hunger = 0;
	element = ElementType;
	
}
// methode to simulate a digimon attack
void Digimon::useSpecialAttack() {
	cout << " use Special Attack !!" <<endl;
} 

//getter to get access to element
string Digimon::getElement() const{
    return element;
}

