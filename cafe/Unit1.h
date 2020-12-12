//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TStringGrid *StringGrid1;
	TPanel *Panel4;
	TPanel *Panel5;
	TButton *Button6;
	TButton *Button5;
	TButton *Button1;
	TPanel *Panel6;
	TPanel *Panel7;
	TButton *Button3;
	TButton *Button4;
	TButton *Button2;
	TADOConnection *ADOConnection1;
	TADOQuery *ADOQuery1;
	TPanel *Panel1;
	TPanel *Panel2;
	TPanel *Panel3;
	TLabel *Label1;
	TEdit *Edit1;
	TLabel *Label2;
	TEdit *Edit2;
	TLabel *Label3;
	TComboBox *ComboBox1;
	TButton *Button7;
	TButton *Button8;
	TButton *Button9;
	TPanel *Panel8;
	TLabel *Label4;
	TComboBox *ComboBox2;
	TPanel *Panel9;
	TLabel *Label5;
	TEdit *Edit3;
	TButton *Button10;
	TPanel *Panel10;
	TStringGrid *StringGrid2;
	TLabel *Label6;
	TEdit *Edit4;
	TButton *Button11;
	TButton *Button12;
	TStringGrid *StringGrid3;
	TButton *Button14;
	TPanel *Panel12;
	TLabel *Label7;
	TDateTimePicker *DateTimePicker1;
	TButton *Button13;
	TPanel *Panel11;
	TButton *Button15;
	TLabel *Label8;
	TEdit *Edit5;
	TLabel *Label9;
	TButton *Button16;
	TLabel *Label10;
	TDateTimePicker *DateTimePicker2;
	TButton *Button17;
	TADOQuery *ADOQuery2;
	TButton *Button21;
	TPanel *Panel15;
	TPanel *Panel16;
	TButton *Button22;
	TEdit *Edit7;
	TLabel *Label12;
	TComboBox *ComboBox3;
	TPanel *Panel17;
	TButton *Button23;
	TPanel *Panel18;
	TDateTimePicker *DateTimePicker3;
	TDateTimePicker *DateTimePicker4;
	TLabel *Label13;
	TLabel *Label15;
	TLabel *Label16;
	TPrintDialog *PrintDialog1;
	TButton *Button24;
	TComboBox *ComboBox5;
	TPanel *Panel19;
	TBitBtn *BitBtn1;
	TLabel *Label18;
	TPanel *Panel20;
	TLabel *Label19;
	TComboBox *ComboBox7;
	TButton *Button28;
	TPanel *Panel21;
	TButton *Button29;
	TButton *Button30;
	TLabel *Label20;
	TButton *Button31;
	TDateTimePicker *DateTimePicker5;
	TButton *Button32;
	TButton *Button33;
	TButton *Button34;
	TButton *Button18;
	TButton *Button19;
	TButton *Button20;
	TLabel *Label14;
	TEdit *Edit8;
	TButton *Button25;
	TButton *Button26;
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button6Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button7Click(TObject *Sender);
	void __fastcall Button8Click(TObject *Sender);
	void __fastcall Button9Click(TObject *Sender);
	void __fastcall Button10Click(TObject *Sender);
	void __fastcall Button11Click(TObject *Sender);
	void __fastcall Button12Click(TObject *Sender);
	void __fastcall StringGrid1Click(TObject *Sender);
	void __fastcall Button14Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button13Click(TObject *Sender);
	void __fastcall Button15Click(TObject *Sender);
	void __fastcall Button16Click(TObject *Sender);
	void __fastcall Button17Click(TObject *Sender);
	void __fastcall Button18Click(TObject *Sender);
	void __fastcall Button20Click(TObject *Sender);
	void __fastcall FormResize(TObject *Sender);
	void __fastcall Button22Click(TObject *Sender);
	void __fastcall Button23Click(TObject *Sender);
	void __fastcall BitBtn1Click(TObject *Sender);
	void __fastcall FormClick(TObject *Sender);
	void __fastcall Button24Click(TObject *Sender);
	void __fastcall Button28Click(TObject *Sender);
	void __fastcall Button21Click(TObject *Sender);
	void __fastcall Button29Click(TObject *Sender);
	void __fastcall Button30Click(TObject *Sender);
	void __fastcall Button31Click(TObject *Sender);
	void __fastcall Button33Click(TObject *Sender);
	void __fastcall Button32Click(TObject *Sender);
	void __fastcall Button34Click(TObject *Sender);
	void __fastcall Button19Click(TObject *Sender);
	void __fastcall Button25Click(TObject *Sender);
	void __fastcall Button26Click(TObject *Sender);





private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
		String a[20];
	String b[20];
	int tab;
	String xval1;
	int ind;
	double xse;
	double xkv;
	double xkvp;
	double xres;
	double kols;

	double xs1;
	String l;
	String p;

	double xxl;
	int iid;
	String kind;
	String sr;
	String vx1;
	String vx2;
	String vx3;
	String kuda;
	Variant  vVarApp,vVarDocs,vVarParagraphs,vVarParagraph, vVarDoc, vVarRange, vVarTable, vVarCell;
	OleVariant       str;
	void zap(int x, int y);
	void clearmas();
	void adtotab(int X, TStringGrid *StringGrid1);
	void adtotab2(int X, TStringGrid *StringGrid1);
	void adtotab2plus(int X, TStringGrid *StringGrid1);
	void adtocb(TComboBox *cb, String val1);
	void adtolb(TStringGrid *StringGrid1, String val1, String val2, String val3);
	void adtolbplus(TStringGrid *StringGrid1, String val1, String val2, String val3);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
