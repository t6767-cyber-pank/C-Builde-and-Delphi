//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TLabel *Label1;
	TComboBox *ComboBox1;
	TLabel *Label2;
	TComboBox *ComboBox2;
	TLabel *Label3;
	TEdit *Edit1;
	TLabel *Label4;
	TComboBox *ComboBox3;
	TLabel *Label5;
	TComboBox *ComboBox4;
	TLabel *Label6;
	TEdit *Edit2;
	TLabel *Label7;
	TComboBox *ComboBox5;
	TButton *Button1;
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
