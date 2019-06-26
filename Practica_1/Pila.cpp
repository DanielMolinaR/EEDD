#include "Pila.h"

using namespace std;

Pila::Pila()
{
    cima = NULL;
}

Pila::~Pila()
{
}

int Pila::VerCima()
{
	cout <<"La cima de la pila es: " << cima->valor;
}

int Pila::Apilar(int v)
{
	Nodo *nuevo = new Nodo(v, cima);
	cima = nuevo;
}

int Pila::Desapilar()
{
	Nodo *aux = cima->siguiente;
    int v = cima->valor;
	delete(cima);
	cima = aux;
    return v;
}

void Pila::VerPila()
{
	Nodo *aux = cima;
	while (aux != NULL) 
	{
		cout << "Dato " << aux->valor << endl;
		aux = aux->siguiente;
	}
}

bool Pila::EstaVacia()
{
    return (cima == NULL);
	/*if(cima == NULL){
		cout << "La pila esta vacia .";
	}else{
		cout << "La pila no esta vacia .";
		}*/
    
}
void Pila::Decapitar()
{
	Nodo *aux = cima->siguiente;
	delete(cima);
	cima = aux;
	
}

int Pila::GetCima()
{
    return cima->valor;
}