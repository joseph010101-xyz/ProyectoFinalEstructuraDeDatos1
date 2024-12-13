//---------------------------------------------------------------------------

#ifndef UPrincipalH
#define UPrincipalH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Data.Bind.Components.hpp>
#include <Data.Bind.EngExt.hpp>
#include <Vcl.Bind.DBEngExt.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.MPlayer.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.BaseImageCollection.hpp>
#include <Vcl.ImageCollection.hpp>
#include <Vcl.Graphics.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TMediaPlayer *MediaPlayer2;
	TButton *Button4;
	TButton *Salir;
	TImage *Image4;
	TLabel *Label3;
	TLabel *Label4;
	TImage *Image1;
	TImage *Image2;
	TStringGrid *SGVec;
	TStringGrid *StringGrid1;
	TButton *LimpiarCaja;
	TButton *LimpiarPlataforma;
	TImage *Image3;
	TImage *Image5;
	TLabel *Label1;
	TImage *Image6;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall SalirClick(TObject *Sender);
	void __fastcall LimpiarCajaClick(TObject *Sender);
	void __fastcall LimpiarPlataformaClick(TObject *Sender);
	void __fastcall Label3Click(TObject *Sender);
	void __fastcall Label4Click(TObject *Sender);
	void __fastcall Label1Click(TObject *Sender);





private:	// User declarations

public:		// User declarations
	__fastcall TForm1(TComponent* Owner);

	int i=100;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------

#endif
