
#include <iostream>

using namespace std;

#ifndef COLA_CPP
#define COLA_CPP

class Cola {
	private:
		int largo, pelo;
		
	public:
		Cola(int largo, int pelo){
			this->largo=largo;
			this->pelo=pelo;
		}
		
		int getLargo(){
			return this->largo;
		}
		
		int getPelo(){
			return this->pelo;
		}
		
		~Cola(){}
		
};

#endif




