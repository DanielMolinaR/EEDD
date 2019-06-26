#include "Arbolbusqueda.h"
#include "Evaluacion.h"
#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;


ArbolBusqueda::ArbolBusqueda(){
	raiz = NULL;
}

ArbolBusqueda::~ArbolBusqueda(){
	Podar();
}

void ArbolBusqueda::Podar(NodoABB *hoja){
	if(hoja != NULL){
		Podar(hoja->izquierda);
		Podar(hoja->derecha);
        free(hoja->expresion);
		delete hoja;
	}
}

void ArbolBusqueda::Insertar(char expresion[], NodoABB *nodo){
    Evaluacion ev;
	if(ev.evaluar_expresionInfija(expresion) < ev.evaluar_expresionInfija(nodo->expresion)){
		if(nodo->izquierda != NULL){
			Insertar(expresion, nodo->izquierda);
		}else{
			nodo->izquierda = new NodoABB;
			nodo->izquierda->expresion = strdup(expresion); // strdup crea un duplicado de la expresion asi no imprimimos la ultima almacenada
			nodo->izquierda->izquierda = NULL;
			nodo->izquierda->derecha = NULL;
		}
	}else{
		if(nodo->derecha != NULL){
			Insertar(expresion, nodo->derecha);
		}else{
			nodo->derecha = new NodoABB;
			nodo->derecha->expresion = strdup(expresion);
			nodo->derecha->derecha = NULL;
			nodo->derecha->izquierda = NULL;
		}
	}

}

void ArbolBusqueda::Insertar(char expresion[]){
	if(raiz != NULL){
		Insertar(expresion, raiz);
	}else{
		raiz = new NodoABB;
		raiz->expresion = strdup(expresion);
		raiz->izquierda = NULL;
		raiz->derecha = NULL;
	}
}


void ArbolBusqueda::Podar(){
	Podar(raiz);
}

void ArbolBusqueda::MostrarInorden(){
	MostrarInorden(raiz);
	cout << "\n";
}

void ArbolBusqueda::MostrarInorden(NodoABB *nodo){
	if(nodo != NULL){
		MostrarInorden(nodo->izquierda);
		cout << nodo->expresion << endl;
		MostrarInorden(nodo->derecha);
	}
}
