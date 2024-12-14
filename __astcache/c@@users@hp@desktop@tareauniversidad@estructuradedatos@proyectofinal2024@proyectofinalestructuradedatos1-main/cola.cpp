//---------------------------------------------------------------------------

#pragma hdrstop

#include "Cola.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
void cola::colar(float x) {
		insertarInicio(x);
}

float cola::desencolar() {
		return eliminarFinal();
}

int cola::tamaño() {
		return lista::contarNodos();
}

bool cola::esVacia() {
		return lista::esVacia();
}

void cola::vaciar() {
		lista::vaciar();
}

nodo* cola::primero() {
		return cab();
}

nodo* cola::ultimo(){
		return irAlNodoFinal();
}

cola cola::duplicar() {
	cola cp;
		nodo *v; v = this->primero();
		while (v != NULL) {
			cp.insertarFinal(v->dato);
			v = v->enlace;
		}
		return cp;
 }

