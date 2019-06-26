#ifndef NODO_H
#define NODO_H

#include <iostream>

class Nodo
{
private:
	int valor;
	Nodo *siguiente;

	friend class Pila;

public:
	
	Nodo(int valor, Nodo *sig);
	~Nodo();

};

#endif // NODO_H
