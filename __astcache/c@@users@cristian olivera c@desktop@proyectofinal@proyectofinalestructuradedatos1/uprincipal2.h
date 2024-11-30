//---------------------------------------------------------------------------

#ifndef UPrincipal2H
#define UPrincipal2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ExtDlgs.hpp>
#include <Vcl.MPlayer.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
	TGroupBox *GroupBox1;
	TButton *Button4;
	TButton *Button2;
	TMemo *HISTORIAL;
	TMemo *Memo2;
	TButton *Button1;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Image1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
private:	// User declarations
int i=100;
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
