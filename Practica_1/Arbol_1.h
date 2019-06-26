#ifndef ARBOL_H
#define ARBOL_H

#include <conio.h>
#include <stdio.h>
#include <iostream>

class Arbol {
    
private:
    Arbol* hijoIzquierda;
    Arbol* hijoDerecha;
    int valor;
    
public:
    Arbol(int, Arbol* izq, Arbol* dcha); // crea un arbol con raiz y dos hijos
    
    int CalcularAltura();
    void Mostrar();
    int CalcularHojas();
    int CalcularNodos();
    int CalcularNodosInternos();
    bool EstaLleno();
    
    /*
     * 
    
     *    Arbol a = Arbol(2);
     *    Arbol b = Arbol(5);
     *    Arbol c = Arbol('*', a, b);
     * 
     * 
     */
};

#endif