//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Dialogs.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TStringGrid *StringGrid1;
	TADOConnection *ADOConnection1;
	TADOQuery *ADOQuery1;
	TMainMenu *MainMenu1;
	TMenuItem *N1;
	TMenuItem *N2;
	TMenuItem *N3;
	TMenuItem *N4;
	TMenuItem *N6;
	TMenuItem *N5;
	TPanel *Panel1;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TComboBox *ComboBox1;
	TComboBox *ComboBox2;
	TComboBox *ComboBox3;
	TComboBox *ComboBox4;
	TMenuItem *N7;
	TMenuItem *EXCEL1;
	TMenuItem *EXCEL2;
	TOpenDialog *OpenDialog1;
	TMenuItem *N8;
	TPanel *Panel2;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall N2Click(TObject *Sender);
	void __fastcall N6Click(TObject *Sender);
	void __fastcall N4Click(TObject *Sender);
	void __fastcall N5Click(TObject *Sender);
	void __fastcall ComboBox1Change(TObject *Sender);
	void __fastcall ComboBox2Change(TObject *Sender);
	void __fastcall ComboBox3Change(TObject *Sender);
	void __fastcall ComboBox4Change(TObject *Sender);
	void __fastcall EXCEL1Click(TObject *Sender);
	void __fastcall EXCEL2Click(TObject *Sender);
	void __fastcall N8Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
void clearmas();
void zap(int x, int y);
void vtorzap(int x, int y);
void adtotab(int X,  TStringGrid *StringGrid1);
void addtocb(String s, TComboBox *cb);
String a[20];
String b[20];
int c[20];
String d1;
String d2;
String d3;
String d4;
String d5;
String d6;
String d7;
Variant  vVarApp,vVarBooks,vVarBook,vVarSheets,vVarSheet,vVarCells,vVarCell;
OleVariant  str;
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
