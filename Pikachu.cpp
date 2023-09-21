
#include "Pikachu.h"
//constructor
Pikachu::Pikachu(const string& PikachuName,const string& speciesName, int LevelPower):Pokemon(PikachuName, speciesName) {
	electricPower = LevelPower;
	health = 100;
}

int Pikachu:: getElectricPower() const{
	return electricPower;
}

void Pikachu::useElectricShock(){
	cout << "Attack with Electric Shock"<<endl;
}
