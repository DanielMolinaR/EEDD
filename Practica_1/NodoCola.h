#ifndef NODOCOLA_H
#define NODOCOLA_H

#include <iostream>

class NodoCola
{
private:
	int valor;
	NodoCola *siguiente;
    NodoCola *primero, *ultimo;

    friend class Cola;

public:
	
	NodoCola(int valor, NodoCola *sig);
	~NodoCola();

};

#endif // NODOCOLA_H