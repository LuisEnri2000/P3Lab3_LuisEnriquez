
#include <iostream>
#include"Animal.cpp"
#include<vector>

using namespace std;

#ifndef ZOO_CPP
#define ZOO_CPP

class Zoo{
	private:
		string nombre;
		int tamano;
		int personas;
		vector<Animal*>Artica;
		vector<Animal*>Desertica;
		vector<Animal*>Jungla;
		vector<Animal*>Sabana;
		
	public:
		Zoo(){}
				
		vector<Animal*> getArtica(){
			return Artica;
		}
		
		vector<Animal*> getDesertica(){
			return Desertica;
		}
		
		vector<Animal*> getJungla(){
			return Jungla;
		}
		
		vector<Animal*> getSabana(){
			return Sabana;
		}
		
		void setAnimales(Animal* animal, int tipo){
			if(tipo==1){
				Artica.push_back(animal);
			}
			if(tipo==2){
				Desertica.push_back(animal);
			}
			if(tipo==3){
				Jungla.push_back(animal);
			}
			if(tipo==4){
				Sabana.push_back(animal);
			}
		}
		
		void print(){
			cout<<"Zona artica: "<<endl;
			
			for(int i=0;i<Artica.size();i++){
				cout<<Artica[i]->getNombre()<<endl;
			}
			cout<<"Zona desertica: "<<endl;
			
			for(int i=0;i<Desertica.size();i++){
				cout<<Desertica[i]->getNombre()<<endl;
			}
			cout<<"Zona de jungla tropical: "<<endl;
			
			for(int i=0;i<Jungla.size();i++){
				cout<<Jungla[i]->getNombre()<<endl;
			}
			cout<<"Zona sabana: "<<endl;
			
			for(int i=0;i<Sabana.size();i++){
				cout<<Sabana[i]->getNombre()<<endl;
			}
		}
		
		~Zoo(){}		

};

#endif
