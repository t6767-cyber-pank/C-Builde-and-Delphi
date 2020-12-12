//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "sqlite3.h"
#pragma comment(lib,"sqlite3.lib")

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


void TForm1::createTable()
{
sqlite3_open(us, &database);
sqlite3_prepare_v2(database, "CREATE TABLE products(id_products integer primary key autoincrement, products TEXT NOT NULL, category TEXT, cena TEXT, data TEXT);", -1, &stmt, NULL);
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
case 11:
	sqlite3_prepare_v2(database, "select products, category, cena, data, id_products from products where products LIKE ? and category LIKE ? and data LIKE ? order by id_products desc;", -1, &stmt, 0); //
	strbind="%"+Edit1->Text+"%";
	sqlite3_bind_text16( stmt, 1, strbind.c_str(), -1, 0);
	strbind="%"+Edit2->Text+"%";
	sqlite3_bind_text16( stmt, 2, strbind.c_str(), -1, 0);
	strbind="%"+Edit3->Text+"%";
	sqlite3_bind_text16( stmt, 3, strbind.c_str(), -1, 0);

	addtotable();
	break;
case 12:
		sqlite3_prepare_v2(database, "insert into products(products, category, cena, data) values(?, ?, ?, ?);", -1, &stmt, 0);
		sqlite3_bind_text16( stmt, 1, Form2->ComboBox1->Text.c_str(), -1, 0);
		sqlite3_bind_text16( stmt, 2, Form2->ComboBox2->Text.c_str(), -1, 0);
		sqlite3_bind_text16( stmt, 3, Form2->Edit1->Text.c_str(), -1, 0);
		sqlite3_bind_text16( stmt, 4, Form2->DateTimePicker1->Date.DateString().c_str(), -1, 0);
		sqlite3_step(stmt);
	break;
case 13:
		sqlite3_prepare_v2(database, "delete from products where id_products=?;", -1, &stmt, 0);
		sqlite3_bind_int(stmt, 1, StringGrid1->Cells[4][StringGrid1->Row].ToInt());
		sqlite3_step(stmt);
	break;
case 15:
	sqlite3_prepare_v2(database, "select distinct products from products order by products asc;", -1, &stmt, 0);
	addtoCb(Form2->ComboBox1);
	break;
case 16:
	sqlite3_prepare_v2(database, "select distinct category from products order by category asc;", -1, &stmt, 0);
	addtoCb(Form2->ComboBox2);
	break;
}
sqlite3_reset(stmt);
sqlite3_finalize(stmt);
sqlite3_close(database);
}

void TForm1::addtotable()
{
	StringGrid1->Width=505;
	StringGrid1->ColCount=4;
	StringGrid1->ColWidths[0]=500;
	StringGrid1->ColWidths[1]=350;
	StringGrid1->ColWidths[2]=70;
	StringGrid1->ColWidths[3]=100;
	StringGrid1->Cells[0][0]="�������";
	StringGrid1->Cells[1][0]="���������";
	StringGrid1->Cells[2][0]="����";
	StringGrid1->Cells[3][0]="����";
	StringGrid1->Cells[4][0]="0";
	int i=1;
	int big=0;
	while (sqlite3_step( stmt ) == SQLITE_ROW )
	{
	StringGrid1->Cells[0][i]=(wchar_t*)sqlite3_column_text16( stmt, 0);
	StringGrid1->Cells[1][i]=(wchar_t*)sqlite3_column_text16( stmt, 1);
	StringGrid1->Cells[2][i]=(wchar_t*)sqlite3_column_text16( stmt, 2);
	StringGrid1->Cells[3][i]=(wchar_t*)sqlite3_column_text16( stmt, 3);
	StringGrid1->Cells[4][i]=(wchar_t*)sqlite3_column_text16( stmt, 4);
	big=big+StringGrid1->Cells[2][i].ToInt();
	i++;
	}
	StringGrid1->RowCount=i;
    Panel2->Caption=big;
}

void TForm1::addtoCb(TComboBox *cb)
{
	cb->Clear();
	while (sqlite3_step( stmt ) == SQLITE_ROW )
	{
	cb->Items->Add((wchar_t*)sqlite3_column_text16( stmt, 0));
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
Form1->Left=Screen->Width/2-Form1->Width/2;
Form1->Top=Screen->Height/2-Form1->Height/2;
createTable();
sell(11);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Edit1Change(TObject *Sender)
{
sell(11);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
sell(15);
sell(16);
Form2->DateTimePicker1->Date=Form2->DateTimePicker1->Date.CurrentDate();
Form2->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
sell(13);
sell(11);
}
//---------------------------------------------------------------------------

