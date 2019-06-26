#ifndef ARBOLBUSQUEDA_H
#define ARBOLBUSQUEDA_H



struct NodoABB{
	char* expresion;
	NodoABB *izquierda;
	NodoABB *derecha;
};


class ArbolBusqueda{
public:
	ArbolBusqueda();
	~ArbolBusqueda();

	void Insertar(char expresion[]);
	void Podar();
	void MostrarInorden();


private:
	void Podar(NodoABB *nodo);
	void Insertar(char expresion[], NodoABB *nodo);
	void MostrarInorden(NodoABB *nodo);


	NodoABB *raiz;
};

#endif //ARBOLBUSQUEDA_H