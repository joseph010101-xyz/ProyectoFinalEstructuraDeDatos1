//---------------------------------------------------------------------------

#pragma hdrstop

#include "Lista.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
<<<<<<< HEAD
=======
lista::lista(){
		cabeza=NULL;
		numNodos = 0;
}

nodo* lista::cab() {
				return cabeza;
}

bool lista::esVacia() {
		if (cabeza == NULL)
				return true;
		else
				return false;
}

void lista::vaciar() {
		cabeza=NULL;
		numNodos = 0;
}

int lista::contarNodos(){
		nodo* v; v = cabeza;
		numNodos = 0;
		while (v != NULL) {
				v = v->enlace;  //  salta al siguiente nodo
				numNodos++;
		}
		return numNodos;
}

void lista::insertarFinal(float x){
		nodo* n, * v;
		n = new nodo();  // crea un nuevo nodo
		n->dato = x;     // pone el dato al nodo
		if (cabeza == NULL) {
				cabeza = n;
		}
		else{
				v = irAlNodoFinal();
				v->enlace = n;
		}
}

void lista::insertarInicio(float x){
		nodo* n= new nodo();      // crea un nuevo nodo
		n->dato = x;
		n->enlace = cabeza;
		cabeza = n;
}

nodo* lista::irAlNodoInicio() {
		return this->cabeza;
}

nodo* lista::irAlNodoFinal() {
		nodo* v = cabeza;
		if (v != NULL)
			while (v->enlace != NULL) {
					v = v->enlace;
			}
		return v;
}

float lista::eliminarInicio(){
		if (cabeza != NULL) {
			nodo* n;
			n = cab();
			cabeza = cabeza->enlace;
			float x = n->dato;
			delete n;   // libera el espacio de memoria asignado a "n"
			return x;
		}
		else
			return NULL;
}

nodo* lista::buscar(float x) {
		nodo *v; v = cabeza;
		while (v != NULL) {
			if ( v->dato == x )
				return v;
			v = v->enlace;
		}
		return NULL;
}

void lista::insertarDespuesDe(float x, float y) {
// despues de x, el valor y; si "y" no existe no aplica.
		nodo*  v = buscar(x);
		if (v != NULL) {
			nodo* n = new nodo();
			n->dato = y;
			n->enlace = v->enlace;
			v->enlace = n;
		}
}

void lista::insertarAntesDe(float x, float y) {
		nodo*  v = buscar(x);
		if (v != NULL) {
			nodo* n = new nodo();
			n->dato = y;
			if (v == cabeza) {
				n->enlace = v;
				cabeza = n;
			}
			else {
				v = nodoAnterior(v);
				n->enlace = v->enlace;
				v->enlace = n;
			}
		}
}

nodo* lista::nodoSiguiente(nodo* a) {
		if (a != NULL) {
			return a->enlace;
		}
		return NULL;
}

nodo* lista::nodoAnterior(nodo* v) {
		if (v != cabeza) {
			nodo *a; a = cabeza;
			while (a->enlace != v) {
					a = a->enlace;
			}
			return a;
		}
		return NULL;
}

float lista::datoNodo(nodo *n){
		if (n != NULL) return n->dato;
		else return NULL;
}

void lista::eliminar(float x) {
		nodo*  a = buscar(x);
		if (a !=NULL) {
			if (a == cabeza) {
				cabeza = cabeza->enlace;
				}
			else {
				nodo*  v = nodoAnterior(a);
				v->enlace = a->enlace;
				}
			delete a;  // libera el nodo a
		}
}

lista lista::copiar(int p, int q) {
		lista cp;
		int nn = contarNodos();
		int k=0;
		nodo *v; v = cabeza;
		if ((p<nn)&(q<nn)) {
			while (v != NULL) {
				k++;
				if ( k == p )  {
					for (int i = p; i <= q; i++) {
						cp.insertarFinal(v->dato);
						v = v->enlace;
					}
				return cp;
				}
				v = v->enlace;
			}
		}
	return cp;
}

lista lista::duplicar() {
		lista cp;
		nodo *v; v = cabeza;
		while (v != NULL) {
			cp.insertarFinal(v->dato);
			v = v->enlace;
		}
		return cp;
}

float lista::eliminarFinal() {
		float x;
		nodo*  v = irAlNodoFinal();
		if (cabeza != NULL) {
			if (cabeza == v) {
				cabeza = NULL;
			}
			else {
				nodo*  a = nodoAnterior(v);
				a->enlace = NULL;
			}
			x = v->dato;
			delete v;
			return x;
		}
		return NULL;
}
>>>>>>> bb1a6e82f22b3e3aa6b4a0a294b17c22f5b45216
