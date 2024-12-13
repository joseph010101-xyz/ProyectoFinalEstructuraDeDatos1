//---------------------------------------------------------------------------

#ifndef NodoH
#define NodoH
//---------------------------------------------------------------------------
class nodo{
	public:
		nodo* enlaceIzq;
		nodo* enlaceDer;
		char dato;

		nodo();
		nodo(char v);
};

#endif

