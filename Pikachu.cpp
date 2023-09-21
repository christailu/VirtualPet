using namespace std;
#include "Pikachu.h"

Pikachu::Pikachu(const string& PikachuName, const int& LevelPower)Pokemon(PikachuName, "Pikachu") {
	electricPower = LevelPower;
	health = 100;

int getElectricPower() const{
	return electricPower;
}

void Pikachu::useElectricShock(){
	cout << "Attack with Electric Shock"<<endl;

