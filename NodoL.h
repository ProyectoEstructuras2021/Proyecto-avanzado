#include<iostream>
using namespace std;

class NodoL{
	
	private:
		int tp,memo;
		string nombre;
	public:
		NodoL *siguiente;
		NodoL *Crear(string Nombre, int Pros, int Mem){
			NodoL *nuevo = new NodoL();
			nuevo->nombre = Nombre;
			nuevo->tp = Pros;
			nuevo->memo = Mem;
		return nuevo;
		}
		
		int getTpros(){
			return tp;
		}

		
		string getNombre(){
			return nombre;
		}
		
		
		int getMemoria(){
			return memo;
		}
	
		void conectar(NodoL *next) { 
			siguiente = next;
		}
		
		void setTPros(int Tiempo){
			tp = Tiempo;
		}
		
		
		NodoL *obtieneSiguiente(){
			return siguiente;
		}

};
