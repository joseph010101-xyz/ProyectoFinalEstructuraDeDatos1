//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "UAtender.h"
#include "UPrincipal.h"
#include "UPrincipal2.h"
#include "UPrincipal3.h"
#include "UPrincipal5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//TForm2 *form2;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	Form2->Show();
	 MediaPlayer2->Open();
	 MediaPlayer2->Play();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
 MediaPlayer2->Open();
   MediaPlayer2->Play();

}
//---------------------------------------------------------------------------




void __fastcall TForm1::Button3Click(TObject *Sender)
{
   MediaPlayer2->Open();
   MediaPlayer2->Play();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
   MediaPlayer2->Open();
   MediaPlayer2->Play();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button4Click(TObject *Sender)
{
  Form5->ShowModal();
  MediaPlayer2->Open();
  MediaPlayer2->Play();
}
//---------------------------------------------------------------------------

