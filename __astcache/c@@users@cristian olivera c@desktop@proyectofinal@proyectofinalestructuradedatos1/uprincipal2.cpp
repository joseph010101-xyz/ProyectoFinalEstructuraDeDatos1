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




void __fastcall TForm2::Button2Click(TObject *Sender)
{
	 HISTORIAL1->Lines->Add("ticket " + IntToStr(i));         // genera ticket y imprime en el historial
	 ShowMessage("Su Ticket es: " + IntToStr(i)+" Plataforma");    //muesta mensaje del ticket
	 i++;
	 MediaPlayer3->Open(); //sonido del boton
   MediaPlayer3->Play();      //sonido del boton
   Form2->Close();  // cierra el formulario despues de escoger su tickrt

}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button3Click(TObject *Sender)
{

	 HISTORIAL2->Lines->Add("ticket  " + IntToStr(i));       // genera ticket y imprime en el historial
	 ShowMessage("Su Ticket es: " + IntToStr(i)+" Plataforma");   //muesta mensaje del ticket
	 i++;
   MediaPlayer3->Open();      //sonido del boton
   MediaPlayer3->Play();     //sonido del boton
   Form2->Close();

}
//---------------------------------------------------------------------------





void __fastcall TForm2::prenderClick(TObject *Sender)
{

  historial->Visible = prender->State == tssOn;  //pone visive el historial
  HISTORIAL1->Visible = prender->State == tssOn;  //pone visive el historial
  HISTORIAL2->Visible = prender->State == tssOn;   //pone visive el historial
  Image2->Visible = prender->State == tssOn;       //pone visive el historial
  Image3->Visible = prender->State == tssOn;       //pone visive el historial
  MediaPlayer3->Open(); //sonido del boton
  MediaPlayer3->Play();  //sonido del boton

}
//---------------------------------------------------------------------------



void __fastcall TForm2::Image5Click(TObject *Sender)
{
   Form2->Close();
   MediaPlayer3->Open(); //sonido del boton
   MediaPlayer3->Play();  //sonido del boton
}
//---------------------------------------------------------------------------


