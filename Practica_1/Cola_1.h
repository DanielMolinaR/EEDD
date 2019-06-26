#ifndef COLA_H
#define COLA_H

#include <conio.h>
#include <stdio.h>
#include <iostream>

#include "NodoCola.h"

using namespace std;

class Cola
{
private:
	NodoCola *primero;
	NodoCola *ultimo;
public:
	Cola();
	~Cola();
	
	int Encolar(int v);
	int Desencolar();
	void Mostrar();
	bool EstaVacia();
    bool EsDimensionUno();

};

#endif // COLA_H