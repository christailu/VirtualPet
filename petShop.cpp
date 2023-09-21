#include "VirtualPet.h"
#include "Pokemon.h"
#include "Pikachu.h"
#include "Gatomon.h"
#include "Digimon.h"

int main() {
	VirtualPet myLittleBoringPet("Basic Pet");
	myLittleBoringPet.feed();
	myLittleBoringPet.play();
	myLittleBoringPet.makeSound();

	cout << "Name: " << myLittleBoringPet.getName() << endl;
	cout << "Happiness: " << myLittleBoringPet.getHappiness() << endl;
	cout << "Hunger: " << myLittleBoringPet.getHunger() << endl;

	Pokemon pokemanz("Pokemanz", "Pokespeez");
	pokemanz.feed();
	pokemanz.play();
	pokemanz.makeSound();

	cout << "Name: " << pokemanz.getName() << endl;
	cout << "Happiness: " << pokemanz.getHappiness() << endl;
	cout << "Hunger: " << pokemanz.getHunger() << endl;
	cout << "Health: " << pokemanz.getHealth() << endl;
	cout << "Species: " << pokemanz.getSpecies() << endl;

	//**********************************
	//create  a digimon
	Digimon MyDigimon("Agumon","Fire");
	MyDigimon.useSpecialAttack();

	//create a Pikachu
	Pikachu myPikachu("Pika", 80);
	myPikachu.useElectricShock();

	//create a GAtomon
	Gatomon myGatomon("Gato", "Water", 90);
	myGatomon.useCatClawAttack();

	//Pet information
	cout << endl <<endl;
	cout << "My Digimon: "<< endl;
	cout << "Name: " << MyDigimon.getName() << endl;
	cout << "Element Type: "<< MyDigimon.getElement() << endl<< endl;

	cout << "My Pikachu: " <<endl;
	cout << "Name: " << myPikachu.getName() << endl;
	cout << "Species: " << myPikachu.getSpecies() << endl << endl;

	cout << "My Gatomon: " <<endl;
	cout << "Name: " << myGatomon.getName() << endl;
	cout << "Element: " << myGatomon.getElement() << endl;
	cout << "Cat Claw Sharpness: " << myGatomon.getCatClawSharpness() << endl;

	return 0;
}
