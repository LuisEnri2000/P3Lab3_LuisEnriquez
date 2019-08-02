#include <iostream>
#include<string>

using namespace std;

#ifndef OREJAS_CPP
#define OREJAS_CPP

class Orejas {
	private:
		int tamano, audicion;
		
	public:
		Orejas(int tamano, int audicion){
			this->tamano=tamano;
			this->audicion=audicion;
		}
		
		int getTamano(){
			return this->tamano;
		}
		
		int getAudicion(){
			return this->audicion;
		}
		
		~Orejas(){}
		
};

#endif
