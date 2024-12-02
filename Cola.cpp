//---------------------------------------------------------------------------

#pragma hdrstop

#include "Cola.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
void cola::poner(float x)
{
			insertarFinal(x);
}

float cola::sacar()
{
			return eliminarInicio();
}

int cola::contarNodos()
{
		return lista::contarNodos();
}

bool cola::esVacia()
{
		return lista::esVacia();
}

nodo* cola::primero()
{
		return cab();
}

