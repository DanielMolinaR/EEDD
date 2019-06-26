#ifndef EVALUACION_H
#define EVALUACION_H

#include "Pila.h"
#include "Cola.h"
#include "Arbol.h"
#include "ArbolBusqueda.h"

using namespace std;

class Evaluacion
{
private:
    int OrdenJerarquico(char operando);
    int Calcular(Cola postfija);
    Arbol* CrearArbolDesdePila(Pila&);
    
public:
	Evaluacion();
	~Evaluacion();

    int evaluar_expresionInfija(char[]);
    int evaluar_expresionInfija2(char[]);
    Cola expresionInfija_a_expresionPostfija(char[]);
    int evaluar_expresionPostfija(char[]);    
    bool Es_Correcta(char []);
    Cola completar_parentesis(char[]);
    Arbol* CrearArbol(Cola&);
};

#endif // EVALUACION_H