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


void __fastcall TForm2::Image1Click(TObject *Sender)
{
Form2->Close();
   MediaPlayer3->Open();
   MediaPlayer3->Play();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button2Click(TObject *Sender)
{
	 HISTORIAL1->Lines->Add("ticket " + IntToStr(i));
	 ShowMessage("Su Ticket es: " + IntToStr(i)+" Plataforma");
	 i++;
	 MediaPlayer3->Open();
   MediaPlayer3->Play();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button3Click(TObject *Sender)
{
	 HISTORIAL2->Lines->Add("ticket  " + IntToStr(i));
	 ShowMessage("Su Ticket es: " + IntToStr(i)+" Plataforma");
	 i++;
	 MediaPlayer3->Open();
   MediaPlayer3->Play();
}
//---------------------------------------------------------------------------





void __fastcall TForm2::prenderClick(TObject *Sender)
{
  historial->Visible = prender->State == tssOn;
  HISTORIAL1->Visible = prender->State == tssOn;
  HISTORIAL2->Visible = prender->State == tssOn;
  MediaPlayer3->Open();
  MediaPlayer3->Play();
}
//---------------------------------------------------------------------------




