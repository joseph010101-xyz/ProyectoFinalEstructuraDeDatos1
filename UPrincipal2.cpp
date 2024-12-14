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


<<<<<<< HEAD

void __fastcall TForm2::Button2Click(TObject *Sender)
{
	 HISTORIAL1->Lines->Add("ticket " + IntToStr(i));         // genera ticket y imprime en el historial
	 ShowMessage("Su Ticket es: " + IntToStr(i)+" Plataforma");    //muesta mensaje del ticket
	 i++;
	 MediaPlayer3->Open(); //sonido del boton
   MediaPlayer3->Play();      //sonido del boton
   Form2->Close();  // cierra el formulario despues de escoger su tickrt
=======
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
>>>>>>> bb1a6e82f22b3e3aa6b4a0a294b17c22f5b45216
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button3Click(TObject *Sender)
{
<<<<<<< HEAD
	 HISTORIAL2->Lines->Add("ticket  " + IntToStr(i));       // genera ticket y imprime en el historial
	 ShowMessage("Su Ticket es: " + IntToStr(i)+" Plataforma");   //muesta mensaje del ticket
	 i++;
   MediaPlayer3->Open();      //sonido del boton
   MediaPlayer3->Play();     //sonido del boton
   Form2->Close();
=======
	 HISTORIAL2->Lines->Add("ticket  " + IntToStr(i));
	 ShowMessage("Su Ticket es: " + IntToStr(i)+" Plataforma");
	 i++;
	 MediaPlayer3->Open();
   MediaPlayer3->Play();
>>>>>>> bb1a6e82f22b3e3aa6b4a0a294b17c22f5b45216
}
//---------------------------------------------------------------------------





void __fastcall TForm2::prenderClick(TObject *Sender)
{
<<<<<<< HEAD
  historial->Visible = prender->State == tssOn;  //pone visive el historial
  HISTORIAL1->Visible = prender->State == tssOn;  //pone visive el historial
  HISTORIAL2->Visible = prender->State == tssOn;   //pone visive el historial
  Image2->Visible = prender->State == tssOn;       //pone visive el historial
  Image3->Visible = prender->State == tssOn;       //pone visive el historial
  MediaPlayer3->Open(); //sonido del boton
  MediaPlayer3->Play();  //sonido del boton
=======
  historial->Visible = prender->State == tssOn;
  HISTORIAL1->Visible = prender->State == tssOn;
  HISTORIAL2->Visible = prender->State == tssOn;
  MediaPlayer3->Open();
  MediaPlayer3->Play();
>>>>>>> bb1a6e82f22b3e3aa6b4a0a294b17c22f5b45216
}
//---------------------------------------------------------------------------




<<<<<<< HEAD


void __fastcall TForm2::Image5Click(TObject *Sender)
{
   Form2->Close();
   MediaPlayer3->Open(); //sonido del boton
   MediaPlayer3->Play();  //sonido del boton
}
//---------------------------------------------------------------------------

=======
>>>>>>> bb1a6e82f22b3e3aa6b4a0a294b17c22f5b45216
