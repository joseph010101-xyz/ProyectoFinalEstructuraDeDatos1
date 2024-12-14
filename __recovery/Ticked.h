#ifndef TicketH
#define TicketH
#include <vcl.h>
#include <string>

using namespace std;
class Ticket {
private:
	int id;
	string serviceType; // Tipo de servicio (Depósito, Retiro, etc.)
	bool status;        // true = en espera, false = atendido

public:
	Ticket();
	Ticket(int id, string serviceType);


	void SetID(int id);
	int GetID();

	void SetServiceType(string serviceType);
	string GetServiceType();

	void SetStatus(bool status);
	bool GetStatus();

    string ToString();
};
#endif
