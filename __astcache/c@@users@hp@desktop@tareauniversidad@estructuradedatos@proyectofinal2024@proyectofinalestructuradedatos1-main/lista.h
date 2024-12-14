//---------------------------------------------------------------------------
#ifndef ListaH
#define ListaH
//---------------------------------------------------------------------------
class lista {
	private:
		nodo* cabeza;  // direccion al primer nodo
		int numNodos;

	public:
		lista(); // constructor
		bool 	esVacia();
		void	vaciar();
		nodo* 	cab();  // devuelve el puntero de la cabeza
		float	datoNodo(nodo *n);
		void 	insertarInicio(float x); 																								// push
		void 	insertarFinal(float x);
		void 	insertarDespuesDe(float x, float y); // despues de x, el valor y
		void	insertarAntesDe(float x, float y); // antes de x, el valor y
		void 	eliminar(float x); // el nodo con dato x
		float 	eliminarInicio();
		nodo*  	buscar(float x);
		int 	contarNodos();
		lista 	copiar(int p, int q); // copia sublista entre posiciones p y q
		nodo*  	irAlNodoFinal();
		nodo*  	irAlNodoInicio();
		nodo*  	nodoSiguiente(nodo* a); // va al siguiente despues del nodo a
		nodo*  	nodoAnterior(nodo* a);
		lista	duplicar();
		float	eliminarFinal();
		//float sumar();  // suma los datos de todos los nodos
		//float	máximo( ); //Devuelve el mayor elemento en la lista.
		//float	minimo( ); //Devuelve el menor elemento en la lista.
		//void 	Reemplazar(float x, float y); // sustituye el valor x con el nuevo valor y
		//lista	borrar(float x, float y); // quita una sublista desde x hasta y
		//lista unir(lista A, lista B);   // poner B a continuacion de A
		//void 	invertir(); //Invierte los elementos de la lista
		//void 	ordenar(int o); // o=0 ascendente; o=1 descendente
		//void	intercambiar(float  x, float y): intercambia el dato x con el dato y.
};
#endif
