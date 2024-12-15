//---------------------------------------------------------------------------

#pragma hdrstop

#include "Ticked.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
// Constructor por defecto
Ticket::Ticket() {
    id = 0;
    serviceType = "";
	status = true;
}

// Constructor parametrizado
Ticket::Ticket(int id, string serviceType) {
    this->id = id;
    this->serviceType = serviceType;
	this->status = true;
}

void Ticket::SetID(int id) {
    this->id = id;
}

int Ticket::GetID() {
	return id;
}

void Ticket::SetServiceType(string serviceType) {
    this->serviceType = serviceType;
}

string Ticket::GetServiceType() {
    return serviceType;
}

void Ticket::SetStatus(bool status) {
	this->status = status;
}

bool Ticket::GetStatus() {
	return status;
}

string Ticket::ToString() {
	return "ID: " + std::to_string(id) + ", Servicio: " + serviceType +", Estado: " + (status ? "En espera" : "Atendido");
}

  //
