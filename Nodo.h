//---------------------------------------------------------------------------

#ifndef NodoH
#define NodoH
#include <cstddef>
//---------------------------------------------------------------------------
class nodo {
	public:
		float  dato;     // campo de dato
		nodo*  enlace;  // campo de direccion al siguiente nodo
		//constructor
		nodo() {
				dato = 0;
				enlace = NULL; // NULL es un simbolo que vale 0
				}
};

#endif
