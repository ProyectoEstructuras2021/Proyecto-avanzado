#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include "Cola.h"

using namespace std;
Cola p;

class aux1 {
	
	private:
		
		string nombres[20] = {
			"Dev C++","Google Chrome","Microsoft Teams","Explorador de Windows","Simbolo de sistema","Antimalware","AppHelperCap",
		
			"Adobe Pothoshop","Adobe Lightroom","Autodesk Desktop","Microsoft Word","Microsoft Excel","Opera","Mozila Firefox","Paint","Xampp Control","Netflix Desktop","MIcrosoft PowerPoint","VPN Sistem","Fotos"
			};

		int memori[3] = {1024,2048,5120};
	public:
		
		void inicializarArbol(){

		}
		
		bool colaVacia(){
			if(p.colaVacia())
				return true;
			else
				return false;
		}
		
		string nombre(){
			int x;
			string nom;
			srand(time(NULL));
			x=rand()%20;
			nom=nombres[x];
			p.push(nom);
			return nom;
		}
		
		int atencion(){	//Tiempo de Procesamiento
			// Entre 2 y 10 minutos
			srand(time(NULL));
			int aten=2+rand()%(10-1);
			return aten;
		}
		
		int espera(){ //Tiempo generaci�n de tareas
			// Entre 2, 3 o 4 minutos
			srand(time(NULL));
			int esp=2+rand()%(4-1);
			return esp;
		}
		
		int memoria(){
			int mu;
			srand(time(NULL));
			int mem=rand()%3;
			mu=memori[mem];
			return mu;
		}
		
		string obtenernodocola(string tarea){
			tarea = p.pop();
			return tarea;
		}
		
		
		int mostrar(int pos){
				p.mostrar(pos);
		}

};
