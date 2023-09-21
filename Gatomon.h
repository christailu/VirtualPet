#ifndef GATOMON_H
#define GATOMON_H

#include "Digimon.h"

class Gatomon : public Digimon {
	private:
		int catClawSharpness;
	public:
		//constructor
		Gatomon(const string& gatomonName, int Sharpness);
		int getCatClawSharpeness();//getter
		void useCatClawAttack();
};

#endif
