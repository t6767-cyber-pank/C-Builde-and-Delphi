//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include      <ComObj.hpp>
#include      <utilcls.h>

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------

// �������� �������� �� ������ ��������
void TForm1::clearmas()
{
for (int i = 0; i < 19; i++) {
a[i]="0";
b[i]="0";
c[i]=60;
}
}

// ��������� ������� ���������� ������ �� combobox
void TForm1::vtorzap(int x, int y)
{
ADOConnection1->Connected=false;
ADOQuery1->Active=false;
String spath=ExtractFilePath(Application->ExeName);
ADOConnection1->ConnectionString="Provider=Microsoft.Jet.OLEDB.4.0;Data Source="+spath+"baza.mdb;Persist Security Info=False";
ADOConnection1->Connected=true;
// �������� ������� ���������� ������������
String table="";
// ������ ������� �������  ���������� ������������
String data[20];
switch (x)
 {
 case 1: table="tovar";
		 data[1]="tovar";
		 data[2]="sklad";
		 data[3]="kategory";
		 data[4]="prim";
		 switch(y)
		 {
		   case 1:
				   ADOQuery1->SQL->Text="select distinct "+data[1]+" from "+table+" order by "+data[1]+" asc";
				   ADOQuery1->Active=true;
				   addtocb(data[1], ComboBox1);
				   break;
		   case 2:
				   ADOQuery1->SQL->Text="select distinct "+data[2]+" from "+table+" order by "+data[2]+" asc";
				   ADOQuery1->Active=true;
				   addtocb(data[2], ComboBox2);
				   break;
		   case 3:
				   ADOQuery1->SQL->Text="select distinct "+data[3]+" from "+table+" order by "+data[3]+" asc";
				   ADOQuery1->Active=true;
				   addtocb(data[3], ComboBox3);
				   break;
		   case 4:
				   ADOQuery1->SQL->Text="select distinct "+data[4]+" from "+table+" order by "+data[4]+" asc";
				   ADOQuery1->Active=true;
				   addtocb(data[4], ComboBox4);
				   break;
		 }
		 break;
  case 2: table="tovar";
		 data[1]="tovar";
		 data[2]="sklad";
		 data[3]="kategory";
		 data[4]="prim";
		 data[5]="ed_izm";
		 switch(y)
		 {
		   case 1:
				   ADOQuery1->SQL->Text="select distinct "+data[1]+" from "+table+" order by "+data[1]+" asc";
				   ADOQuery1->Active=true;
				   addtocb(data[1], Form2->ComboBox1);
				   break;
		   case 2:
				   ADOQuery1->SQL->Text="select distinct "+data[2]+" from "+table+" order by "+data[2]+" asc";
				   ADOQuery1->Active=true;
				   addtocb(data[2], Form2->ComboBox3);
				   break;
		   case 3:
				   ADOQuery1->SQL->Text="select distinct "+data[3]+" from "+table+" order by "+data[3]+" asc";
				   ADOQuery1->Active=true;
				   addtocb(data[3], Form2->ComboBox5);
				   break;
		   case 4:
				   ADOQuery1->SQL->Text="select distinct "+data[4]+" from "+table+" order by "+data[4]+" asc";
				   ADOQuery1->Active=true;
				   addtocb(data[4], Form2->ComboBox4);
				   break;
		   case 5:
				   ADOQuery1->SQL->Text="select distinct "+data[5]+" from "+table+" order by "+data[5]+" asc";
				   ADOQuery1->Active=true;
				   addtocb(data[5], Form2->ComboBox2);
				   break;
		 }
		 break;
  case 3: table="tovar";
		 data[1]="tovar";
		 data[2]="sklad";
		 data[3]="kategory";
		 data[4]="prim";
		 data[5]="ed_izm";
		 switch(y)
		 {
		   case 1:
				   ADOQuery1->SQL->Text="select distinct "+data[1]+" from "+table+" order by "+data[1]+" asc";
				   ADOQuery1->Active=true;
				   addtocb(data[1], Form3->ComboBox1);
				   break;
		   case 2:
				   ADOQuery1->SQL->Text="select distinct "+data[2]+" from "+table+" order by "+data[2]+" asc";
				   ADOQuery1->Active=true;
				   addtocb(data[2], Form3->ComboBox3);
				   break;
		   case 3:
				   ADOQuery1->SQL->Text="select distinct "+data[3]+" from "+table+" order by "+data[3]+" asc";
				   ADOQuery1->Active=true;
				   addtocb(data[3], Form3->ComboBox5);
				   break;
		   case 4:
				   ADOQuery1->SQL->Text="select distinct "+data[4]+" from "+table+" order by "+data[4]+" asc";
				   ADOQuery1->Active=true;
				   addtocb(data[4], Form3->ComboBox4);
				   break;
		   case 5:
				   ADOQuery1->SQL->Text="select distinct "+data[5]+" from "+table+" order by "+data[5]+" asc";
				   ADOQuery1->Active=true;
				   addtocb(data[5], Form3->ComboBox2);
				   break;
		 }
		 break;
 }
 }

// �������� ������� � �������� ��� ��������� ��
void TForm1::zap(int x, int y)
{
ADOConnection1->Connected=false;
ADOQuery1->Active=false;
String spath=ExtractFilePath(Application->ExeName);
ADOConnection1->ConnectionString="Provider=Microsoft.Jet.OLEDB.4.0;Data Source="+spath+"baza.mdb;Persist Security Info=False";
ADOConnection1->Connected=true;
// �������� ������� ���������� ������������
String table="";
// ������ ������� �������  ���������� ������������
String data[20];
// 1 ������
// 2 ���������� ������
// 3 ��������� ������
// 4 �������� ������
// ����������� �������������� ��������
switch (x)
 {
 case 1: table="tovar";
		 data[1]="tovar";
		 data[2]="ed_izm";
		 data[3]="cena";
		 data[4]="sklad";
		 data[5]="prim";
		 data[6]="kontakts";
		 data[7]="kategory";
		 data[0]="id_tov";
		 switch(y)
		 {
		   case 1:
				   clearmas();
				   ADOQuery1->SQL->Text="select * from "+table+" where "+data[1]+" like '%"+ComboBox1->Text+"%' and "+data[4]+" like '%"+ComboBox2->Text+"%' and "+data[7]+" like '%"+ComboBox3->Text+"%' and "+data[5]+" like '%"+ComboBox4->Text+"%' order by "+data[1]+" asc";
				   ADOQuery1->Active=true;
				   a[1]="� �/�";
				   a[2]="�����";
				   a[3]="������� ���������";
				   a[4]="����";
				   a[5]="���������";
				   a[6]="����������";
				   a[7]="���������� ������";
				   a[8]="���������";
				   b[1]=data[1];
				   b[2]=data[2];
				   b[3]=data[3];
				   b[4]=data[4];
				   b[5]=data[5];
				   b[6]=data[6];
				   b[7]=data[7];
				   b[8]=data[0];
				   c[1]=60;
				   c[2]=400;
				   c[3]=150;
				   c[4]=50;
				   c[5]=150;
				   c[6]=250;
				   c[7]=150;
				   c[8]=150;
				   adtotab(8, StringGrid1);
				   break;
		   case 2:
					ADOQuery1->SQL->Text="insert into "+table+"("+data[1]+", "+data[2]+", "+data[3]+", "+data[4]+", "+data[5]+", "+data[6]+", "+data[7]+") values(:d1, :d2, :d3, :d4, :d5, :d6, :d7)";
					ADOQuery1->Parameters->ParamByName("d1")->Value=Form2->ComboBox1->Text;
					ADOQuery1->Parameters->ParamByName("d2")->Value=Form2->ComboBox2->Text;
					ADOQuery1->Parameters->ParamByName("d3")->Value=Form2->Edit1->Text;
					ADOQuery1->Parameters->ParamByName("d4")->Value=Form2->ComboBox3->Text;
					ADOQuery1->Parameters->ParamByName("d5")->Value=Form2->ComboBox4->Text;
					ADOQuery1->Parameters->ParamByName("d6")->Value=Form2->Edit2->Text;
					ADOQuery1->Parameters->ParamByName("d7")->Value=Form2->ComboBox5->Text;
					ADOQuery1->ExecSQL();
					zap(1,1);
					break;
		   case 3:
					ADOQuery1->SQL->Text="update "+table+" set "+data[1]+"=:d1, "+data[2]+"=:d2, "+data[3]+"=:d3, "+data[4]+"=:d4, "+data[5]+"=:d5, "+data[6]+"=:d6, "+data[7]+"=:d7 where "+data[0]+"=:d0";
					ADOQuery1->Parameters->ParamByName("d1")->Value=Form3->ComboBox1->Text;
					ADOQuery1->Parameters->ParamByName("d2")->Value=Form3->ComboBox2->Text;
					ADOQuery1->Parameters->ParamByName("d3")->Value=Form3->Edit1->Text;
					ADOQuery1->Parameters->ParamByName("d4")->Value=Form3->ComboBox3->Text;
					ADOQuery1->Parameters->ParamByName("d5")->Value=Form3->ComboBox4->Text;
					ADOQuery1->Parameters->ParamByName("d6")->Value=Form3->Edit2->Text;
					ADOQuery1->Parameters->ParamByName("d7")->Value=Form3->ComboBox5->Text;
					ADOQuery1->Parameters->ParamByName("d0")->Value=StringGrid1->Cells[8][StringGrid1->Row];
					ADOQuery1->ExecSQL();
					zap(1,1);
					break;
		   case 4:
					ADOQuery1->SQL->Text="delete from "+table+" where "+data[0]+"=:d0";
					ADOQuery1->Parameters->ParamByName("d0")->Value=StringGrid1->Cells[8][StringGrid1->Row];
					ADOQuery1->ExecSQL();
					zap(1,1);
					break;
		   case 5:
					ADOQuery1->SQL->Text="insert into "+table+"("+data[1]+", "+data[2]+", "+data[3]+", "+data[4]+", "+data[5]+", "+data[6]+", "+data[7]+") values(:d1, :d2, :d3, :d4, :d5, :d6, :d7)";
					ADOQuery1->Parameters->ParamByName("d1")->Value=d1;
					ADOQuery1->Parameters->ParamByName("d2")->Value=d2;
					ADOQuery1->Parameters->ParamByName("d3")->Value=d3;
					ADOQuery1->Parameters->ParamByName("d4")->Value=d4;
					ADOQuery1->Parameters->ParamByName("d5")->Value=d5;
					ADOQuery1->Parameters->ParamByName("d6")->Value=d6;
					ADOQuery1->Parameters->ParamByName("d7")->Value=d7;
					ADOQuery1->ExecSQL();
					break;
		   case 6:
					ADOQuery1->SQL->Text="delete from "+table+" where "+data[0]+"<>:d0";
					ADOQuery1->Parameters->ParamByName("d0")->Value="0";
					ADOQuery1->ExecSQL();
					zap(1,1);
					break;
		 }
		 break;
 }
ADOConnection1->Connected=false;
ADOQuery1->Active=false;
}

// ����� ������ � ��������� �������
void TForm1::adtotab(int X,  TStringGrid *StringGrid1)
{
StringGrid1->ColCount=X;
for (int i = 0; i < X; i++) {
StringGrid1->ColWidths[i]=c[i+1];
}
for (int i = 0; i < 19; i++) {
StringGrid1->Cells[i][0]=a[i+1];
}
int i=1;
StringGrid1->RowCount=ADOQuery1->RecordCount+1;
  if (StringGrid1->RowCount>1)
  {
  StringGrid1->FixedCols=1;
  StringGrid1->FixedRows=1;
  }
  ADOQuery1->First();
  while (!ADOQuery1->Eof)
  {
	StringGrid1->Cells[0][i]=i;
	for (int j= 1; j<15; j++)
	{
	if (b[j]!="0") StringGrid1->Cells[j][i]=Trim(ADOQuery1->FieldByName(b[j])->Value);
	}
	i++;
	ADOQuery1->Next();
  }
}


// ����� ������ � ��������������� ���� �����
void TForm1::addtocb(String s, TComboBox *cb)
{
cb->Text="";
cb->Clear();
ADOQuery1->First();
  while (!ADOQuery1->Eof)
  {
	cb->Items->Add(ADOQuery1->FieldByName(s)->Value);
	ADOQuery1->Next();
  }
  }

__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
vtorzap(1, 1);
vtorzap(1, 2);
vtorzap(1, 3);
vtorzap(1, 4);
zap(1,1);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N2Click(TObject *Sender)
{
Form1->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N6Click(TObject *Sender)
{
zap(1,4);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N4Click(TObject *Sender)
{
Form2->Left=Form1->Left+Form1->Width/4;
Form2->Top=Form1->Top+Form1->Height/4;
Form1->vtorzap(2, 1);
Form1->vtorzap(2, 2);
Form1->vtorzap(2, 3);
Form1->vtorzap(2, 4);
Form1->vtorzap(2, 5);
Form2->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N5Click(TObject *Sender)
{
Form1->vtorzap(3, 1);
Form1->vtorzap(3, 2);
Form1->vtorzap(3, 3);
Form1->vtorzap(3, 4);
Form1->vtorzap(3, 5);
Form3->ComboBox1->Text=StringGrid1->Cells[1][StringGrid1->Row];
Form3->ComboBox2->Text=StringGrid1->Cells[2][StringGrid1->Row];
Form3->Edit1->Text=StringGrid1->Cells[3][StringGrid1->Row];
Form3->ComboBox3->Text=StringGrid1->Cells[4][StringGrid1->Row];
Form3->ComboBox4->Text=StringGrid1->Cells[5][StringGrid1->Row];
Form3->Edit2->Text=StringGrid1->Cells[6][StringGrid1->Row];
Form3->ComboBox5->Text=StringGrid1->Cells[7][StringGrid1->Row];
Form3->Left=Form1->Left+Form1->Width/4;
Form3->Top=Form1->Top+Form1->Height/4;
Form3->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ComboBox1Change(TObject *Sender)
{
zap(1,1);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ComboBox2Change(TObject *Sender)
{
zap(1,1);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ComboBox3Change(TObject *Sender)
{
zap(1,1);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ComboBox4Change(TObject *Sender)
{
zap(1,1);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::EXCEL1Click(TObject *Sender)
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
vVarCell.OlePropertySet("ColumnWidth",10);

vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",1,2);
vVarCell.OlePropertyGet("Font").OlePropertySet("Size",15);
vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
str="Arial";
vVarCell.OlePropertyGet("Font").OlePropertySet("Name",str);
vVarCell.OlePropertyGet("Interior").OlePropertySet("ColorIndex",3);
str="�����";
vVarCell.OlePropertySet("Value",str);
vVarCell.OlePropertySet("RowHeight", 20);
vVarCell.OlePropertySet("ColumnWidth",30);

vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",1,3);
vVarCell.OlePropertyGet("Font").OlePropertySet("Size",15);
vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
str="Arial";
vVarCell.OlePropertyGet("Font").OlePropertySet("Name",str);
vVarCell.OlePropertyGet("Interior").OlePropertySet("ColorIndex",3);
str="������� ���������";
vVarCell.OlePropertySet("Value",str);
vVarCell.OlePropertySet("RowHeight", 20);
vVarCell.OlePropertySet("ColumnWidth",30);

vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",1,4);
vVarCell.OlePropertyGet("Font").OlePropertySet("Size",15);
vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
str="Arial";
vVarCell.OlePropertyGet("Font").OlePropertySet("Name",str);
vVarCell.OlePropertyGet("Interior").OlePropertySet("ColorIndex",3);
str="����";
vVarCell.OlePropertySet("Value",str);
vVarCell.OlePropertySet("RowHeight", 20);
vVarCell.OlePropertySet("ColumnWidth",10);

vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",1,5);
vVarCell.OlePropertyGet("Font").OlePropertySet("Size",15);
vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
str="Arial";
vVarCell.OlePropertyGet("Font").OlePropertySet("Name",str);
vVarCell.OlePropertyGet("Interior").OlePropertySet("ColorIndex",3);
str="���������";
vVarCell.OlePropertySet("Value",str);
vVarCell.OlePropertySet("RowHeight", 20);
vVarCell.OlePropertySet("ColumnWidth",20);

vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",1,6);
vVarCell.OlePropertyGet("Font").OlePropertySet("Size",15);
vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
str="Arial";
vVarCell.OlePropertyGet("Font").OlePropertySet("Name",str);
vVarCell.OlePropertyGet("Interior").OlePropertySet("ColorIndex",3);
str="����������";
vVarCell.OlePropertySet("Value",str);
vVarCell.OlePropertySet("RowHeight", 20);
vVarCell.OlePropertySet("ColumnWidth",30);

vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",1,7);
vVarCell.OlePropertyGet("Font").OlePropertySet("Size",15);
vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
str="Arial";
vVarCell.OlePropertyGet("Font").OlePropertySet("Name",str);
vVarCell.OlePropertyGet("Interior").OlePropertySet("ColorIndex",3);
str="���������� ������";
vVarCell.OlePropertySet("Value",str);
vVarCell.OlePropertySet("RowHeight", 20);
vVarCell.OlePropertySet("ColumnWidth",30);

vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",1,8);
vVarCell.OlePropertyGet("Font").OlePropertySet("Size",15);
vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
str="Arial";
vVarCell.OlePropertyGet("Font").OlePropertySet("Name",str);
vVarCell.OlePropertyGet("Interior").OlePropertySet("ColorIndex",3);
str="���������";
vVarCell.OlePropertySet("Value",str);
vVarCell.OlePropertySet("RowHeight", 20);
vVarCell.OlePropertySet("ColumnWidth",20);

int j=1;
for (int i = 2; i < StringGrid1->RowCount+1; i++) {
vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",i,1);
vVarCell.OlePropertyGet("Font").OlePropertySet("Size",12);
vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",false);
str="Arial";
vVarCell.OlePropertyGet("Font").OlePropertySet("Name",str);
str=j;
vVarCell.OlePropertySet("Value",str);
vVarCell.OlePropertySet("RowHeight", 15);
j++;

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
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EXCEL2Click(TObject *Sender)
{
OpenDialog1->Execute();
Variant mExcel;
str=OpenDialog1->FileName;
const xlCellTypeLastCell = 0x0000000B;

vVarApp=CreateOleObject("Excel.Application");
vVarApp.OlePropertyGet("WorkBooks").OleProcedure("Open", str);
vVarApp.OlePropertySet("Visible",false);
vVarSheets=vVarApp.OlePropertyGet("ActiveSheet");
vVarApp.OlePropertyGet("Cells").OlePropertyGet("SpecialCells", xlCellTypeLastCell).OleProcedure("Activate");
int x = vVarApp.OlePropertyGet("ActiveCell").OlePropertyGet("Row");
int y = vVarApp.OlePropertyGet("ActiveCell").OlePropertyGet("Column");
Panel2->Visible=true;
for(int rows = 0; rows < x-1; rows++)
{
d1 = vVarSheets.OlePropertyGet("Cells").OlePropertyGet("Item", rows + 2 ,  2);
d2 = vVarSheets.OlePropertyGet("Cells").OlePropertyGet("Item", rows + 2 ,  2+1);
d3 = vVarSheets.OlePropertyGet("Cells").OlePropertyGet("Item", rows + 2 ,  2+2);
d4 = vVarSheets.OlePropertyGet("Cells").OlePropertyGet("Item", rows + 2 ,  2+3);
d5 = vVarSheets.OlePropertyGet("Cells").OlePropertyGet("Item", rows + 2 ,  2+4);
d6 = vVarSheets.OlePropertyGet("Cells").OlePropertyGet("Item", rows + 2 ,  2+5);
d7 = vVarSheets.OlePropertyGet("Cells").OlePropertyGet("Item", rows + 2 ,  2+6);
zap(1,5);
Panel2->Caption=rows;
}
vVarApp.OleProcedure("Quit");
Panel2->Visible=false;
vtorzap(1, 1);
vtorzap(1, 2);
vtorzap(1, 3);
vtorzap(1, 4);
zap(1,1);
}
//---------------------------------------------------------------------------



void __fastcall TForm1::N8Click(TObject *Sender)
{
zap(1,6);
}
//---------------------------------------------------------------------------

