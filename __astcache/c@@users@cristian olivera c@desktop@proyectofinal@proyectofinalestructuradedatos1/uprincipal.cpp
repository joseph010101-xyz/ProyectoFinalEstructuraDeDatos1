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
<<<<<<< HEAD
	 Form2->Show();
	 MediaPlayer2->Open();  //sonido del boton
	 MediaPlayer2->Play();  //sonido del boton
=======
	Form2->Show();
	 MediaPlayer2->Open();
	 MediaPlayer2->Play();
>>>>>>> bb1a6e82f22b3e3aa6b4a0a294b17c22f5b45216
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
<<<<<<< HEAD
 MediaPlayer2->Open();    //sonido del boton
   MediaPlayer2->Play();   //sonido del boton
=======
 MediaPlayer2->Open();
   MediaPlayer2->Play();
>>>>>>> bb1a6e82f22b3e3aa6b4a0a294b17c22f5b45216

}
//---------------------------------------------------------------------------




void __fastcall TForm1::Button3Click(TObject *Sender)
{
<<<<<<< HEAD
   MediaPlayer2->Open();   //sonido del boton
   MediaPlayer2->Play();    //sonido del boton
=======
   MediaPlayer2->Open();
   MediaPlayer2->Play();
>>>>>>> bb1a6e82f22b3e3aa6b4a0a294b17c22f5b45216
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
<<<<<<< HEAD
   MediaPlayer2->Open();  //sonido del boton
   MediaPlayer2->Play();    //sonido del boton
=======
   MediaPlayer2->Open();
   MediaPlayer2->Play();
>>>>>>> bb1a6e82f22b3e3aa6b4a0a294b17c22f5b45216
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button4Click(TObject *Sender)
{
  Form5->ShowModal();
<<<<<<< HEAD
  MediaPlayer2->Open();       //sonido del boton
  MediaPlayer2->Play();        //sonido del boton
=======
  MediaPlayer2->Open();
  MediaPlayer2->Play();
>>>>>>> bb1a6e82f22b3e3aa6b4a0a294b17c22f5b45216
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SalirClick(TObject *Sender)
{
<<<<<<< HEAD
exit(0);    //cierra todo el programa
=======
exit(0);
>>>>>>> bb1a6e82f22b3e3aa6b4a0a294b17c22f5b45216
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


void __fastcall TForm1::Label3Click(TObject *Sender)
{
<<<<<<< HEAD

	 MediaPlayer2->Open();  //sonido del boton
	 MediaPlayer2->Play();    //sonido del boton
	 //PIORIDAD
	 if (RadioButton1->Checked){            //opcion
	 Form2->ShowModal();
	  ShowMessage("Opción 1 discapacidad");
	  }else

		if (RadioButton2->Checked) {        //opcion
		Form2->ShowModal();
	   ShowMessage("Opción 2 embarazada");
	   } else

		if (RadioButton3->Checked) {        //opcion
		Form2->ShowModal();
	   ShowMessage("Opción 3 embarazada");
	   } else

		if (RadioButton4->Checked) {            //opcion
		Form2->ShowModal();
	  } else { ShowMessage("ESCOJA UNA OPCION");
	  }
	 //----------------------------------

=======
	 Form2->ShowModal();
	 MediaPlayer2->Open();
	 MediaPlayer2->Play();
>>>>>>> bb1a6e82f22b3e3aa6b4a0a294b17c22f5b45216
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label4Click(TObject *Sender)
{
<<<<<<< HEAD
   MediaPlayer2->Open();   //sonido del boton
   MediaPlayer2->Play();     //sonido del boton
=======
   MediaPlayer2->Open();
   MediaPlayer2->Play();
>>>>>>> bb1a6e82f22b3e3aa6b4a0a294b17c22f5b45216
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Label1Click(TObject *Sender)
{
<<<<<<< HEAD
   MediaPlayer2->Open();      //sonido del boton
   MediaPlayer2->Play();       //sonido del boton
=======
   MediaPlayer2->Open();
   MediaPlayer2->Play();
>>>>>>> bb1a6e82f22b3e3aa6b4a0a294b17c22f5b45216
}
//---------------------------------------------------------------------------

