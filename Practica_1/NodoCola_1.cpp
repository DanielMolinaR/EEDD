#include "NodoCola.h"

NodoCola::NodoCola(int v, NodoCola *sig)
{
	valor = v;
	siguiente = sig;
}

NodoCola::~NodoCola()
{
    
}