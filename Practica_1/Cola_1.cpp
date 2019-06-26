#include "Cola.h"

using namespace std;

Cola::Cola()
{
	primero = NULL;
	ultimo = NULL;
}

Cola::~Cola()
{
}

int Cola::Encolar(int v)
{
	NodoCola *nuevo = new NodoCola(v, NULL);
	if(primero == NULL)
	{
		primero = nuevo;
	}else
	{
		ultimo->siguiente = nuevo;
	}
	ultimo = nuevo;
}

int Cola::Desencolar()
{
	if(primero != NULL)
	{
		NodoCola *aux = primero;
        int v = aux->valor;
		primero = aux->siguiente;  
		delete(aux);
        
        if(primero == NULL)
		{
			ultimo = NULL;
		}
        
        return v;
		
	}
}

void Cola::Mostrar()
{
	cout << "Cola : " << endl;
	NodoCola *aux = primero;
	while (aux != NULL) 
	{
		cout << (char)aux->valor << endl;
		aux = aux->siguiente;
	}
}

bool Cola::EstaVacia()
{
    return (primero == NULL);
	/*if(primero == NULL)
	{
		cout << "La cola esta vacia .";
        
	}else{
		cout << "La cola no esta vacia .";
	}*/
}



bool Cola::EsDimensionUno(){
    if (primero->siguiente==NULL){
        return true;
    } else {
        return false;
    }
}

