#include "Evaluacion.h"
#define _WIN32_WINNT 0x0500
#include <Windows.h>
#include <limits>

using namespace std;

int main(int argc, char** argv)
{
    Evaluacion evaluacion;
    char opcion;
    char expresion[40] = "";
    int resultado;

    ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
    do {

        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, 3);
        cout << "\n\t------------------------------------------------\n";
        cout << "\t                       MENU                       \n";
        cout << "\t------------------------------------------------\n";
        SetConsoleTextAttribute(hConsole, 2);
        cout << "\n\tA. Evaluar una expresion infija. \n";
        cout << "\tB. Evaluar una expresion infija 2.\n";
        cout << "\tC. Expresion infija a expresion postfija.\n";
        cout << "\tD. Evaluar una expresion posfija.\n";
        cout << "\tE. Evaluar si una expresion infija es correcta.\n";
        cout << "\tF. Completar parentesis de una expresion infija.\n\n";
        cout << "\tG, H y K. Crear un arbol.\n\n";
        cout << "\tI y J. Crear un arbol de búsqueda binaria.\n\n";
        SetConsoleTextAttribute(hConsole, 8);
        cout << "\tS.Salir del programa.\n\n";
        cout << "\tIndique la opcion deseada: ";
        cin >> opcion;
        opcion = toupper(opcion);
        system("cls");

        switch(opcion) {

        case 'A': {
            cout << "\n\tIntroduzca una expresion (sin espacios): "; // ((2*5)-(1*2))/(11-9))
            cin >> expresion;
            int resultado = evaluacion.evaluar_expresionInfija(expresion);
            cout << resultado << endl;
            break;
        }
        case 'B': {
            cout << "\n\tIntroduzca una expresion (sin espacios): "; // (2*5-1*2)/(11-9)    3*(4*2-3)-(4+6/3)
            cin >> expresion;
            int resultado = evaluacion.evaluar_expresionInfija2(expresion);
            cout << resultado << endl;
            break;
        }
        
        case 'C': {
            cout << "\n\tIntroduzca una expresion (sin espacios): "; // 4*2+(12/3)-5 ((2*5)-(1*2))/(11-9))  ----->>
                                                                     // 2 5 * 1 2 * - 11 9 - /
            cin >> expresion;
            Cola postfija = evaluacion.expresionInfija_a_expresionPostfija(expresion);
            postfija.Mostrar();
            break;
        }
          
        case 'D': {
            cout << "\n\tIntroduzca una expresion (sin espacios): "; // 4*2+(12/3)-5 d  ----->> 2 5 * 1 2 * - 11 9 - /
            cin >> expresion;
            int resultado = evaluacion.evaluar_expresionPostfija(expresion);
            cout << resultado << endl;
            break;
        }
        case 'E':
            cout << "\n\tIntroduzca una expresion (sin espacios): "; // (2*5-1*2)/(11-9)    3*(4*2-3)-(4+6/3)
            cin >> expresion;
            if (evaluacion.Es_Correcta(expresion) == false){
                cout << "Es incorrecta" << endl;
            } else {
                cout << "Es correcta" << endl;
            }
            break;
        case 'F': {
                cout << "\n\tIntroduzca una expresion (sin espacios): "; // 4*2+(12/3)-5 ((2*5)-(1*2))/(11-9)) 

                cin >> expresion;
                Cola infija = evaluacion.expresionInfija_a_expresionPostfija(expresion);
                Arbol* ab = evaluacion.CrearArbol(infija);
                ab->Mostrar();
                break;
            }
        case 'G': 
        case 'H':
        case 'K':{
                cout << "\n\tIntroduzca una expresion infija: "; // 4*2+(12/3)-5 ((2*5)-(1*2))/(11-9)) 

                cin >> expresion;
                Cola postfija = evaluacion.expresionInfija_a_expresionPostfija(expresion);
                Arbol* ab = evaluacion.CrearArbol(postfija);
                ab->Mostrar();
                cout << "Numero de nodos: " << ab->CalcularNodos() << endl;
                cout << "Altura del arbol: " << ab->CalcularAltura() << endl;
                cout << "Numero de nodos internos: " << ab->CalcularNodosInternos() << endl;
                cout << "Numero de hojas: " << ab->CalcularHojas() << endl;
                if (ab->EstaLleno()){
                    cout << "El arbol esta lleno";
                } else {
                    cout << "El arbol no esta lleno";
                }
                break;            
        }
        case 'I':
        case 'J': {
            ArbolBusqueda abb;
            
            do {
                cout << "\n\tIntroduzca una expresion infija, FIN para terminar."; // 4*2+(12/3)-5 ((2*5)-(1*2))/(11-9)) 
                cin >> expresion;
                
                
                if (stricmp(expresion, "FIN")!=0) {
                    abb.Insertar(expresion);
                } else {
                    break;
                }
                
            } while(true);
            
            abb.MostrarInorden();
            
            break;
        }
        
        case 'S':
            cout << "\n\tSaliendo del programa...\n";
            break;
        default:
            cout << "\n\tOpcion incorrecta!\n\n";
            break;
        }
    } while(opcion != 'S');
    return 0;
}
