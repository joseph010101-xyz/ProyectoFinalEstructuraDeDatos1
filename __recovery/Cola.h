//---------------------------------------------------------------------------
#ifndef ColaH
#define ColaH
#include "Lista.h"
//---------------------------------------------------------------------------
class cola : private lista   // FIFO
{
		public:
				cola(): 	lista() {	}   		 // llamado al constructor de la clase base
				void 		colar(float x);  		// a ade un elemento a la cola
				float 		desencolar();          	// quita un elemento de la cola
				bool 		esVacia();
				void		vaciar();
				int 		tamaño();
				nodo* 		primero();
				nodo* 		ultimo();
				cola		duplicar();
				float		verUltimo();
				float		verPrimero();
};

#endif
