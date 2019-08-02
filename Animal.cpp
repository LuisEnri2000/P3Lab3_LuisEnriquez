
#include <iostream>
#include "Patas.cpp"
#include "Pelaje.cpp"
#include "Ojos.cpp"
#include "Orejas.cpp"
#include "Cola.cpp"

using namespace std;

#ifndef ANIMAL_CPP
#define ANIMAL_CPP

class Animal{
    private:
 		string especie, nombre;
 		int tamano, tipo;
 		Patas* patas;
 		Pelaje* pelaje;
 		Ojos* ojos;
 		Orejas* orejas;
 		Cola* cola;
 		     	
 	public:
 		Animal(string especie, string nombre, int tamano,int tipo ,Patas* patas, Pelaje* pelaje, Ojos* ojos, Orejas* orejas, Cola* cola){
			this->especie=especie;
			this->nombre=nombre;
			this->tamano=tamano;
			this->tipo=tipo;
			this->patas=patas;
			this->pelaje=pelaje;
			this->ojos=ojos;
			this->orejas=orejas;
			this->cola=cola;
		}
		
		string getEspecie(){
			return this->especie;
		}
		
		string getNombre(){
			return this->nombre;
		}
		
		int getTamano(){
			return this->tamano;
		}
		
		int getTipo(){
			return this->tipo;
		}
		
		~Animal(){
		}
 		
};
#endif


