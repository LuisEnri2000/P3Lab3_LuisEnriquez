#include <iostream>
#include<string>

using namespace std;

#ifndef PELAJE_CPP
#define PELAJE_CPP

class Pelaje{
    private:
    	string color;
    	int grosor, largo;
    	
    public:
    	Pelaje(string color, int grosor, int largo){
			this->color=color;
			this->grosor=grosor;
			this->largo=largo;
		}
		
		string getColor(){
			return this->color;
		}
		
		int getGrosor(){
			return this->grosor;
		}
		
		int getLargo(){
			return this->largo;
		}
		
		~Pelaje(){}
		
};
#endif


