
#include <iostream>
#include <iostream>
#include<string>

using namespace std;

#ifndef PATAS_CPP
#define PATAS_CPP

class Patas{
    private:
		int patas, largo;
		string tipo;
		
	public:
		Patas(int patas, int largo, string tipo){
			this->patas=patas;
			this->largo=largo;
			this->tipo=tipo;
		}
		
		int getPatas(){
			return this->patas;
		}
		
		int getLargo(){
			return this->largo;
		}
		
		string getTipo(){
			return this->tipo;
		}
		
		~Patas(){}
};

#endif




