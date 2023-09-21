#include "Gatomon.h"

//constructor
Gatomon::Gatomon(const string& gatomonName,const string& Type, int Sharpness):Digimon(gatomonName, Type){
	

	catClawSharpness = Sharpness;

}

//getter
int Gatomon::getCatClawSharpeness() const{
	return catClawSharpness;
}

void Gatomon::useCatClawAttack() const{
	cout << "Use Claw Attack!!" << endl;
}

