#include "Evaluacion.h"


#include <conio.h>
#include <stdio.h>
#include <iostream>


using namespace std;

Evaluacion::Evaluacion()
{

}

Evaluacion::~Evaluacion()
{
    
}
//FUNCIONA CORRECTAMENTE
//hemos tenido en cuenta los operadores + - * / ( )
int Evaluacion::evaluar_expresionInfija (char cadena[])
{
    Pila operadores;
    Pila operandos;
    char operador;
    int operando1;
    int operando2;
    int resultado;
    int i=0;
    //DividirPilas(cadena);
    // metodo para separar y apilar las pilas
    while ( cadena[i]!='\0'){                // leer el string de caracteres          
        switch(cadena[i]){
            case '0' : operandos.Apilar(0);
                break;
            case '1' : operandos.Apilar(1);
                break;
            case '2' : operandos.Apilar(2);
                break;
            case '3' : operandos.Apilar(3);
                break;
            case '4' : operandos.Apilar(4);
                break;
            case '5' : operandos.Apilar(5);
                break;
            case '6' : operandos.Apilar(6);
                break;
            case '7' : operandos.Apilar(7);
                break;
            case '8' : operandos.Apilar(8);
                break;
            case '9' : operandos.Apilar(9);
                break;
            case '+' : operadores.Apilar('+');
                break;
            case '-' : operadores.Apilar('-');
                break;
            case '*' : operadores.Apilar('*');
                break;
            case '/' : operadores.Apilar('/');
                break;
            case '(' : operadores.Apilar('(');
                break;
            case ')': operador = operadores.Desapilar();       //es parentesis vacio porque es pila y solo quitas desde arriba
            operando2 = operandos.Desapilar();
            operando1 = operandos.Desapilar();
            switch(operador){
                case '*' : resultado = operando1 * operando2;
                    operandos.Apilar(resultado);
                    operadores.Decapitar();
                    break;
                case '/' : resultado = operando1 / operando2;
                    operandos.Apilar(resultado);
                    operadores.Decapitar();
                    break;
                case '+' : resultado = operando1 + operando2;
                    operandos.Apilar(resultado);
                    operadores.Decapitar();
                    break;
                case '-' : resultado = operando1 - operando2;
                    operandos.Apilar(resultado);
                    operadores.Decapitar();
                    break;
            }
                break;             
            default: cout << "En la expresion no hay un caracter válido";
        }
        
        i++;
    }
    return resultado;
}


int Evaluacion::evaluar_expresionInfija2 (char cadena[]) {

    return Calcular(expresionInfija_a_expresionPostfija(cadena));
}


int Evaluacion::OrdenJerarquico (char operador){
    switch(operador){
        case '+' : return 1;
           break;
        case '-' : return 1;
            break;
        case '/' : return 2;
            break;
        case '*' : return 2;
            break;
        case '(' : return 0;
           break;
        case ')' : return 0;
            break;   
            
    }
}

Cola Evaluacion::expresionInfija_a_expresionPostfija (char cadena[]) {
    Cola postfija;
    Pila operadores;
    char operadorUltimo;
    
    for (int i = 0; cadena[i]; i++) {
        if (cadena[i] >= '0' && cadena[i] <= '9') {
            postfija.Encolar(cadena[i]);
        } else if (cadena[i] == '(') {
            operadores.Apilar('(');
        } else if (cadena[i] == ')') {
            operadorUltimo = operadores.Desapilar();
            while (operadorUltimo != '(') {
                postfija.Encolar(operadorUltimo);
                operadorUltimo = operadores.Desapilar();
            }
        } else if (cadena[i]=='+' || cadena[i]=='-' || cadena[i]=='*' || cadena[i]=='/') {
            while (!operadores.EstaVacia() && (OrdenJerarquico(cadena[i]) <= OrdenJerarquico(operadores.GetCima()))) {
                postfija.Encolar(operadores.Desapilar());
            }
            operadores.Apilar(cadena[i]);
        } else {
            cout << "Error en expersión: símbolo "  << cadena[i] << " no válido." << endl;
        }
    }
    
    while(!operadores.EstaVacia()) {
        postfija.Encolar(operadores.Desapilar());
    }
    
    return postfija;
}

int Evaluacion::evaluar_expresionPostfija (char cadena[])
{   
    Cola postfija;

    for (int i=0; cadena[i]; i++){                // leer el string de caracteres    
        switch(cadena[i]){
            case '+' : 
                postfija.Encolar('+');
                break;
            case '-' : 
                postfija.Encolar('-');
                break;
            case '*' : 
                postfija.Encolar('*');
                break;
            case '/' : 
                postfija.Encolar('/');
                break;
            default:
                if (cadena[i] >= '0' && cadena[i] <= '9') {
                    postfija.Encolar(cadena[i]);
                } else {
                    cout << "Caracter no válido: " << cadena[i] << endl;
                }
        }
    }
    
    return Calcular(postfija);
}


int Evaluacion::Calcular(Cola postfija)
{
    Pila resultados;
    int operando1;
    int operando2;
    
    if (postfija.EstaVacia()) return 0;
    
    while (!postfija.EstaVacia()) {
        int dato = postfija.Desencolar();        
        switch (dato) {
            case '+':
                operando2 = resultados.Desapilar();
                operando1 = resultados.Desapilar();
                resultados.Apilar(operando1 + operando2);
                break;
            case '-':
                operando2 = resultados.Desapilar();
                operando1 = resultados.Desapilar();
                resultados.Apilar(operando1 - operando2);
                break;
            case '*':
                operando2 = resultados.Desapilar();
                operando1 = resultados.Desapilar();
                resultados.Apilar(operando1 * operando2);
                break;
            case '/':
            
                operando2 = resultados.Desapilar();
                operando1 = resultados.Desapilar();
                resultados.Apilar(operando1 / operando2);
                break; 
            default:
                resultados.Apilar(dato - '0');
        }
    }
    
    return resultados.Desapilar();
}

bool Evaluacion::Es_Correcta (char cadena[])
{   
    int contp=0;                                //contador de parentesis 
    int i=0;

    int anterior = -1; // -1 es un valor que representa que no hay nada antes
    
    if (cadena == NULL) {
        return true;
    }
    
    while ( cadena[i]!='\0' ){                // leer el string de caracteres          
        switch(cadena[i]){
            case '(':
                contp++;
            case '0' :
            case '1' :
            case '2' :
            case '3' :
            case '4' :
            case '5' :
            case '6' :
            case '7' :
            case '8' :
            case '9' :
                if (anterior!=-1 && anterior!='(' && anterior!='+' && anterior!='-' && anterior!='*'  && anterior!='/') {
                    return false;
                }
                break;

            case ')' :  
                contp--;
                if (contp < 0) {
                    return false;
                }
                
            case '+' : 
            case '-' : 
            case '*' : 
            case '/' : 
                if (anterior!=')' && !(anterior >= '0' && anterior <= '9')) {
                    return false;
                }
                break;

        }
        anterior = cadena[i];
        i++;
    }
    
    if (contp != 0) {
        return false;
    }
    
    return true;
}

/*Cola Evaluacion::completar_parentesis(char cadena[]) {
    return CrearArbol(cadena);
}*/


Arbol* Evaluacion::CrearArbolDesdePila(Pila& p) {

    if (p.EstaVacia()) return NULL;
    
    int valor = p.Desapilar();
    if (valor >= '0' && valor <= '9') {
        return new Arbol(valor, NULL, NULL); // es un nodo hoja con el número
    }
    else {
        Arbol* dcha = CrearArbolDesdePila(p); // subarbol operando
        Arbol* izq = CrearArbolDesdePila(p); // subarbol operando
        return new Arbol(valor, izq, dcha); // arbol de operación
    }
}

Arbol* Evaluacion::CrearArbol(Cola& postfija) {
    
    
    Pila p;
    while (!postfija.EstaVacia()) {
        p.Apilar(postfija.Desencolar());
    }
    
    return CrearArbolDesdePila(p);
}

