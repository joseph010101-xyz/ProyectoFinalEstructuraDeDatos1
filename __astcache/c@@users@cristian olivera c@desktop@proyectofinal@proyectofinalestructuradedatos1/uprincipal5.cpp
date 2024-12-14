//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UPrincipal5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button1Click(TObject *Sender)
{
<<<<<<< HEAD
Form5->Close();// cierra formulario
=======
Form5->Close();
>>>>>>> bb1a6e82f22b3e3aa6b4a0a294b17c22f5b45216
}
//---------------------------------------------------------------------------
