//---------------------------------------------------------------------------

#pragma hdrstop

#include "Vector.h"
#include "VCL.h"
#include "Ticked.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
// Constructor por defecto
CVector::CVector() {
	n = 0;
}

void CVector::AddTicket(Ticket &ticket) {
	if (n < MAX) {
        V[n] = ticket;
        n++;
    } else {
        ShowMessage("El vector está lleno");
    }
}

Ticket CVector::GetTicket(int pos) {
    if (pos >= 0 && pos < n) {
        return V[pos];
    } else {
        ShowMessage("Posición fuera de rango");
		return Ticket(); // Retorna un ticket por defecto
    }
}

void CVector::AtenderTicket(int pos) {
	if (pos >= 0 && pos < n) {
		V[pos].SetStatus(false); // Cambiar estado a "Atendido"
	} else {
        ShowMessage("Posición fuera de rango");
    }
}

int CVector::GetN() {
    return n;
}
