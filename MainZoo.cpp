#include"Zoologico.cpp"
#include"Animal.cpp"
#include<vector>
#include<string>
#include <iostream>

using namespace std;

int main(){
	
	vector<Animal*>espera;
	
	int op = 0;
	Zoo* zoo = new Zoo();
	
	cout << "BIENVENIDO A ZIEE" << endl;
	
	while (op != 4) {
		cout << "Menu:" << endl;
		cout << "1. Crear animal" << endl;
		cout << "2. Transferir al zoologico" << endl;
		cout << "3. Listar zoologico" << endl;
		cout << "4. Salir" << endl;
		cout << "Opcion: ";
		cin >> op;
		
		if (op == 1) {
			string especieA;
			string nombreA;
			int tamanoA;
			int tipoA;
			
			cout<<"Ingrese la especie del animal: "<<endl;
			cin>>especieA;
			cout<<"Ingrese el nombre del animal: "<<endl;
			cin>>nombreA;
			cout<<"Ingrese el tamano del animal (cm): "<<endl;
			cin>>tamanoA;
			cout<<"Ingrese la zona: "<<endl;
			cout<<"1. Artica"<<endl;
			cout<<"2. Desertica"<<endl;
			cout<<"3. Jungla"<<endl;
			cout<<"4. Sabana"<<endl;
			cin>>tipoA;
			
			// Las patillas
			int patas;
			int largoPatas;
			string tipoPatas;
			
			cout<<"Numero de patas: "<<endl;
			cin>>patas;
			cout<<"Largo de patas (cm): "<<endl;
			cin>>largoPatas;
			cout<<"Tipo de patas: "<<endl;
			cin>>tipoPatas;
			
			Patas* pata=new Patas(patas, largoPatas, tipoPatas);
			
			
			// El pelaje
			string color;
			int grosor;
			int largoPelaje;
			
			cout<<"Color de pelaje: "<<endl;
			cin>>color;
			cout<<"Grosor del pelaje (cm): "<<endl;
			cin>>grosor;
			cout<<"Largo del pelaje (cm): "<<endl;
			cin>>largoPelaje;
			
			Pelaje* pelaje=new Pelaje(color, grosor, largoPelaje);
			
			
			// Los ojos
			string colorOjos;
			int vision;
			
			cout<<"Color de ojos: "<<endl;
			cin>>colorOjos;
			cout<<"Tiene vision nocturna? "<<endl;
			cout<<"1. Si"<<endl;
			cout<<"2. No"<<endl;
			cin>>vision;
			
			Ojos* ojos= new Ojos(colorOjos, vision);
			
			// Las orejas
			int tamanoOrejas;
			int audicion;
			
			cout<<"Tamano de orejas (cm): "<<endl;
			cin>>tamanoOrejas;
			cout<<"Capacidad auditiva (int dB): "<<endl;
			cin>>audicion;
			
			Orejas* orejas = new Orejas(tamanoOrejas, audicion);
			
			// La cola
			int largoCola;
			int pelo;
			
			cout<<"Longitud de la cola (cm): "<<endl;
			cin>>largoCola;
			cout<<"Tiene pelo?"<<endl;
			cout<<"1. Si"<<endl;
			cout<<"2. No"<<endl;
			cin>>pelo;
			
			Cola* cola= new Cola(largoCola, pelo);
			
			// Agregar el animal a la espera
			Animal* a = new Animal(especieA, nombreA, tamanoA, tipoA, pata, pelaje, ojos, orejas, cola);
			espera.push_back(a);
			
			cout << "ANIMAL CREADO EXITOSAMENTE Y EN ESPERA" << endl;
			
		}
		
		if (op == 2) {
			for(int i=0;i<espera.size();i++){
				
				if(espera[i]->getTipo() == 1){
					zoo->setAnimales(espera[i], 1);
				}
				
				if(espera[i]->getTipo() == 2){
					zoo->setAnimales(espera[i],2);
				}
				
				if(espera[i]->getTipo() == 3){
					zoo->setAnimales(espera[i], 3);
				}
				
				if(espera[i]->getTipo() == 4){
					zoo->setAnimales(espera[i], 4);
				}
			}
			
			cout << "ANIMALES PASADOS AL ZOOLOGICO" << endl;
		}
		
		if (op == 3) {
			zoo->print();
		}
		
		system("pause");
		
		system("CLS");
		
	}
	
}
