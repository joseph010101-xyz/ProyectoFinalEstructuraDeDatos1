//---------------------------------------------------------------------------

#ifndef NodoH
#define NodoH
#include <cstddef>
//---------------------------------------------------------------------------
class nodo {
	public:
		float  dato;     // campo de dato
		nodo*  enlace;  // campo de direccion al siguiente nodo
		//nodo * enlaceizq;
		//constructor
		nodo() {
				dato = NULL;
				enlace =NULL; // NULL es un simbolo que vale 0
				}
};

#endif
