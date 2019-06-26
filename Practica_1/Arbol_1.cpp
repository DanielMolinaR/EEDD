#include "Arbol.h"

using namespace std;

Arbol::Arbol(int v, Arbol* izq = NULL, Arbol* dcha = NULL) {
    valor = v;
    hijoIzquierda = izq;
    hijoDerecha = dcha;
}

int Arbol::CalcularAltura(){
   int maxAlturaHijos = 0;
   int aux;
   if (hijoIzquierda) {
       maxAlturaHijos = 1 + hijoIzquierda->CalcularAltura();
   }
   if (hijoDerecha) {
       aux =  1 + hijoDerecha->CalcularAltura();
       if (aux > maxAlturaHijos) {
           maxAlturaHijos = aux;
       }
   }
   return maxAlturaHijos; 
}

void Arbol::Mostrar() {
    if (hijoIzquierda) {
        cout << "(" << endl;
        hijoIzquierda->Mostrar();
    }
    
    cout << (char)valor << endl;
    
    if (hijoDerecha) {
        hijoDerecha->Mostrar();
         cout << ")" << endl;
    }
}

int Arbol::CalcularNodos(){
    int cont=1;
    if (hijoIzquierda) {
        cont += hijoIzquierda->CalcularNodos();
    } 
    if (hijoDerecha) {
        cont += hijoDerecha->CalcularNodos();
    }
    return cont;
}

int Arbol::CalcularHojas(){
    if (!hijoIzquierda && !hijoDerecha) return 1; // es una hoja

    int count = 0;
    if (hijoIzquierda) count += hijoIzquierda->CalcularHojas();
    if (hijoDerecha) count += hijoDerecha->CalcularHojas();        

    return count;
}

int Arbol::CalcularNodosInternos(){
    return (CalcularNodos()-CalcularHojas());
}

bool Arbol::EstaLleno(){
    int n = CalcularAltura();
    if (n > 63) return false; //por limitaciones de numeración y sentido práctico, con n>63 el arbol está forzosamente no lleno
 
    // Con 1 << n desplazamos n bits a la izquierda, así calculamos 2^(n-1)
    if (CalcularNodos() == ((1L << (n+1))-1)) {
        return true;
    } else return false;
}
