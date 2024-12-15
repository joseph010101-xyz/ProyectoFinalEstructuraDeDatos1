//---------------------------------------------------------------------------

#ifndef VectorH
#define VectorH
#include "Ticked.h"
//---------------------------------------------------------------------------
const int MAX = 1000;
class CVector {
private:
    int n;                 // Número de elementos en el vector
	Ticket V[MAX];         // Vector de tickets

public:
    CVector();

	void AddTicket(Ticket &ticket);
    Ticket GetTicket(int pos);
	void AtenderTicket(int pos); // Marcar un ticket como atendido
	int GetN();
};

#endif
