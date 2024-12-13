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

void __fastcall TForm1::SalirClick(TObject *Sender)
{
exit(0);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::LimpiarCajaClick(TObject *Sender)
{
for (int i = 0; i < SGVec->RowCount; i++)     //limpia caja
	{
		for (int j = 0; j < SGVec->ColCount; j++)
		{
			SGVec->Cells[j][i] = "";
		}
	}


}
//---------------------------------------------------------------------------


void __fastcall TForm1::LimpiarPlataformaClick(TObject *Sender)
{
for (int i = 0; i < StringGrid1->RowCount; i++)    //limpia plataforma
	{
		for (int j = 0; j < StringGrid1->ColCount; j++)
		{
			StringGrid1->Cells[j][i] = "";
		}
	}
}
//---------------------------------------------------------------------------


