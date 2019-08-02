
#include <iostream>
#include<string>

using namespace std;

#ifndef OJOS_CPP
#define OJOS_CPP

class Ojos {
	private:
		string color;
		int visionNocturna;
		
	public:
		Ojos(string color, int visionNocturna){
			this->color=color;
			this->visionNocturna=visionNocturna;
		}
		
		string getColor(){
			return this->color;
		}
		
		int getVisionNocturna(){
			return this->visionNocturna;
		}
		
		~Ojos(){}
		
};
#endif

