//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button1Click(TObject *Sender)
{
Form3->Close();
Form1->zap(1,3);
Form1->vtorzap(1, 1);
Form1->vtorzap(1, 2);
Form1->vtorzap(1, 3);
Form1->vtorzap(1, 4);
}
//---------------------------------------------------------------------------
