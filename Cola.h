//---------------------------------------------------------------------------

#ifndef ColaH
#define ColaH
#include "Lista.h"
//---------------------------------------------------------------------------
class cola : private lista   // FIFO
{
		public:
				cola(): 	lista() {	}   			// llamado al constructor de la clase base
				void 		poner(float x);  		// a?ade un elemento a la cola
				float 		sacar();          	// quita un elemento de la cola
				bool 		esVacia();
				int 		contarNodos();
				nodo* 		primero();
				// float	verUltimo();
				// float	verPrimero();
};
#endif
