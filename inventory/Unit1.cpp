//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "sqlite3.h"
#pragma comment(lib,"sqlite3.lib")
#include      <ComObj.hpp>
#include      <utilcls.h>
#include "ShellAPI.h"
//#pragma comment(lib,"Project1.a")
char * us="t67";
sqlite3 *database;
sqlite3_stmt *stmt;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void TForm1::createTable()
{
sqlite3_open(us, &database);
sqlite3_prepare_v2(database, "CREATE TABLE invent(id_invent integer primary key autoincrement, oborud TEXT NOT NULL, invnom TEXT, harakter TEXT, kabinet TEXT, otdel TEXT, otvet TEXT, matotvet TEXT);", -1, &stmt, NULL);
sqlite3_step(stmt);      // ����� ��� ����� ��������� ������
sqlite3_finalize(stmt);
sqlite3_close(database);
}

void TForm1::sell(int z)
{
int b;
String strbind;
sqlite3_open(us, &database);
switch(z)
{
case 21:
		sqlite3_prepare_v2(database, "insert into invent(oborud, invnom, harakter, kabinet, otdel, otvet, matotvet) values(?, ?, ?, ?, ?, ?, ?);", -1, &stmt, 0);
		sqlite3_bind_text16( stmt, 1, Form2->ComboBox1->Text.c_str(), -1, 0);
		sqlite3_bind_text16( stmt, 2, Form2->LabeledEdit2->Text.c_str(), -1, 0);
		sqlite3_bind_text16( stmt, 3, Form2->Memo1->Text.c_str(), -1, 0);
		sqlite3_bind_text16( stmt, 4, Form2->LabeledEdit4->Text.c_str(), -1, 0);
		sqlite3_bind_text16( stmt, 5, Form2->LabeledEdit5->Text.c_str(), -1, 0);
		sqlite3_bind_text16( stmt, 6, Form2->LabeledEdit6->Text.c_str(), -1, 0);
		sqlite3_bind_text16( stmt, 7, Form2->LabeledEdit7->Text.c_str(), -1, 0);
		sqlite3_step(stmt);
	break;
case 22:
	sqlite3_prepare_v2(database, "select oborud, invnom, harakter, kabinet, otdel, otvet, matotvet, id_invent from invent where oborud like ? and invnom like ? and otdel like ? and harakter like ? and matotvet like ? order by id_invent desc;", -1, &stmt, 0);
	strbind="%"+Edit1->Text+"%";
	sqlite3_bind_text16( stmt, 1, strbind.c_str(), -1, 0);
	strbind="%"+Edit2->Text+"%";
	sqlite3_bind_text16( stmt, 2, strbind.c_str(), -1, 0);
	strbind="%"+Edit3->Text+"%";
	sqlite3_bind_text16( stmt, 3, strbind.c_str(), -1, 0);
	strbind="%"+Edit4->Text+"%";
	sqlite3_bind_text16( stmt, 4, strbind.c_str(), -1, 0);
	strbind="%"+Edit5->Text+"%";
	sqlite3_bind_text16( stmt, 5, strbind.c_str(), -1, 0);
	addtotable();
	break;
case 23:
		b=StringGrid1->Cells[8][StringGrid1->Row].ToInt();
		sqlite3_prepare_v2(database, "delete from invent where id_invent=?;", -1, &stmt, 0);
		sqlite3_bind_int(stmt, 1, b);
		sqlite3_step(stmt);
	break;
case 24:
	sqlite3_prepare_v2(database, "select distinct oborud from invent order by oborud asc;", -1, &stmt, 0);
	addtoCb(Form2->ComboBox1);
	break;
case 31:
		sqlite3_prepare_v2(database, "insert into sotrudniki(fio, otdel, dolg, sostoyanie, kontdannie) values(?, ?, ?, 1, ?);", -1, &stmt, 0);
		sqlite3_bind_text16( stmt, 1, Form4->Edit1->Text.c_str(), -1, 0);
		sqlite3_bind_text16( stmt, 2, Form4->ComboBox1->Text.c_str(), -1, 0);
		sqlite3_bind_text16( stmt, 3, Form4->ComboBox2->Text.c_str(), -1, 0);
		sqlite3_bind_text16( stmt, 4, Form4->Memo1->Text.c_str(), -1, 0);
		sqlite3_step(stmt);
	break;
case 32:
	sqlite3_prepare_v2(database, "select fio, otdel, dolg, sostoyanie, kontdannie, id_sotr from sotrudniki order by fio desc;", -1, &stmt, 0);
	addtotablesotr();
	break;
}
sqlite3_reset(stmt);
sqlite3_finalize(stmt);
sqlite3_close(database);
}

void TForm1::addtotablesotr()
{
	Form5->StringGrid1->ColCount=6;
	Form5->StringGrid1->ColWidths[0]=70;
	Form5->StringGrid1->ColWidths[1]=300;
	Form5->StringGrid1->ColWidths[2]=150;
	Form5->StringGrid1->ColWidths[3]=200;
	Form5->StringGrid1->ColWidths[4]=100;
	Form5->StringGrid1->ColWidths[5]=100;
	Form5->StringGrid1->Cells[0][0]="� �/�";
	Form5->StringGrid1->Cells[1][0]="�.�.�.";
	Form5->StringGrid1->Cells[2][0]="���������";
	Form5->StringGrid1->Cells[3][0]="���������";
	Form5->StringGrid1->Cells[4][0]="���������";
	Form5->StringGrid1->Cells[5][0]="���������� ������";
	Form5->StringGrid1->Cells[6][0]="0";
	int i=1;
	while (sqlite3_step( stmt ) == SQLITE_ROW )
	{
	Form5->StringGrid1->Cells[0][i]=i;
	Form5->StringGrid1->Cells[1][i]=(wchar_t*)sqlite3_column_text16( stmt, 0);
	Form5->StringGrid1->Cells[2][i]=(wchar_t*)sqlite3_column_text16( stmt, 1);
	Form5->StringGrid1->Cells[3][i]=(wchar_t*)sqlite3_column_text16( stmt, 2);
	if (sqlite3_column_int( stmt, 3)==1) {
	Form5->StringGrid1->Cells[4][i]="��������";
	}
	else
	{
	Form5->StringGrid1->Cells[4][i]="�� ��������";
	}
	Form5->StringGrid1->Cells[5][i]=(wchar_t*)sqlite3_column_text16( stmt, 4);
	Form5->StringGrid1->Cells[6][i]=(wchar_t*)sqlite3_column_text16( stmt, 5);
	i++;
	}
	Form5->StringGrid1->RowCount=i;
}

void TForm1::addtotable()
{
	StringGrid1->Width=505;
	StringGrid1->ColCount=8;
	StringGrid1->ColWidths[0]=70;
	StringGrid1->ColWidths[1]=200;
	StringGrid1->ColWidths[2]=150;
	StringGrid1->ColWidths[3]=400;
	StringGrid1->ColWidths[4]=100;
	StringGrid1->ColWidths[5]=100;
	StringGrid1->ColWidths[6]=200;
	StringGrid1->ColWidths[7]=150;
	StringGrid1->Cells[0][0]="� �/�";
	StringGrid1->Cells[1][0]="������������";
	StringGrid1->Cells[2][0]="���. �����";
	StringGrid1->Cells[3][0]="��������������";
	StringGrid1->Cells[4][0]="�������";
	StringGrid1->Cells[5][0]="�����";
	StringGrid1->Cells[6][0]="�������������";
	StringGrid1->Cells[7][0]="��������";
	StringGrid1->Cells[8][0]="0";
	int i=1;
	while (sqlite3_step( stmt ) == SQLITE_ROW )
	{
	StringGrid1->Cells[0][i]=i;
	StringGrid1->Cells[1][i]=(wchar_t*)sqlite3_column_text16( stmt, 0);
	StringGrid1->Cells[2][i]=(wchar_t*)sqlite3_column_text16( stmt, 1);
	StringGrid1->Cells[3][i]=(wchar_t*)sqlite3_column_text16( stmt, 2);
	StringGrid1->Cells[4][i]=(wchar_t*)sqlite3_column_text16( stmt, 3);
	StringGrid1->Cells[5][i]=(wchar_t*)sqlite3_column_text16( stmt, 4);
	StringGrid1->Cells[6][i]=(wchar_t*)sqlite3_column_text16( stmt, 5);
	StringGrid1->Cells[7][i]=(wchar_t*)sqlite3_column_text16( stmt, 6);
	StringGrid1->Cells[8][i]=(wchar_t*)sqlite3_column_text16( stmt, 7);
	i++;
	}
	StringGrid1->RowCount=i;
}

void TForm1::addtoCb(TComboBox *cb)
{
	cb->Clear();
	while (sqlite3_step( stmt ) == SQLITE_ROW )
	{
	cb->Items->Add((wchar_t*)sqlite3_column_text16( stmt, 0));
	}
}

void __fastcall TForm1::FormCreate(TObject *Sender)
{
Form1->Left=Screen->Width/2-Form1->Width/2;
Form1->Top=0;
createTable();
sell(22);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N2Click(TObject *Sender)
{
Form1->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N4Click(TObject *Sender)
{
sell(24);
Form2->ComboBox1->Text="";
Form2->LabeledEdit2->Text="";
Form2->Memo1->Text="";
Form2->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N6Click(TObject *Sender)
{
sell(23);
sell(22);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Edit1Change(TObject *Sender)
{
sell(22);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Edit2Change(TObject *Sender)
{
sell(22);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Edit3Change(TObject *Sender)
{
sell(22);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Edit4Change(TObject *Sender)
{
sell(22);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Edit5Change(TObject *Sender)
{
sell(22);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Excel1Click(TObject *Sender)
{
 vVarApp=CreateOleObject("Excel.Application");
vVarApp.OlePropertySet("Visible",true);
vVarBooks=vVarApp.OlePropertyGet("Workbooks");
vVarApp.OlePropertySet("SheetsInNewWorkbook",1);
vVarBooks.OleProcedure("Add");
vVarBook=vVarBooks.OlePropertyGet("Item",1);
vVarSheets=vVarBook.OlePropertyGet("Worksheets");
vVarSheet=vVarSheets.OlePropertyGet("Item",1);
str="�����";
vVarSheet.OlePropertySet("Name",str);
/*
str="A1:C4";
vVarCell=vVarSheet.OlePropertyGet("Range",str);
vVarCell.OleProcedure("Merge");
*/
vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",1,1);
vVarCell.OlePropertyGet("Font").OlePropertySet("Size",15);
vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
str="Arial";
vVarCell.OlePropertyGet("Font").OlePropertySet("Name",str);
vVarCell.OlePropertyGet("Interior").OlePropertySet("ColorIndex",3);
str="� �/�";
vVarCell.OlePropertySet("Value",str);
vVarCell.OlePropertySet("RowHeight", 20);
vVarCell.OlePropertySet("ColumnWidth",5);

vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",1,2);
vVarCell.OlePropertyGet("Font").OlePropertySet("Size",15);
vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
str="Arial";
vVarCell.OlePropertyGet("Font").OlePropertySet("Name",str);
vVarCell.OlePropertyGet("Interior").OlePropertySet("ColorIndex",3);
str="������������";
vVarCell.OlePropertySet("Value",str);
vVarCell.OlePropertySet("RowHeight", 20);
vVarCell.OlePropertySet("ColumnWidth",30);

vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",1,3);
vVarCell.OlePropertyGet("Font").OlePropertySet("Size",15);
vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
str="Arial";
vVarCell.OlePropertyGet("Font").OlePropertySet("Name",str);
vVarCell.OlePropertyGet("Interior").OlePropertySet("ColorIndex",3);
str="���. �����";
vVarCell.OlePropertySet("Value",str);
vVarCell.OlePropertySet("RowHeight", 20);
vVarCell.OlePropertySet("ColumnWidth",20);

vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",1,4);
vVarCell.OlePropertyGet("Font").OlePropertySet("Size",15);
vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
str="Arial";
vVarCell.OlePropertyGet("Font").OlePropertySet("Name",str);
vVarCell.OlePropertyGet("Interior").OlePropertySet("ColorIndex",3);
str="��������������";
vVarCell.OlePropertySet("Value",str);
vVarCell.OlePropertySet("RowHeight", 20);
vVarCell.OlePropertySet("ColumnWidth",40);

vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",1,5);
vVarCell.OlePropertyGet("Font").OlePropertySet("Size",15);
vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
str="Arial";
vVarCell.OlePropertyGet("Font").OlePropertySet("Name",str);
vVarCell.OlePropertyGet("Interior").OlePropertySet("ColorIndex",3);
str="�������";
vVarCell.OlePropertySet("Value",str);
vVarCell.OlePropertySet("RowHeight", 20);
vVarCell.OlePropertySet("ColumnWidth",10);

vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",1,6);
vVarCell.OlePropertyGet("Font").OlePropertySet("Size",15);
vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
str="Arial";
vVarCell.OlePropertyGet("Font").OlePropertySet("Name",str);
vVarCell.OlePropertyGet("Interior").OlePropertySet("ColorIndex",3);
str="�����";
vVarCell.OlePropertySet("Value",str);
vVarCell.OlePropertySet("RowHeight", 20);
vVarCell.OlePropertySet("ColumnWidth",30);

vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",1,7);
vVarCell.OlePropertyGet("Font").OlePropertySet("Size",15);
vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
str="Arial";
vVarCell.OlePropertyGet("Font").OlePropertySet("Name",str);
vVarCell.OlePropertyGet("Interior").OlePropertySet("ColorIndex",3);
str="�������������";
vVarCell.OlePropertySet("Value",str);
vVarCell.OlePropertySet("RowHeight", 20);
vVarCell.OlePropertySet("ColumnWidth",30);

vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",1,8);
vVarCell.OlePropertyGet("Font").OlePropertySet("Size",15);
vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
str="Arial";
vVarCell.OlePropertyGet("Font").OlePropertySet("Name",str);
vVarCell.OlePropertyGet("Interior").OlePropertySet("ColorIndex",3);
str="��������";
vVarCell.OlePropertySet("Value",str);
vVarCell.OlePropertySet("RowHeight", 20);
vVarCell.OlePropertySet("ColumnWidth",20);

//int j=1;
for (int i = 2; i < StringGrid1->RowCount+1; i++) {
/*
vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",i,1);
vVarCell.OlePropertyGet("Font").OlePropertySet("Size",12);
vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",false);
str="Arial";
vVarCell.OlePropertyGet("Font").OlePropertySet("Name",str);
str=j;
vVarCell.OlePropertySet("Value",str);
vVarCell.OlePropertySet("RowHeight", 15);
j++;
*/
vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",i,1);
vVarCell.OlePropertyGet("Font").OlePropertySet("Size",12);
vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",false);
str="Arial";
vVarCell.OlePropertyGet("Font").OlePropertySet("Name",str);
str=StringGrid1->Cells[0][i-1];
vVarCell.OlePropertySet("Value",str);
vVarCell.OlePropertySet("RowHeight", 15);

vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",i,2);
vVarCell.OlePropertyGet("Font").OlePropertySet("Size",12);
vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",false);
str="Arial";
vVarCell.OlePropertyGet("Font").OlePropertySet("Name",str);
str=StringGrid1->Cells[1][i-1];
vVarCell.OlePropertySet("Value",str);
vVarCell.OlePropertySet("RowHeight", 15);

vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",i,3);
vVarCell.OlePropertyGet("Font").OlePropertySet("Size",12);
vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",false);
str="Arial";
vVarCell.OlePropertyGet("Font").OlePropertySet("Name",str);
str=StringGrid1->Cells[2][i-1];
vVarCell.OlePropertySet("Value",str);
vVarCell.OlePropertySet("RowHeight", 15);

vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",i,4);
vVarCell.OlePropertyGet("Font").OlePropertySet("Size",12);
vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",false);
str="Arial";
vVarCell.OlePropertyGet("Font").OlePropertySet("Name",str);
str=StringGrid1->Cells[3][i-1];
vVarCell.OlePropertySet("Value",str);
vVarCell.OlePropertySet("RowHeight", 15);

vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",i,5);
vVarCell.OlePropertyGet("Font").OlePropertySet("Size",12);
vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",false);
str="Arial";
vVarCell.OlePropertyGet("Font").OlePropertySet("Name",str);
str=StringGrid1->Cells[4][i-1];
vVarCell.OlePropertySet("Value",str);
vVarCell.OlePropertySet("RowHeight", 15);

vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",i,6);
vVarCell.OlePropertyGet("Font").OlePropertySet("Size",12);
vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",false);
str="Arial";
vVarCell.OlePropertyGet("Font").OlePropertySet("Name",str);
str=StringGrid1->Cells[5][i-1];
vVarCell.OlePropertySet("Value",str);
vVarCell.OlePropertySet("RowHeight", 15);

vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",i,7);
vVarCell.OlePropertyGet("Font").OlePropertySet("Size",12);
vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",false);
str="Arial";
vVarCell.OlePropertyGet("Font").OlePropertySet("Name",str);
str=StringGrid1->Cells[6][i-1];
vVarCell.OlePropertySet("Value",str);
vVarCell.OlePropertySet("RowHeight", 15);

vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",i,8);
vVarCell.OlePropertyGet("Font").OlePropertySet("Size",12);
vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",false);
str="Arial";
vVarCell.OlePropertyGet("Font").OlePropertySet("Name",str);
str=StringGrid1->Cells[7][i-1];
vVarCell.OlePropertySet("Value",str);
vVarCell.OlePropertySet("RowHeight", 15);
}
str=ExtractFilePath(Application->ExeName)+Now().DateString()+".xls";
vVarApp.OlePropertyGet("Workbooks").OlePropertyGet("Item",1).OleProcedure("SaveAs",str, Variant(-4143));
//������� �������� ���������� Excel
vVarApp.OleProcedure("Quit");
ShellExecute(Handle,NULL,str,NULL,NULL,SW_RESTORE);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N8Click(TObject *Sender)
{
Form4->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N9Click(TObject *Sender)
{
sell(32);
Form5->ShowModal();
}
//---------------------------------------------------------------------------

