#include "Gatomon.h"

//constructor
Gatomon::Gatomon(const stsring& gatomonName,const string& Type, int Sharpness):Digimon(gatomonName, Type){
	happiness = 100;
	hunger = 0;	
	catClawSharpness = Sharpness;

}

//getter
int Gatomon::getCatClawSharpeness() const{
	return catClawSharpness;
}

void Gatomon::useCatClawAttack() const{
	cout << "Use Claw Attack!!" << endl;
}

