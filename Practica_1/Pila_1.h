#ifndef PILA_H
#define PILA_H

#include <conio.h>
#include <stdio.h>
#include <iostream>

#include "Nodo.h"

using namespace std;

class Pila
{
private:
	Nodo *cima;
public:
	Pila();
	~Pila();
	
	int Apilar(int v);
	int Desapilar();
	int VerCima();
	bool EstaVacia();
	void VerPila();
	void Decapitar();
	int GetCima();

};

#endif // PILA_H
