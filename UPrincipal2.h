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
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.WinXCtrls.hpp>
#include <FireDAC.Stan.StorageJSON.hpp>
#include <System.Actions.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.DBActns.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
<<<<<<< HEAD
	TMediaPlayer *MediaPlayer3;
	TImage *Image4;
	TToggleSwitch *prender;
	TMemo *HISTORIAL1;
	TMemo *HISTORIAL2;
	TButton *historial;
	TButton *Button4;
	TButton *Button2;
	TImage *Image2;
	TImage *Image3;
	TImage *Image5;
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall prenderClick(TObject *Sender);
	void __fastcall Image5Click(TObject *Sender);
=======
	TImage *Image1;
	TGroupBox *GroupBox1;
	TButton *Button4;
	TButton *Button2;
	TMemo *HISTORIAL1;
	TMemo *HISTORIAL2;
	TButton *historial;
	TToggleSwitch *prender;
	TMediaPlayer *MediaPlayer3;
	void __fastcall Image1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall prenderClick(TObject *Sender);
>>>>>>> bb1a6e82f22b3e3aa6b4a0a294b17c22f5b45216


private:	// User declarations
int i=100;
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
