//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UPrincipal2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
	Form2->Close();
}
//---------------------------------------------------------------------------


void __fastcall TForm2::Image1Click(TObject *Sender)
{
Form2->Close();

}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button2Click(TObject *Sender)
{
HISTORIAL->Lines->Add("ticket" + IntToStr(i));
	 i++;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button3Click(TObject *Sender)
{
Memo2->Lines->Add("ticket" + IntToStr(i));
	 i++;
}
//---------------------------------------------------------------------------




