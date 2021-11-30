#include <iostream>
#include <windows.h>
#include<unistd.h>
#include "NodoL.h"
using namespace std;

int memoria, t, t2;

class Lista{
	
	private:
		NodoL *inicio;
		
		bool esVacia(){
			if(inicio == NULL)
			return true;
		else
			return false;
		}
		
	public:
	void inicializar(){
			inicio=NULL;
			int memoria=0;
	}

	void agregar(string Nombre, int tpros, int mem){
			NodoL *nuevo, *aux;
			nuevo = nuevo ->Crear(Nombre,tpros,mem);
			if(esVacia()){
				nuevo->siguiente=NULL;
				inicio=nuevo;
				nuevo=NULL;
			}else{
				aux=inicio;
				while(aux->obtieneSiguiente()!=NULL){
					aux=aux->obtieneSiguiente();
				}
				nuevo->siguiente=NULL;
				aux->conectar(nuevo);
				aux=NULL;
				nuevo=NULL;
			}
	}

	void mostrarLista(){
		int pos=70,pos2=15,pos3,cont=1;
		NodoL *actual = new NodoL();
		actual = inicio;
		
	
	
		while(actual != NULL){
			
			int tiempopro,t2;
			
			
				tiempopro=actual->getTpros();
		
				gotoxy(pos,pos2);cout << "Tarea: " <<actual->getNombre()<< endl;
                gotoxy(pos,pos2+1);cout << "Porcentaje de memoria: " <<actual->getMemoria()<< endl;
                gotoxy(pos,pos2+2);cout << "Tiempo: "<<tiempopro+cont<<endl;
                gotoxy(pos,pos2+3);cout << "Tiempo restante: "<<actual->getTpros()<<endl;
                t2=tiempopro-1;
                actual->setTPros(t2);
               
       
				
            pos2=pos2+6;
            memoria=memoria+actual->getMemoria();
			cout<<" "<<endl;
			actual = actual->siguiente;
			cont++;
			system("pause");
			
	 }
		

	}


	bool listaLlena() {
        if (memoria>8000)
        	
            return true;
        else
            return false;
    }
    
    void gotoxy(int x, int y){
		HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD dwPos;
		dwPos.X = x;
		dwPos.Y = y;
		SetConsoleCursorPosition(hcon,dwPos);
}
};
