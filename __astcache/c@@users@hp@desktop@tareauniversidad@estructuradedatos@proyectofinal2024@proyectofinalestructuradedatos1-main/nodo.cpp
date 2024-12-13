//---------------------------------------------------------------------------

#pragma hdrstop

#include "Nodo.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
nodo::nodo(){
	enlaceIzq=nullptr;
	enlaceDer=nullptr;
	dato='\0';
}
nodo::nodo(char v){
	enlaceIzq=nullptr;
	enlaceDer=nullptr;
	dato=v;
}

