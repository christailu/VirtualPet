
#define GATOMON_H

#include "Digimon.h"

class Gatomon : public Digimon {
	private:
		int catClawSharpness;
	public:
		//constructor
		Gatomon(const string& gatomonName,const string& Type, int Sharpness);
		int getCatClawSharpeness() const;//getter
		void useCatClawAttack() const;
};

#endif
