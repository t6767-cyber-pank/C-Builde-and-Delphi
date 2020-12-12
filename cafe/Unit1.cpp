//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <Printers.hpp>
#include "Unit1.h"
#include      <ComObj.hpp>
#include      <utilcls.h>
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
void TForm1::clearmas()
{
for (int i = 0; i < 15; i++) {
a[i]="0";
b[i]="0";
}
}

void TForm1::zap(int x, int y)
{
String s1;
String s2;
ADOConnection1->Connected=false;
String xsc=ExtractFilePath(Application->ExeName);
ADOConnection1->ConnectionString="Provider=Microsoft.Jet.OLEDB.4.0;Data Source="+xsc+"baza.mdb;Persist Security Info=False";
//ADOConnection1->ConnectionString="Provider=SQLOLEDB.1;Password=timur666777;Persist Security Info=True;User ID=t67;Initial Catalog=kafe;Data Source=localhost";
ADOConnection1->Connected=true;
Label18->Caption="";
switch (x)
 {
 case 1: switch(y)
		 {
		   case 1:
				   clearmas();
				   Panel1->Visible=false;
				   Panel2->Visible=false;
				   Panel3->Visible=false;
				   Panel6->Visible=false;
				   Panel8->Visible=false;
				   Panel9->Visible=false;
				   Panel10->Visible=false;
				   Panel11->Visible=false;
				   Panel12->Visible=false;
				   Panel18->Visible=false;
				   Panel19->Visible=false;
				   Panel20->Visible=false;
				   Panel21->Visible=false;
				   Panel6->Visible=true;
				   Panel3->Visible=true;
				   Panel2->Visible=true;
				   Panel1->Visible=true;
				   Button26->Visible=false;
				   Button28->Visible=false;
				   Button13->Visible=false;
				   Button17->Visible=false;
				   Button4->Visible=false;
				   Button3->Visible=false;
				   Button2->Visible=false;
				   Button2->Visible=true;
				   Button3->Visible=true;
				   Button4->Visible=true;
				   Label1->Caption="��� ������������";
				   Label2->Caption="������";
				   Label3->Caption="������ ������������";
				   ComboBox1->Items->Clear();
				   ComboBox1->Items->Add("���������");
				   ComboBox1->Items->Add("�������������");
				   ADOQuery1->SQL->Text="select * from polzov order by fio asc";
				   ADOQuery1->Active=true;
				   a[1]="����� �/�";
				   a[2]="�.�.�";
				   a[3]="������";
				   b[1]="fio";
				   b[2]="status";
				   b[3]="id_chel";
				   adtotab(3, StringGrid1);
				   break;
		   case 2:
					if (Edit1->Text!="" && Edit2->Text!="") {
					ADOQuery1->SQL->Text="insert into polzov(fio, pass, status) values(:fio, :pass, :status)";
					ADOQuery1->Parameters->ParamByName("fio")->Value=Edit1->Text;
					ADOQuery1->Parameters->ParamByName("pass")->Value=Edit2->Text;
					ADOQuery1->Parameters->ParamByName("status")->Value=ComboBox1->Text;
					ADOQuery1->ExecSQL();
					zap(1,1);
					} else ShowMessage("��� ���� ������ ���� ���������");
					break;
		   case 3:
					if (Edit1->Text!="" && Edit2->Text!="") {
					ADOQuery1->SQL->Text="update polzov set fio=:fio, pass=:pass, status=:status where id_chel=:id_chel";
					ADOQuery1->Parameters->ParamByName("fio")->Value=Edit1->Text;
					ADOQuery1->Parameters->ParamByName("pass")->Value=Edit2->Text;
					ADOQuery1->Parameters->ParamByName("status")->Value=ComboBox1->Text;
					ADOQuery1->Parameters->ParamByName("id_chel")->Value=StringGrid1->Cells[3][StringGrid1->Row];
					ADOQuery1->ExecSQL();
					zap(1,1);
					} else ShowMessage("��� ���� ������ ���� ���������");
					break;
		   case 4:  ADOQuery1->SQL->Text="select * from polzov order by fio asc";
					ADOQuery1->Active=true;
					adtocb(ComboBox3, "fio");
					break;
		   case 5:  ADOQuery1->SQL->Text="select * from polzov where fio=:fio and pass=:pass";
					ADOQuery1->Parameters->ParamByName("fio")->Value=l;
					ADOQuery1->Parameters->ParamByName("pass")->Value=p;
					ADOQuery1->Active=true;
					if (ADOQuery1->RecordCount>=0) {
					if (Trim(ADOQuery1->FieldByName("status")->Value)=="�������������") {
					Panel4->Visible=true;
					} else { Panel4->Visible=false; }
					tab=3;
					zap(3,1);
					zap(8,1);
					StringGrid1->Visible=true;
					Panel15->Visible=false;
					Panel17->Visible=true;
					Edit1->Text=StringGrid1->Cells[1][StringGrid1->Row];
					Edit2->Text=StringGrid1->Cells[2][StringGrid1->Row];
					ComboBox1->Text=StringGrid1->Cells[3][StringGrid1->Row];
					}
					break;
		   case 6:
					ADOQuery1->SQL->Text="delete from polzov where id_chel=:id_chel";
					ADOQuery1->Parameters->ParamByName("id_chel")->Value=StringGrid1->Cells[3][StringGrid1->Row];
					ADOQuery1->ExecSQL();
					zap(1,1);
					break;
		 }
		 break;
 case 2: switch(y)
		 {
		   case 1:
				   clearmas();
				   Panel1->Visible=false;
				   Panel2->Visible=false;
				   Panel3->Visible=false;
				   Panel6->Visible=false;
				   Panel8->Visible=false;
				   Panel9->Visible=false;
				   Panel10->Visible=false;
				   Panel11->Visible=false;
				   Panel12->Visible=false;
				   Panel18->Visible=false;
				   Panel19->Visible=false;
				   Panel20->Visible=false;
				   Panel21->Visible=false;
				   Panel1->Visible=true;
				   Panel6->Visible=true;
				   Button26->Visible=false;
				   Button28->Visible=false;
				   Button17->Visible=false;
				   Button13->Visible=false;
				   Button4->Visible=false;
				   Button3->Visible=false;
				   Button2->Visible=false;
				   Button2->Visible=true;
				   Button3->Visible=true;
				   Button4->Visible=true;
				   Label1->Caption="��������� ��������";
				   ADOQuery1->SQL->Text="select * from categoryeda order by name_cat asc";
				   ADOQuery1->Active=true;
				   a[1]="����� �/�";
				   a[2]="���������";
				   b[1]="name_cat";
				   b[2]="id_category";
				   adtotab(2, StringGrid1);
				   break;
		   case 2:
					if (Edit1->Text!="") {
					ADOQuery1->SQL->Text="insert into categoryeda(name_cat) values(:name_cat)";
					ADOQuery1->Parameters->ParamByName("name_cat")->Value=Edit1->Text;
					ADOQuery1->ExecSQL();
					zap(2,1);
					}
					break;
		   case 3:
					if (Edit1->Text!="") {
					ADOQuery1->SQL->Text="update categoryeda set name_cat=:name_cat where id_category=:id_category";
					ADOQuery1->Parameters->ParamByName("name_cat")->Value=Edit1->Text;
					ADOQuery1->Parameters->ParamByName("id_category")->Value=StringGrid1->Cells[2][StringGrid1->Row];
					ADOQuery1->ExecSQL();
					zap(2,1);
					}
					break;
		   case 4:  ADOQuery1->SQL->Text="select * from categoryeda order by name_cat asc";
					ADOQuery1->Active=true;
					adtocb(ComboBox1, "name_cat");
					break;
		   case 5:  ADOQuery1->SQL->Text="select * from categoryeda where name_cat=:name_cat";
					ADOQuery1->Parameters->ParamByName("name_cat")->Value=xval1;
					ADOQuery1->Active=true;
					if (ADOQuery1->RecordCount>0) {
					xval1=ADOQuery1->FieldByName("id_category")->Value;
					}
					else xval1=0;
					break;
		   case 6:
					ADOQuery1->SQL->Text="delete from categoryeda where id_category=:id_category";
					ADOQuery1->Parameters->ParamByName("id_category")->Value=StringGrid1->Cells[2][StringGrid1->Row];
					ADOQuery1->ExecSQL();
					zap(2,1);
					break;
		 }
		 break;
 case 3: switch(y)
		 {
		   case 1:
				   zap(6,4);
				   zap(6,5);
				   StringGrid2->RowCount=1;
				   StringGrid2->ColCount=2;
				   StringGrid2->ColWidths[0]=200;
				   StringGrid2->ColWidths[1]=100;
				   StringGrid2->Cells[0][0]="�����";
				   StringGrid2->Cells[1][0]="���������";
				   StringGrid2->Cells[2][0]="0";
				   for (int i = 1; i < 100; i++) {
				   StringGrid2->Cells[0][i]="";
				   StringGrid2->Cells[1][i]="";
				   StringGrid2->Cells[2][i]="";
				   }
				   clearmas();
				   Panel1->Visible=false;
				   Panel2->Visible=false;
				   Panel3->Visible=false;
				   Panel8->Visible=false;
				   Panel9->Visible=false;
				   Panel10->Visible=false;
				   Panel11->Visible=false;
				   Panel12->Visible=false;
				   Panel18->Visible=false;
				   Panel19->Visible=false;
				   Panel20->Visible=false;
				   Panel21->Visible=false;
				   Button26->Visible=false;
				   Button28->Visible=false;
				   Button17->Visible=false;
				   Button13->Visible=false;
				   Button4->Visible=false;
				   Button3->Visible=false;
				   Button2->Visible=false;
				   Button2->Visible=true;
				   Button3->Visible=true;
				   Button4->Visible=true;
				   Button17->Visible=true;
				   Panel6->Visible=true;
				   Panel3->Visible=true;
				   Panel2->Visible=true;
				   Panel1->Visible=true;
				   Label1->Caption="������������ �����";
				   Label2->Caption="����";
				   Label3->Caption="���������";
				   zap(2,4);
				   ADOQuery1->SQL->Text="select * from blud b, categoryeda c where b.id_category=c.id_category order by name_cat asc, nameblud asc";
				   ADOQuery1->Active=true;
				   a[1]="����� �/�";
				   a[2]="�����";
				   a[3]="����";
				   a[4]="���������";
				   b[1]="nameblud";
				   b[2]="cena";
				   b[3]="name_cat";
				   b[4]="id_blud";
				   adtotab(4, StringGrid1);
				   break;
		   case 2:
					ADOQuery1->SQL->Text="select MAX(id_blud) as ttt from blud";
					ADOQuery1->Active=true;
					if (ADOQuery1->FieldByName("ttt")->IsNull!=true)
						ind=ADOQuery1->FieldByName("ttt")->Value;
					else
						ind=0;
					ind++;
					xval1=ComboBox1->Text;
					zap(2, 5);
					if (Edit1->Text!="" && Edit2->Text!="" && xval1!=0) {
					ADOQuery1->SQL->Text="insert into blud(nameblud, cena, id_category, id_blud) values(:nameblud, :cena, :id_category, :id_blud)";
					ADOQuery1->Parameters->ParamByName("nameblud")->Value=Edit1->Text;
					ADOQuery1->Parameters->ParamByName("cena")->Value=Edit2->Text;
					ADOQuery1->Parameters->ParamByName("id_category")->Value=xval1;
					ADOQuery1->Parameters->ParamByName("id_blud")->Value=ind;
					ADOQuery1->ExecSQL();
					zap(8,2);
					zap(3,1);
					for (int i = 1; i < 100; i++) {
					StringGrid2->Cells[0][i]="0";
					StringGrid2->Cells[1][i]="0";
					StringGrid2->Cells[2][i]="0";
					}
					} else ShowMessage("��� ���� ������ ���� ��������� ���������");
					break;
		   case 3:
					xval1=ComboBox1->Text;
					zap(2, 5);
					if (Edit1->Text!="" && Edit2->Text!="" && xval1!=0) {
					ADOQuery1->SQL->Text="update blud set nameblud=:nameblud, cena=:cena  where id_blud=:id_blud";
					ADOQuery1->Parameters->ParamByName("nameblud")->Value=Edit1->Text;
					ADOQuery1->Parameters->ParamByName("cena")->Value=Edit2->Text;
					ADOQuery1->Parameters->ParamByName("id_blud")->Value=StringGrid1->Cells[4][StringGrid1->Row];
					ADOQuery1->ExecSQL();
					zap(8,3);
					zap(3,1);
					} else ShowMessage("��� ���� ������ ���� ��������� ���������");
					break;
		   case 6:
					ADOQuery1->SQL->Text="delete from blud where id_blud=:id_blud";
					ADOQuery1->Parameters->ParamByName("id_blud")->Value=StringGrid1->Cells[4][StringGrid1->Row];
					ADOQuery1->ExecSQL();
					ADOQuery1->SQL->Text="delete from recept where id_blud=:id_blud";
					ADOQuery1->Parameters->ParamByName("id_blud")->Value=StringGrid1->Cells[4][StringGrid1->Row];
					ADOQuery1->ExecSQL();
					zap(3,1);
					break;
		 }
		 break;
 case 4: switch(y)
		 {
		   case 1:
				   clearmas();
				   Panel1->Visible=false;
				   Panel2->Visible=false;
				   Panel3->Visible=false;
				   Panel6->Visible=false;
				   Panel8->Visible=false;
				   Panel9->Visible=false;
				   Panel10->Visible=false;
				   Panel11->Visible=false;
				   Panel12->Visible=false;
				   Panel18->Visible=false;
				   Panel19->Visible=false;
				   Panel20->Visible=false;
				   Panel21->Visible=false;
				   Panel1->Visible=true;
				   Panel6->Visible=true;
				   Button26->Visible=false;
				   Button28->Visible=false;
				   Button17->Visible=false;
				   Button13->Visible=false;
				   Button4->Visible=false;
				   Button3->Visible=false;
				   Button2->Visible=false;
				   Button2->Visible=true;
				   Button3->Visible=true;
				   Button4->Visible=true;
				   Label1->Caption="��������� ������";
				   ADOQuery1->SQL->Text="select * from categorysklad order by n_cat asc";
				   ADOQuery1->Active=true;
				   a[1]="����� �/�";
				   a[2]="���������";
				   b[1]="n_cat";
				   b[2]="id_category";
				   adtotab(2, StringGrid1);
				   break;
		   case 2:
					if (Edit1->Text!="") {
					ADOQuery1->SQL->Text="insert into categorysklad(n_cat) values(:name_cat)";
					ADOQuery1->Parameters->ParamByName("name_cat")->Value=Edit1->Text;
					ADOQuery1->ExecSQL();
					zap(4,1);
					}
					break;
		   case 3:
					if (Edit1->Text!="") {
					ADOQuery1->SQL->Text="update categorysklad set n_cat=:name_cat where id_category=:id_category";
					ADOQuery1->Parameters->ParamByName("name_cat")->Value=Edit1->Text;
					ADOQuery1->Parameters->ParamByName("id_category")->Value=StringGrid1->Cells[2][StringGrid1->Row];
					ADOQuery1->ExecSQL();
					zap(4,1);
					}
					break;
		   case 4:  ADOQuery1->SQL->Text="select * from categorysklad order by n_cat asc";
					ADOQuery1->Active=true;
					adtocb(ComboBox2, "n_cat");
					break;
		   case 5:  ADOQuery1->SQL->Text="select * from categorysklad where n_cat=:name_cat";
					ADOQuery1->Parameters->ParamByName("name_cat")->Value=xval1;
					ADOQuery1->Active=true;
					if (ADOQuery1->RecordCount>0) {
					xval1=ADOQuery1->FieldByName("id_category")->Value;
					} else xval1=0;
					break;
		   case 6:
					ADOQuery1->SQL->Text="delete from categorysklad where id_category=:id_category";
					ADOQuery1->Parameters->ParamByName("id_category")->Value=StringGrid1->Cells[2][StringGrid1->Row];
					ADOQuery1->ExecSQL();
					zap(4,1);
					break;
		   case 9:  ADOQuery1->SQL->Text="select * from categorysklad order by n_cat asc";
					ADOQuery1->Active=true;
					adtocb(ComboBox7, "n_cat");
		 }
		 break;
 case 5: switch(y)
		 {
		   case 1:
				   clearmas();
				   Panel1->Visible=false;
				   Panel2->Visible=false;
				   Panel3->Visible=false;
				   Panel6->Visible=false;
				   Panel8->Visible=false;
				   Panel9->Visible=false;
				   Panel10->Visible=false;
				   Panel11->Visible=false;
				   Panel12->Visible=false;
				   Panel18->Visible=false;
				   Panel19->Visible=false;
				   Panel20->Visible=false;
				   Panel21->Visible=false;
				   Panel6->Visible=true;
				   Panel2->Visible=true;
				   Panel1->Visible=true;
				   Button26->Visible=false;
				   Button28->Visible=false;
				   Button17->Visible=false;
				   Button13->Visible=false;
				   Button4->Visible=false;
				   Button3->Visible=false;
				   Button2->Visible=false;
				   Button2->Visible=true;
				   Button3->Visible=true;
				   Button4->Visible=true;
				   Label1->Caption="������� ���������";
				   Label2->Caption="�����������";
				   ADOQuery1->SQL->Text="select * from ed order by ed_izm asc";
				   ADOQuery1->Active=true;
				   a[1]="����� �/�";
				   a[2]="������� ���������";
				   a[3]="�����������";
				   b[1]="ed_izm";
				   b[2]="sootnoshenie";
				   b[3]="id_ed";
				   adtotab(3, StringGrid1);
				   break;
		   case 2:
					if (Edit1->Text!="" && Edit2->Text!="") {
					ADOQuery1->SQL->Text="insert into ed(ed_izm, sootnoshenie) values(:ed_izm, :sootnoshenie)";
					ADOQuery1->Parameters->ParamByName("ed_izm")->Value=Edit1->Text;
					ADOQuery1->Parameters->ParamByName("sootnoshenie")->Value=Edit2->Text;
					ADOQuery1->ExecSQL();
					zap(5,1);
					}
					break;
		   case 3:
					if (Edit1->Text!="" && Edit2->Text!="") {
					ADOQuery1->SQL->Text="update ed set ed_izm=:ed_izm, sootnoshenie=:sootnoshenie where id_ed=:id_ed";
					ADOQuery1->Parameters->ParamByName("ed_izm")->Value=Edit1->Text;
					ADOQuery1->Parameters->ParamByName("sootnoshenie")->Value=Edit2->Text;
					ADOQuery1->Parameters->ParamByName("id_ed")->Value=StringGrid1->Cells[3][StringGrid1->Row];
					ADOQuery1->ExecSQL();
					zap(5,1);
					}
					break;
		   case 4:  ADOQuery1->SQL->Text="select * from ed order by ed_izm asc";
					ADOQuery1->Active=true;
					adtocb(ComboBox1, "ed_izm");
					break;
		   case 5:  ADOQuery1->SQL->Text="select * from ed where ed_izm=:ed_izm";
					ADOQuery1->Parameters->ParamByName("ed_izm")->Value=xval1;
					ADOQuery1->Active=true;
					if (ADOQuery1->RecordCount>0) {
					xval1=ADOQuery1->FieldByName("id_ed")->Value;
					} else xval1=0;
					break;
		   case 6:
					ADOQuery1->SQL->Text="delete from ed where id_ed=:id_ed";
					ADOQuery1->Parameters->ParamByName("id_ed")->Value=StringGrid1->Cells[3][StringGrid1->Row];
					ADOQuery1->ExecSQL();
					zap(5,1);
					break;
		 }
		 break;
 case 6: switch(y)
		 {
		   case 1:
				   clearmas();
				   Panel1->Visible=false;
				   Panel2->Visible=false;
				   Panel3->Visible=false;
				   Panel6->Visible=false;
				   Panel8->Visible=false;
				   Panel9->Visible=false;
				   Panel10->Visible=false;
				   Panel11->Visible=false;
				   Panel12->Visible=false;
				   Panel18->Visible=false;
				   Panel19->Visible=false;
				   Panel20->Visible=false;
				   Panel21->Visible=false;
				   Panel20->Visible=true;
				   Panel19->Visible=true;
				   Panel18->Visible=true;
				   Panel12->Visible=true;
				   Panel9->Visible=true;
				   Panel8->Visible=true;
				   Panel6->Visible=true;
				   Panel3->Visible=true;
				   Panel2->Visible=true;
				   Panel1->Visible=true;
				   Button26->Visible=false;
				   Button28->Visible=false;
				   Button17->Visible=false;
				   Button13->Visible=false;
				   Button4->Visible=false;
				   Button3->Visible=false;
				   Button2->Visible=false;
				   Button2->Visible=true;
				   //Button3->Visible=true;
				   Button4->Visible=true;
				   Label1->Caption="������������";
				   Label2->Caption="��������� �� �������";
				   Label3->Caption="������� ���������";
				   Label4->Caption="���������";
				   Label5->Caption="����������";
				   zap(5,4);
				   zap(4,4);
				   ADOQuery1->SQL->Text="select * from sklad s, ed e, categorysklad c where e.id_ed=s.edizm and s.category=c.id_category order by data desc, naim asc";
				   ADOQuery1->Active=true;
				   a[1]="����� �/�";
				   a[2]="������������";
				   a[3]="��������� �� �������";
				   a[4]="������� ���������";
				   a[5]="���������";
				   a[6]="����������";
				   a[7]="�����";
				   a[8]="����";
				   b[1]="naim";
				   b[2]="stoymzaed";
				   b[3]="ed_izm";
				   b[4]="n_cat";
				   b[5]="kolvo";
				   b[6]="cena";
				   b[7]="data";
				   b[8]="id_sklad";
				   adtotab(8, StringGrid1);
				   break;
		   case 2:
					xval1=ComboBox1->Text;
					zap(5, 5);
					s1=xval1;
					xval1=ComboBox2->Text;
					zap(4, 5);
					s2=xval1;
					if (Edit1->Text!="" && Edit2->Text!="" && Edit3->Text!="" && s1!="0" && s2!="0") {
					ADOQuery1->SQL->Text="insert into sklad(naim, stoymzaed, kolvo, edizm, category, data, cena) values(:naim, :stoymzaed, :kolvo, :edizm, :category, :data, :cena)";
					ADOQuery1->Parameters->ParamByName("naim")->Value=Edit1->Text;
					ADOQuery1->Parameters->ParamByName("stoymzaed")->Value=Edit2->Text;
					ADOQuery1->Parameters->ParamByName("edizm")->Value=s1;
					ADOQuery1->Parameters->ParamByName("category")->Value=s2;
					ADOQuery1->Parameters->ParamByName("kolvo")->Value=Edit3->Text;
					ADOQuery1->Parameters->ParamByName("data")->Value=DateTimePicker1->Date.DateString();
					xse=Edit2->Text.ToDouble();
					xkv=Edit3->Text.ToDouble();
					xres=xse*xkv;
					ADOQuery1->Parameters->ParamByName("cena")->Value=xres;
					ADOQuery1->ExecSQL();
					zap(9,2);
					zap(6,1);
					} else ShowMessage("��������� ������������ �����");
					break;
		   case 3:
					xval1=ComboBox1->Text;
					zap(5, 5);
					s1=xval1;
					xval1=ComboBox2->Text;
					zap(4, 5);
					s2=xval1;
					ADOQuery1->SQL->Text="update sklad set naim=:naim, stoymzaed=:stoymzaed, edizm=:edizm, category=:category, kolvo=:kolvo, data=:data, cena=:cena where id_sklad=:id_sklad";
					ADOQuery1->Parameters->ParamByName("naim")->Value=Edit1->Text;
					ADOQuery1->Parameters->ParamByName("stoymzaed")->Value=Edit2->Text;
					ADOQuery1->Parameters->ParamByName("edizm")->Value=s1;
					ADOQuery1->Parameters->ParamByName("category")->Value=s2;
					ADOQuery1->Parameters->ParamByName("kolvo")->Value=Edit3->Text;
					ADOQuery1->Parameters->ParamByName("data")->Value=DateTimePicker1->Date.DateString();
					ADOQuery1->Parameters->ParamByName("id_sklad")->Value=StringGrid1->Cells[8][StringGrid1->Row];
					xse=Edit2->Text.ToDouble();
					xkv=Edit3->Text.ToDouble();
					xres=xse*xkv;
					ADOQuery1->Parameters->ParamByName("cena")->Value=xres;
					ADOQuery1->ExecSQL();
					zap(6,1);
					break;
		   case 4:  ADOQuery1->SQL->Text="select * from skladost order by naim asc";
					ADOQuery1->Active=true;
					adtolb(StringGrid3, "naim", "id_sklad", "�����");
					break;
		   case 5:  ADOQuery1->SQL->Text="select * from kuhnya order by knaim asc";
					ADOQuery1->Active=true;
					adtolbplus(StringGrid3, "knaim", "id_kuhnya", "�����");
					break;
		   case 6:
					ADOQuery1->SQL->Text="delete from sklad where id_sklad=:id_sklad";
					ADOQuery1->Parameters->ParamByName("id_sklad")->Value=StringGrid1->Cells[8][StringGrid1->Row];
					ADOQuery1->ExecSQL();
					zap(6,1);
					break;
		   case 7:
					clearmas();
					zap(5,4);
					zap(4,4);
					ADOQuery1->SQL->Text="select * from sklad s, ed e, categorysklad c where n_cat like :n_cat and e.id_ed=s.edizm and s.naim like :naim and s.category=c.id_category and s.data between :x and :y order by naim asc";
					ADOQuery1->Parameters->ParamByName("x")->Value=DateTimePicker3->Date.DateString();
					ADOQuery1->Parameters->ParamByName("y")->Value=DateTimePicker4->Date.DateString();
					ADOQuery1->Parameters->ParamByName("naim")->Value="%"+Edit8->Text+"%";
					if (ComboBox7->Text=="�������� �����") {ComboBox7->Text="%%";}
					ADOQuery1->Parameters->ParamByName("n_cat")->Value="%"+ComboBox7->Text+"%";
					ADOQuery1->Active=true;
					a[1]="����� �/�";
					a[2]="������������";
					a[3]="��������� �� �������";
					a[4]="������� ���������";
					a[5]="���������";
					a[6]="����������";
					a[7]="�����";
					a[8]="����";
					b[1]="naim";
					b[2]="stoymzaed";
					b[3]="ed_izm";
					b[4]="n_cat";
					b[5]="kolvo";
					b[6]="cena";
					b[7]="data";
					b[8]="id_sklad";
					adtotab(8, StringGrid1);
					break;
		 }
		 break;
 case 7: switch(y)
		 {
		   case 1:
				   clearmas();
				   Panel1->Visible=false;
				   Panel2->Visible=false;
				   Panel3->Visible=false;
				   Panel6->Visible=false;
				   Panel8->Visible=false;
				   Panel9->Visible=false;
				   Panel10->Visible=false;
				   Panel11->Visible=false;
				   Panel12->Visible=false;
				   Panel18->Visible=false;
				   Panel18->Visible=true;
				   Panel19->Visible=false;
				   Panel20->Visible=false;
				   Panel21->Visible=false;
				   Panel20->Visible=true;
				   Panel19->Visible=true;
				   Panel12->Visible=true;
				   Panel9->Visible=true;
				   Panel8->Visible=true;
				   Panel3->Visible=true;
				   Panel2->Visible=true;
				   Panel1->Visible=true;
				   Button26->Visible=false;
				   Button28->Visible=false;
				   Button17->Visible=false;
				   Button13->Visible=false;
				   Button4->Visible=false;
				   Button3->Visible=false;
				   Button2->Visible=false;
				   Button26->Visible=true;
				   Button2->Visible=true;
				   //Button3->Visible=true;
				   //Button4->Visible=true;
				   Label1->Caption="������������";
				   Label2->Caption="��������� �� �������";
				   Label3->Caption="������� ���������";
				   Label4->Caption="���������";
				   Label5->Caption="����������";
				   zap(5,4);
				   zap(4,4);
				   ADOQuery1->SQL->Text="select * from skladrash s, ed e, categorysklad c where e.id_ed=s.edizm and s.category=c.id_category order by data desc, naim asc";
				   ADOQuery1->Active=true;
				   a[1]="����� �/�";
				   a[2]="������������";
				   a[3]="��������� �� �������";
				   a[4]="������� ���������";
				   a[5]="���������";
				   a[6]="����������";
				   a[7]="�����";
				   a[8]="����";
				   b[1]="naim";
				   b[2]="stoymzaed";
				   b[3]="ed_izm";
				   b[4]="n_cat";
				   b[5]="kolvo";
				   b[6]="cena";
				   b[7]="data";
				   b[8]="id_sklad";
				   adtotab(8, StringGrid1);
				   break;
		   case 2:
					xval1=ComboBox1->Text;
					zap(5, 5);
					s1=xval1;
					xval1=ComboBox2->Text;
					zap(4, 5);
					s2=xval1;
					ADOQuery1->SQL->Text="insert into skladrash(naim, stoymzaed, kolvo, edizm, category, data, cena) values(:naim, :stoymzaed, :kolvo, :edizm, :category, :data, :cena)";
					ADOQuery1->Parameters->ParamByName("naim")->Value=Edit1->Text;
					ADOQuery1->Parameters->ParamByName("stoymzaed")->Value=Edit2->Text;
					ADOQuery1->Parameters->ParamByName("edizm")->Value=s1;
					ADOQuery1->Parameters->ParamByName("category")->Value=s2;
					ADOQuery1->Parameters->ParamByName("kolvo")->Value=Edit3->Text;
					ADOQuery1->Parameters->ParamByName("data")->Value=DateTimePicker1->Date.DateString();
					xse=Edit2->Text.ToDouble();
					xkv=Edit3->Text.ToDouble();
					xres=xse*xkv;
					ADOQuery1->Parameters->ParamByName("cena")->Value=xres;
					ADOQuery1->ExecSQL();
					zap(7,1);
					break;
		   case 3:
					xval1=ComboBox1->Text;
					zap(5, 5);
					s1=xval1;
					xval1=ComboBox2->Text;
					zap(4, 5);
					s2=xval1;
					ADOQuery1->SQL->Text="update skladrash set naim=:naim, stoymzaed=:stoymzaed, edizm=:edizm, category=:category, kolvo=:kolvo, data=:data, cena=:cena where id_sklad=:id_sklad";
					ADOQuery1->Parameters->ParamByName("naim")->Value=Edit1->Text;
					ADOQuery1->Parameters->ParamByName("stoymzaed")->Value=Edit2->Text;
					ADOQuery1->Parameters->ParamByName("edizm")->Value=s1;
					ADOQuery1->Parameters->ParamByName("category")->Value=s2;
					ADOQuery1->Parameters->ParamByName("kolvo")->Value=Edit3->Text;
					ADOQuery1->Parameters->ParamByName("data")->Value=DateTimePicker1->Date.DateString();
					ADOQuery1->Parameters->ParamByName("id_sklad")->Value=StringGrid1->Cells[8][StringGrid1->Row];
					xse=Edit2->Text.ToDouble();
					xkv=Edit3->Text.ToDouble();
					xres=xse*xkv;
					ADOQuery1->Parameters->ParamByName("cena")->Value=xres;
					ADOQuery1->ExecSQL();
					zap(7,1);
					break;
		   case 6:
					ADOQuery1->SQL->Text="delete from skladrash where id_sklad=:id_sklad";
					ADOQuery1->Parameters->ParamByName("id_sklad")->Value=StringGrid1->Cells[8][StringGrid1->Row];
					ADOQuery1->ExecSQL();

					ADOQuery1->SQL->Text="select * from skladost where naim=:naim";
					ADOQuery1->Parameters->ParamByName("naim")->Value=StringGrid1->Cells[1][StringGrid1->Row];
					ADOQuery1->Active=true;
				   if (ADOQuery1->RecordCount<=0) {
					ADOQuery2->SQL->Text="insert into skladost(naim, stoymzaed, kolvo, edizm, category, cena) values(:naim, :stoymzaed, :kolvo, :edizm, :category, :cena)";
					ADOQuery2->Parameters->ParamByName("naim")->Value=StringGrid1->Cells[1][StringGrid1->Row];
					ADOQuery2->Parameters->ParamByName("stoymzaed")->Value=ADOQuery1->FieldByName("stoymzaed")->Value;
					ADOQuery2->Parameters->ParamByName("edizm")->Value=ADOQuery1->FieldByName("edizm")->Value;
					ADOQuery2->Parameters->ParamByName("category")->Value=ADOQuery1->FieldByName("category")->Value;
					ADOQuery2->Parameters->ParamByName("kolvo")->Value=StringGrid1->Cells[5][StringGrid1->Row];
					xse=ADOQuery1->FieldByName("stoymzaed")->Value;
					xkv=StringGrid1->Cells[5][StringGrid1->Row].ToDouble();
					xres=xse*xkv;
					ADOQuery2->Parameters->ParamByName("cena")->Value=xres;
					ADOQuery2->ExecSQL();
				   }
				   else
				   {
					ADOQuery2->SQL->Text="update skladost set kolvo=:kolvo, cena=:cena where id_sklad=:id_sklad";
					ADOQuery2->Parameters->ParamByName("id_sklad")->Value=ADOQuery1->FieldByName("id_sklad")->Value;
					xkv=StringGrid1->Cells[5][StringGrid1->Row].ToDouble()+ADOQuery1->FieldByName("kolvo")->Value;
					ADOQuery2->Parameters->ParamByName("kolvo")->Value=xkv;
					xse=ADOQuery1->FieldByName("stoymzaed")->Value;
					xres=xse*xkv;
					ADOQuery2->Parameters->ParamByName("cena")->Value=xres;
					ADOQuery2->ExecSQL();
				   }
					zap(7,1);
					break;
		   case 7:
					clearmas();
					zap(5,4);
					zap(4,4);
					ADOQuery1->SQL->Text="select * from skladrash s, ed e, categorysklad c where n_cat like :n_cat and e.id_ed=s.edizm and s.naim like :naim and s.category=c.id_category and s.data between :x and :y order by naim asc";
					ADOQuery1->Parameters->ParamByName("x")->Value=DateTimePicker3->Date.DateString();
					ADOQuery1->Parameters->ParamByName("y")->Value=DateTimePicker4->Date.DateString();
					ADOQuery1->Parameters->ParamByName("naim")->Value="%"+Edit8->Text+"%";
					if (ComboBox7->Text=="�������� �����") {ComboBox7->Text="%%";}
					ADOQuery1->Parameters->ParamByName("n_cat")->Value="%"+ComboBox7->Text+"%";
					ADOQuery1->Active=true;
					a[1]="����� �/�";
					a[2]="������������";
					a[3]="��������� �� �������";
					a[4]="������� ���������";
					a[5]="���������";
					a[6]="����������";
					a[7]="�����";
					a[8]="����";
					b[1]="naim";
					b[2]="stoymzaed";
					b[3]="ed_izm";
					b[4]="n_cat";
					b[5]="kolvo";
					b[6]="cena";
					b[7]="data";
					b[8]="id_sklad";
					adtotab(8, StringGrid1);
					break;
		   case 77:
					for (int i = 1; i < StringGrid1->RowCount; i++) {
					ADOQuery1->SQL->Text="delete from skladrash where id_sklad=:id_sklad";
					ADOQuery1->Parameters->ParamByName("id_sklad")->Value=StringGrid1->Cells[8][i];
					ADOQuery1->ExecSQL();
					}
					zap(7,1);
					break;
		 }
		 break;
 case 8: switch(y)
		 {
		   case 1:
				   clearmas();
				   ADOQuery1->SQL->Text="select * from recept r, blud b, skladost s where b.id_blud=r.id_blud and r.id_blud=:id_blud and r.idskladprih=s.id_sklad and r.nazn='�����' order by naim asc";
				   ADOQuery1->Parameters->ParamByName("id_blud")->Value=StringGrid1->Cells[4][StringGrid1->Row];
				   ADOQuery1->Active=true;
				   a[1]="�����������";
				   a[2]="���������";
				   b[1]="naim";
				   b[2]="kolvopr";
				   b[3]="nazn";
				   b[4]="idskladprih";
				   b[5]="id_recept";
				   adtotab2(2, StringGrid2);
				   ADOQuery1->SQL->Text="select * from recept r, blud b, kuhnya s where b.id_blud=r.id_blud and r.id_blud=:id_blud and r.idskladprih=s.id_kuhnya and r.nazn='�����' order by knaim asc";
				   ADOQuery1->Parameters->ParamByName("id_blud")->Value=StringGrid1->Cells[4][StringGrid1->Row];
				   ADOQuery1->Active=true;
				   a[1]="�����������";
				   a[2]="���������";
				   b[1]="knaim";
				   b[2]="kolvopr";
				   b[3]="nazn";
				   b[4]="idskladprih";
				   b[5]="id_recept";
				   adtotab2plus(2, StringGrid2);
				   break;
		   case 2:
					for (int i = 1; i < StringGrid2->RowCount; i++) {
					ADOQuery1->SQL->Text="insert into recept(id_blud, idskladprih, kolvopr, nazn) values(:id_blud, :idskladprih, :kolvopr, :nazn)";
					ADOQuery1->Parameters->ParamByName("id_blud")->Value=ind;
					ADOQuery1->Parameters->ParamByName("idskladprih")->Value=StringGrid2->Cells[3][i];
					ADOQuery1->Parameters->ParamByName("kolvopr")->Value=StringGrid2->Cells[1][i];
					ADOQuery1->Parameters->ParamByName("nazn")->Value=StringGrid2->Cells[2][i];
					ADOQuery1->ExecSQL();
					}
					break;
		   case 3:
					ADOQuery1->SQL->Text="delete from recept where id_blud=:id_blud";
					ADOQuery1->Parameters->ParamByName("id_blud")->Value=StringGrid1->Cells[4][StringGrid1->Row];
					ADOQuery1->ExecSQL();

					for (int i = 1; i < StringGrid2->RowCount; i++) {
					Form1->Caption=StringGrid2->Cells[4][i];
					ADOQuery1->SQL->Text="insert into recept(id_blud, idskladprih, kolvopr, nazn) values(:id_blud, :idskladprih, :kolvopr, :nazn)";
					ADOQuery1->Parameters->ParamByName("id_blud")->Value=StringGrid1->Cells[4][StringGrid1->Row];
					ADOQuery1->Parameters->ParamByName("idskladprih")->Value=StringGrid2->Cells[3][i];
					ADOQuery1->Parameters->ParamByName("kolvopr")->Value=StringGrid2->Cells[1][i];
					ADOQuery1->Parameters->ParamByName("nazn")->Value=StringGrid2->Cells[2][i];
					ADOQuery1->ExecSQL();
					}
					break;
		 }
		 break;
 case 9: switch(y)
		 {
		   case 1:
				   clearmas();
				   Panel1->Visible=false;
				   Panel2->Visible=false;
				   Panel3->Visible=false;
				   Panel6->Visible=false;
				   Panel8->Visible=false;
				   Panel9->Visible=false;
				   Panel10->Visible=false;
				   Panel11->Visible=false;
				   Panel12->Visible=false;
				   Panel18->Visible=false;
				   Panel19->Visible=false;
				   Panel20->Visible=false;
				   Panel21->Visible=false;
				   Panel20->Visible=true;
				   Panel19->Visible=true;
				   Panel9->Visible=true;
				   Panel8->Visible=true;
				   Panel3->Visible=true;
				   Panel2->Visible=true;
				   Panel1->Visible=true;
				   Button26->Visible=false;
				   Button28->Visible=false;
				   Button17->Visible=false;
				   Button13->Visible=false;
				   Button4->Visible=false;
				   Button3->Visible=false;
				   Button2->Visible=false;
				   Button2->Visible=true;
				   //Button3->Visible=true;
				   //Button4->Visible=true;
				   Button13->Visible=true;
				   Label1->Caption="������������";
				   Label2->Caption="��������� �� �������";
				   Label3->Caption="������� ���������";
				   Label4->Caption="���������";
				   Label5->Caption="����������";
				   zap(5,4);
				   zap(4,4);
				   ADOQuery1->SQL->Text="select * from skladost s, ed e, categorysklad c where e.id_ed=s.edizm and s.category=c.id_category order by naim asc";
				   ADOQuery1->Active=true;
				   a[1]="����� �/�";
				   a[2]="������������";
				   a[3]="��������� �� �������";
				   a[4]="������� ���������";
				   a[5]="���������";
				   a[6]="����������";
				   a[7]="�����";
				   b[1]="naim";
				   b[2]="stoymzaed";
				   b[3]="ed_izm";
				   b[4]="n_cat";
				   b[5]="kolvo";
				   b[6]="cena";
				   b[7]="id_sklad";
				   adtotab(7, StringGrid1);
				   break;
		   case 2:
				   ADOQuery1->SQL->Text="select * from skladost where naim=:naim";
				   ADOQuery1->Parameters->ParamByName("naim")->Value=Edit1->Text;
				   ADOQuery1->Active=true;
				   if (ADOQuery1->RecordCount<=0) {
					xval1=ComboBox1->Text;
					zap(5, 5);
					s1=xval1;
					xval1=ComboBox2->Text;
					zap(4, 5);
					s2=xval1;
					ADOQuery1->SQL->Text="insert into skladost(naim, stoymzaed, kolvo, edizm, category, cena) values(:naim, :stoymzaed, :kolvo, :edizm, :category, :cena)";
					ADOQuery1->Parameters->ParamByName("naim")->Value=Edit1->Text;
					ADOQuery1->Parameters->ParamByName("stoymzaed")->Value=Edit2->Text;
					ADOQuery1->Parameters->ParamByName("edizm")->Value=s1;
					ADOQuery1->Parameters->ParamByName("category")->Value=s2;
					ADOQuery1->Parameters->ParamByName("kolvo")->Value=Edit3->Text;
					xse=Edit2->Text.ToDouble();
					xkv=Edit3->Text.ToDouble();
					xres=xse*xkv;
					ADOQuery1->Parameters->ParamByName("cena")->Value=xres;
					ADOQuery1->ExecSQL();
				   } else
				   {
				   vx1=ADOQuery1->FieldByName("id_sklad")->Value;
				   vx2=ADOQuery1->FieldByName("kolvo")->Value;
				   zap(9,3);
				   }
					break;
		   case 3:
					xval1=ComboBox1->Text;
					zap(5, 5);
					s1=xval1;
					xval1=ComboBox2->Text;
					zap(4, 5);
					s2=xval1;
					ADOQuery1->SQL->Text="update skladost set stoymzaed=:stoymzaed, kolvo=:kolvo, cena=:cena where id_sklad=:id_sklad";
					ADOQuery1->Parameters->ParamByName("stoymzaed")->Value=Edit2->Text;
					ADOQuery1->Parameters->ParamByName("id_sklad")->Value=vx1;
					xkv=vx2.ToDouble()+Edit3->Text.ToDouble();
					ADOQuery1->Parameters->ParamByName("kolvo")->Value=xkv;
					xse=Edit2->Text.ToDouble();
					xres=xse*xkv;
					ADOQuery1->Parameters->ParamByName("cena")->Value=xres;
					ADOQuery1->ExecSQL();
					break;
		   case 6:
					ADOQuery1->SQL->Text="delete from skladost where id_sklad=:id_sklad";
					ADOQuery1->Parameters->ParamByName("id_sklad")->Value=StringGrid1->Cells[7][StringGrid1->Row];
					ADOQuery1->ExecSQL();
					zap(9,1);
					break;
		   case 7:
					if (Edit5->Text.ToDouble()<=StringGrid1->Cells[5][StringGrid1->Row].ToDouble())
					{
					ADOQuery1->SQL->Text="select * from skladrash where naim=:naim";
					ADOQuery1->Parameters->ParamByName("naim")->Value=StringGrid1->Cells[1][StringGrid1->Row];
					ADOQuery1->Active=true;
					xval1=StringGrid1->Cells[3][StringGrid1->Row];
					zap(5, 5);
					s1=xval1;
					xval1=StringGrid1->Cells[4][StringGrid1->Row];
					zap(4, 5);
					s2=xval1;
					ADOQuery1->SQL->Text="insert into skladrash(naim, stoymzaed, kolvo, edizm, category, cena, data) values(:naim, :stoymzaed, :kolvo, :edizm, :category, :cena, :data)";
					ADOQuery1->Parameters->ParamByName("naim")->Value=StringGrid1->Cells[1][StringGrid1->Row];
					ADOQuery1->Parameters->ParamByName("stoymzaed")->Value=StringGrid1->Cells[2][StringGrid1->Row];
					ADOQuery1->Parameters->ParamByName("edizm")->Value=s1;
					ADOQuery1->Parameters->ParamByName("category")->Value=s2;
					ADOQuery1->Parameters->ParamByName("kolvo")->Value=Edit5->Text;
					xse=StringGrid1->Cells[2][StringGrid1->Row].ToDouble();
					xkv=Edit5->Text.ToDouble();
					xres=xse*xkv;
					ADOQuery1->Parameters->ParamByName("cena")->Value=xres;
					ADOQuery1->Parameters->ParamByName("data")->Value=DateTimePicker2->Date.DateString();
					ADOQuery1->ExecSQL();
					if (Edit5->Text.ToDouble()<StringGrid1->Cells[5][StringGrid1->Row].ToDouble())
						{
						ADOQuery1->SQL->Text="update skladost set stoymzaed=:stoymzaed, kolvo=:kolvo, cena=:cena where id_sklad=:id_sklad";
						ADOQuery1->Parameters->ParamByName("stoymzaed")->Value=StringGrid1->Cells[2][StringGrid1->Row];
						ADOQuery1->Parameters->ParamByName("id_sklad")->Value=StringGrid1->Cells[7][StringGrid1->Row];
						xkv=StringGrid1->Cells[5][StringGrid1->Row].ToDouble()-Edit5->Text.ToDouble();
						ADOQuery1->Parameters->ParamByName("kolvo")->Value=xkv;
						xse=StringGrid1->Cells[2][StringGrid1->Row].ToDouble();
						xres=xse*xkv;
						ADOQuery1->Parameters->ParamByName("cena")->Value=xres;
						ADOQuery1->ExecSQL();
						}
					if (Edit5->Text.ToDouble()==StringGrid1->Cells[5][StringGrid1->Row].ToDouble())
						{
						ADOQuery1->SQL->Text="update skladost set stoymzaed=:stoymzaed, kolvo=:kolvo, cena=:cena where id_sklad=:id_sklad";
						ADOQuery1->Parameters->ParamByName("stoymzaed")->Value=StringGrid1->Cells[2][StringGrid1->Row];
						ADOQuery1->Parameters->ParamByName("id_sklad")->Value=StringGrid1->Cells[7][StringGrid1->Row];
						xkv=0;
						ADOQuery1->Parameters->ParamByName("kolvo")->Value=xkv;
						xse=StringGrid1->Cells[2][StringGrid1->Row].ToDouble();
						xres=xse*xkv;
						ADOQuery1->Parameters->ParamByName("cena")->Value=xres;
						ADOQuery1->ExecSQL();
						}
					zap(9,1);
					}
				   break;
		   case 8:
					clearmas();
					zap(5,4);
				   zap(4,4);
				   ADOQuery1->SQL->Text="select * from skladost s, ed e, categorysklad c where n_cat like :n_cat and e.id_ed=s.edizm and s.category=c.id_category and s.naim like :naim order by s.naim asc";
				   if (ComboBox7->Text=="�������� �����") {ComboBox7->Text="%%";}
				   if (Edit8->Text=="") {Edit8->Text="%%";}
				   ADOQuery1->Parameters->ParamByName("n_cat")->Value="%"+ComboBox7->Text+"%";
				   ADOQuery1->Parameters->ParamByName("naim")->Value="%"+Edit8->Text+"%";
				   ADOQuery1->Active=true;
				   a[1]="����� �/�";
				   a[2]="������������";
				   a[3]="��������� �� �������";
				   a[4]="������� ���������";
				   a[5]="���������";
				   a[6]="����������";
				   a[7]="�����";
				   b[1]="naim";
				   b[2]="stoymzaed";
				   b[3]="ed_izm";
				   b[4]="n_cat";
				   b[5]="kolvo";
				   b[6]="cena";
				   b[7]="id_sklad";
				   adtotab(7, StringGrid1);
					break;
		 }
		 break;
 case 10: switch(y)
		 {
		   case 1:
				   clearmas();
				   Panel1->Visible=false;
				   Panel2->Visible=false;
				   Panel3->Visible=false;
				   Panel6->Visible=false;
				   Panel8->Visible=false;
				   Panel9->Visible=false;
				   Panel10->Visible=false;
				   Panel11->Visible=false;
				   Panel12->Visible=false;
				   Panel18->Visible=false;
				   Panel19->Visible=false;
				   Panel20->Visible=false;
				   Panel21->Visible=false;
				   Panel19->Visible=true;
				   Panel18->Visible=true;
				   Panel2->Visible=true;
				   Panel1->Visible=true;
				   Button26->Visible=false;
				   Button28->Visible=false;
				   Button17->Visible=false;
				   Button13->Visible=false;
				   Button4->Visible=false;
				   Button3->Visible=false;
				   Button2->Visible=false;
				   Button28->Visible=true;
				   Button2->Visible=true;
				   ADOQuery1->SQL->Text="select * from kvit order by dataopl desc";
				   ADOQuery1->Active=true;
				   a[1]="����� �/�";
				   a[2]="����� ���������";
				   a[3]="�����";
				   a[4]="����";
				   a[5]="���������";
				   a[6]="���������";
				   b[1]="id_kvit";
				   b[2]="summa";
				   b[3]="dataopl";
				   b[4]="mest";
				   b[5]="ofic";
				   b[6]="id_kvit";
				   adtotab(6, StringGrid1);
				   break;
		   case 6:
					ADOQuery1->SQL->Text="delete from kvit where id_kvit=:id_kvit";
					ADOQuery1->Parameters->ParamByName("id_kvit")->Value=StringGrid1->Cells[6][StringGrid1->Row];
					ADOQuery1->ExecSQL();
					ADOQuery1->SQL->Text="delete from kvitspis where idkvit=:idkvit";
					ADOQuery1->Parameters->ParamByName("idkvit")->Value=StringGrid1->Cells[6][StringGrid1->Row];
					ADOQuery1->ExecSQL();
					ADOQuery1->SQL->Text="delete from skladrash where idkvit=:idkvit";
					ADOQuery1->Parameters->ParamByName("idkvit")->Value=StringGrid1->Cells[6][StringGrid1->Row];
					ADOQuery1->ExecSQL();
					zap(10,1);
					break;
		   case 7:
					ADOQuery1->SQL->Text="delete from kvit where id_kvit=:id_kvit";
					ADOQuery1->Parameters->ParamByName("id_kvit")->Value=StringGrid1->Cells[6][StringGrid1->Row];
					ADOQuery1->ExecSQL();
					ADOQuery1->SQL->Text="delete from kvitspis where idkvit=:idkvit";
					ADOQuery1->Parameters->ParamByName("idkvit")->Value=StringGrid1->Cells[6][StringGrid1->Row];
					ADOQuery1->ExecSQL();
					ADOQuery1->SQL->Text="select * from skladrash where idkvit=:idkvit";
					ADOQuery1->Parameters->ParamByName("idkvit")->Value=StringGrid1->Cells[6][StringGrid1->Row];
					ADOQuery1->Active=true;
					while (!ADOQuery1->Eof)
					{
						ADOQuery2->SQL->Text="select * from skladost where naim=:naim and kuda=:kuda";
						ADOQuery2->Parameters->ParamByName("naim")->Value=ADOQuery1->FieldByName("naim")->Value;
						ADOQuery2->Parameters->ParamByName("kuda")->Value=ADOQuery1->FieldByName("kuda")->Value;
						ADOQuery2->Active=true;
						int xim=ADOQuery2->FieldByName("id_sklad")->Value;
						double kkx1=ADOQuery2->FieldByName("kolvo")->Value;
						double kkx2=ADOQuery1->FieldByName("kolvo")->Value;
						double kkx3=kkx1+kkx2;
						double sxx=ADOQuery2->FieldByName("stoymzaed")->Value;
						double sux=kkx3*sxx;
						ADOQuery2->SQL->Text="update skladost set kolvo=:kolvo, cena=:cena where id_sklad=:id_sklad";
						ADOQuery2->Parameters->ParamByName("id_sklad")->Value=xim;
						ADOQuery2->Parameters->ParamByName("kolvo")->Value=kkx3;
						ADOQuery2->Parameters->ParamByName("cena")->Value=sux;
						ADOQuery2->ExecSQL();
						ADOQuery1->Next();
					}

					ADOQuery1->SQL->Text="delete from skladrash where idkvit=:idkvit";
					ADOQuery1->Parameters->ParamByName("idkvit")->Value=StringGrid1->Cells[6][StringGrid1->Row];
					ADOQuery1->ExecSQL();
					zap(10,1);
					break;
		   case 8:
					clearmas();
					ADOQuery1->SQL->Text="select * from kvit where dataopl between :x and :y";
					ADOQuery1->Parameters->ParamByName("x")->Value=DateTimePicker3->Date.DateString();
					ADOQuery1->Parameters->ParamByName("y")->Value=DateTimePicker4->Date.DateString();
					ADOQuery1->Active=true;
					a[1]="����� �/�";
					a[2]="����� ���������";
					a[3]="�����";
					a[4]="����";
					a[5]="���������";
					a[6]="���������";
					b[1]="id_kvit";
					b[2]="summa";
					b[3]="dataopl";
					b[4]="mest";
					b[5]="ofic";
					b[6]="id_kvit";
				   adtotab(6, StringGrid1);
				   break;
		 }
		 break;
case 12: switch(y)
		 {
		   case 1:
				   zap(6,4);
				   StringGrid2->RowCount=1;
				   StringGrid2->ColCount=2;
				   StringGrid2->ColWidths[0]=200;
				   StringGrid2->ColWidths[1]=100;
				   StringGrid2->Cells[0][0]="�����������";
				   StringGrid2->Cells[1][0]="���������";
				   StringGrid2->Cells[2][0]="0";
				   for (int i = 1; i < 100; i++) {
				   StringGrid2->Cells[0][i]="";
				   StringGrid2->Cells[1][i]="";
				   StringGrid2->Cells[2][i]="";
				   }
				   clearmas();
				   Panel1->Visible=false;
				   Panel2->Visible=false;
				   Panel3->Visible=false;
				   Panel8->Visible=false;
				   Panel9->Visible=false;
				   Panel10->Visible=false;
				   Panel11->Visible=false;
				   Panel12->Visible=false;
				   Panel18->Visible=false;
				   Panel19->Visible=false;
				   Panel20->Visible=false;
				   Panel21->Visible=false;
				   Button26->Visible=false;
				   Button28->Visible=false;
				   Button17->Visible=false;
				   Button13->Visible=false;
				   Button4->Visible=false;
				   Button3->Visible=false;
				   Button2->Visible=false;
				   Button2->Visible=true;
                   Button3->Visible=true;
				   Button4->Visible=true;
				   Button17->Visible=true;
				   Panel19->Visible=true;
				   Panel12->Visible=true;
				   Panel6->Visible=true;
				   Panel2->Visible=true;
				   Panel1->Visible=true;
				   Label1->Caption="������������";
				   Label2->Caption="����������";
				   Label7->Caption="���� ��������";
				   ADOQuery1->SQL->Text="select * from kuhnya order by knaim asc";
				   ADOQuery1->Active=true;
				   a[1]="����� �/�";
				   a[2]="������������";
				   a[3]="����������";
				   b[1]="knaim";
				   b[2]="kolvo";
				   b[3]="id_kuhnya";
				   adtotab(3, StringGrid1);
				   break;
		   case 2:
					ADOQuery1->SQL->Text="select MAX(id_kuhnya) as ttt from kuhnya";
					ADOQuery1->Active=true;
					if (ADOQuery1->FieldByName("ttt")->IsNull!=true)
						ind=ADOQuery1->FieldByName("ttt")->Value;
					else
						ind=0;
					ind++;

					if (Edit1->Text!="" && Edit2->Text!="") {
					ADOQuery1->SQL->Text="select * from kuhnya where knaim=:knaim";
					ADOQuery1->Parameters->ParamByName("knaim")->Value=Edit1->Text;
					ADOQuery1->Active=true;

					if (ADOQuery1->RecordCount>0) {
					double xc=ADOQuery1->FieldByName("kolvo")->Value;
					ind=ADOQuery1->FieldByName("id_kuhnya")->Value;
					//clearmas();
					clearmas();
					ADOQuery1->SQL->Text="select * from kuhnya where knaim=:knaim";
					ADOQuery1->Parameters->ParamByName("knaim")->Value=Edit1->Text;
					ADOQuery1->Active=true;
					a[1]="����� �/�";
					a[2]="������������";
					a[3]="����������";
					b[1]="knaim";
					b[2]="kolvo";
					b[3]="id_kuhnya";
					adtotab(3, StringGrid1);
					ADOQuery1->SQL->Text="update kuhnya set kolvo=:kolvo where id_kuhnya=:id_kuhnya";
					ADOQuery1->Parameters->ParamByName("kolvo")->Value=Edit2->Text.ToDouble()+xc;
					ADOQuery1->Parameters->ParamByName("id_kuhnya")->Value=ind;
					ADOQuery1->ExecSQL();
					}
					else
					{
					ADOQuery1->SQL->Text="insert into kuhnya(knaim, kolvo, id_kuhnya) values(:knaim, :kolvo, :id_kuhnya)";
					ADOQuery1->Parameters->ParamByName("knaim")->Value=Edit1->Text;
					ADOQuery1->Parameters->ParamByName("kolvo")->Value=Edit2->Text;
					ADOQuery1->Parameters->ParamByName("id_kuhnya")->Value=ind;
					ADOQuery1->ExecSQL();
					zap(13,2);
					}

					if (Edit2->Text.ToDouble()>0) {
					for (int i = 1; i < StringGrid2->RowCount; i++)
					{
					ADOQuery1->SQL->Text="select * from skladost where naim=:naim";
					ADOQuery1->Parameters->ParamByName("naim")->Value=StringGrid2->Cells[0][i];
					ADOQuery1->Active=true;
					xxl=ADOQuery1->FieldByName("kolvo")->Value;
					xkv=StringGrid2->Cells[1][i].ToDouble()*Edit2->Text.ToDouble();
					iid=ADOQuery1->FieldByName("id_sklad")->Value;
					xse=ADOQuery1->FieldByName("stoymzaed")->Value;
					xres=xse*xkv;
					ADOQuery2->SQL->Text="insert into skladrash(naim, stoymzaed, kolvo, edizm, category, data, cena) values(:naim, :stoymzaed, :kolvo, :edizm, :category, :data, :cena)";
					ADOQuery2->Parameters->ParamByName("naim")->Value=ADOQuery1->FieldByName("naim")->Value;
					ADOQuery2->Parameters->ParamByName("stoymzaed")->Value=ADOQuery1->FieldByName("stoymzaed")->Value;
					ADOQuery2->Parameters->ParamByName("edizm")->Value=ADOQuery1->FieldByName("edizm")->Value;
					ADOQuery2->Parameters->ParamByName("category")->Value=ADOQuery1->FieldByName("category")->Value;
					ADOQuery2->Parameters->ParamByName("kolvo")->Value=xkv;
					ADOQuery2->Parameters->ParamByName("data")->Value=Date();
					ADOQuery2->Parameters->ParamByName("cena")->Value=xres;
					ADOQuery2->ExecSQL();

					if (xxl<=xkv) {
					ADOQuery2->SQL->Text="update skladost set kolvo=:kolvo, cena=:cena where id_sklad=:id_sklad";
					ADOQuery2->Parameters->ParamByName("id_sklad")->Value=iid;
					xkv=0;
					ADOQuery2->Parameters->ParamByName("kolvo")->Value=xkv;
					xres=0;
					ADOQuery2->Parameters->ParamByName("cena")->Value=xres;
					ADOQuery2->ExecSQL();
					}
					else
					{
					ADOQuery2->SQL->Text="update skladost set kolvo=:kolvo, cena=:cena where id_sklad=:id_sklad";
					ADOQuery2->Parameters->ParamByName("id_sklad")->Value=iid;
					xkvp=xxl-xkv;
					ADOQuery2->Parameters->ParamByName("kolvo")->Value=xkvp;
					xres=xse*xkvp;
					ADOQuery2->Parameters->ParamByName("cena")->Value=xres;
					ADOQuery2->ExecSQL();
					}
					} // ����� for
					}


					zap(12,1);
					for (int i = 1; i < 100; i++) {
					StringGrid2->Cells[0][i]="0";
					StringGrid2->Cells[1][i]="0";
					StringGrid2->Cells[2][i]="0";
					}
					} else ShowMessage("��� ���� ������ ���� ��������� ���������");
					break;
		   case 3:
					ADOQuery1->SQL->Text="select * from kuhnya where knaim=:knaim";
					ADOQuery1->Parameters->ParamByName("knaim")->Value=StringGrid1->Cells[1][StringGrid1->Row];
					ADOQuery1->Active=true;
					ind=ADOQuery1->FieldByName("id_kuhnya")->Value;
					ADOQuery1->SQL->Text="update kuhnya set kolvo=:kolvo where id_kuhnya=:id_kuhnya";
					ADOQuery1->Parameters->ParamByName("id_kuhnya")->Value=ind;
					ADOQuery1->Parameters->ParamByName("kolvo")->Value=Edit2->Text;
					ADOQuery1->ExecSQL();
					zap(13,3);
					zap(12,1);
					break;
		   case 4:  ADOQuery1->SQL->Text="select * from kuhnya order by knaim asc";
					ADOQuery1->Active=true;
					adtolb(StringGrid3, "knaim", "id_kuhnya", "kuhnya");
					break;
		   case 6:
					ADOQuery1->SQL->Text="delete from kuhnya where id_kuhnya=:id_kuhnya";
					ADOQuery1->Parameters->ParamByName("id_kuhnya")->Value=StringGrid1->Cells[3][StringGrid1->Row];
					ADOQuery1->ExecSQL();
					ADOQuery1->SQL->Text="delete from receptkuh where id_kuh=:id_kuh";
					ADOQuery1->Parameters->ParamByName("id_kuh")->Value=StringGrid1->Cells[3][StringGrid1->Row];
					ADOQuery1->ExecSQL();
					zap(12,1);
					break;
		   case 7:
					clearmas();
					ADOQuery1->SQL->Text="select * from kuhnya order by knaim asc";
					ADOQuery1->Active=true;
					a[1]="����� �/�";
					a[2]="������������";
					a[3]="����������";
					b[1]="knaim";
					b[2]="kolvo";
					b[3]="id_kuhnya";
					adtotab(3, StringGrid1);
					break;
		   }
		 break;
 case 13: switch(y)
		 {
		   case 1:
				   clearmas();
				   ADOQuery1->SQL->Text="select * from receptkuh r, kuhnya k, skladost s where k.id_kuhnya=r.id_kuh and r.id_kuh=:id_kuh and r.idskladprih=s.id_sklad order by naim asc";
				   ADOQuery1->Parameters->ParamByName("id_kuh")->Value=StringGrid1->Cells[3][StringGrid1->Row];
				   ADOQuery1->Active=true;
				   a[1]="�����������";
				   a[2]="���������";
				   b[1]="naim";
				   b[2]="kolvopr";
				   b[3]="nazn";
				   b[4]="idskladprih";
				   b[5]="id_recept";
				   b[6]="id_kuh";
				   adtotab2(2, StringGrid2);
				   break;
		   case 2:
					for (int i = 1; i < StringGrid2->RowCount; i++) {
					ADOQuery1->SQL->Text="insert into receptkuh(id_kuh, idskladprih, kolvopr, nazn) values(:id_kuh, :idskladprih, :kolvopr, :nazn)";
					ADOQuery1->Parameters->ParamByName("id_kuh")->Value=ind;
					ADOQuery1->Parameters->ParamByName("idskladprih")->Value=StringGrid2->Cells[3][i];
					ADOQuery1->Parameters->ParamByName("nazn")->Value=StringGrid2->Cells[2][i];
					ADOQuery1->Parameters->ParamByName("kolvopr")->Value=StringGrid2->Cells[1][i];
					ADOQuery1->ExecSQL();
					}
					//zap(4,1);
					break;
		   case 3:
					ADOQuery1->SQL->Text="delete from receptkuh where id_kuh=:id_kuh";
					ADOQuery1->Parameters->ParamByName("id_kuh")->Value=StringGrid1->Cells[3][StringGrid1->Row];
					ADOQuery1->ExecSQL();

					for (int i = 1; i < StringGrid2->RowCount; i++) {
					ADOQuery1->SQL->Text="insert into receptkuh(id_kuh, idskladprih, kolvopr, nazn) values(:id_kuh, :idskladprih, :kolvopr, :nazn)";
					ADOQuery1->Parameters->ParamByName("nazn")->Value=StringGrid2->Cells[2][i];
					ADOQuery1->Parameters->ParamByName("id_kuh")->Value=StringGrid1->Cells[3][StringGrid1->Row];
					ADOQuery1->Parameters->ParamByName("idskladprih")->Value=StringGrid2->Cells[3][i];
					ADOQuery1->Parameters->ParamByName("kolvopr")->Value=StringGrid2->Cells[1][i];
					ADOQuery1->ExecSQL();
					}
					break;
		 }
		 break;
case 14: switch(y)
		 {
		   case 1:
				   clearmas();
				   ADOQuery1->SQL->Text="select * from snach where data=:data";
				   ADOQuery1->Parameters->ParamByName("data")->Value=Date();
				   ADOQuery1->Active=true;
				   break;
		   case 2:
				   for (int i = 1; i < StringGrid1->RowCount; i++) {
				   ADOQuery1->SQL->Text="insert into snach(naim, stoymzaed, kolvo, cena, kuda, data) values(:naim, :stoymzaed, :kolvo, :cena, :kuda, :data)";
				   ADOQuery1->Parameters->ParamByName("naim")->Value=StringGrid1->Cells[1][i];
				   ADOQuery1->Parameters->ParamByName("stoymzaed")->Value=StringGrid1->Cells[2][i];
				   ADOQuery1->Parameters->ParamByName("kolvo")->Value=StringGrid1->Cells[5][i];
				   ADOQuery1->Parameters->ParamByName("cena")->Value=StringGrid1->Cells[6][i];
				   ADOQuery1->Parameters->ParamByName("kuda")->Value=StringGrid1->Cells[7][i];
				   ADOQuery1->Parameters->ParamByName("data")->Value=Date();
				   ADOQuery1->ExecSQL();
				   }
				   break;
		 }
		 break;
case 15:
		switch(y)
		{
		case 1:
				   clearmas();
				   Panel1->Visible=false;
				   Panel2->Visible=false;
				   Panel3->Visible=false;
				   Panel8->Visible=false;
				   Panel9->Visible=false;
				   Panel10->Visible=false;
				   Panel11->Visible=false;
				   Panel12->Visible=false;
				   Panel18->Visible=false;
				   Panel19->Visible=false;
				   Panel20->Visible=false;
				   Panel21->Visible=false;
				   Panel21->Visible=true;
				   Button26->Visible=false;
				   Button28->Visible=false;
				   Button17->Visible=false;
				   Button13->Visible=false;
				   Button4->Visible=false;
				   Button3->Visible=false;
				   Button2->Visible=false;
				   Button2->Visible=true;
				   zap(2,4);
				   ADOQuery1->SQL->Text="select * from blud b, categoryeda c where b.id_category=c.id_category order by name_cat asc, nameblud asc";
				   ADOQuery1->Active=true;
				   a[1]="����� �/�";
				   a[2]="�����";
				   a[3]="���������";
				   a[4]="����";
				   a[5]="����������";
				   a[6]="�����";
				   b[1]="nameblud";
				   b[2]="name_cat";
				   b[3]="cena";
				   b[6]="id_blud";
				   adtotab(6, StringGrid1);
				   for (int i = 1; i < StringGrid1->RowCount; i++) {
				   StringGrid1->Cells[4][i]="0";
				   StringGrid1->Cells[5][i]="0";
				   }
				   break;
		case 6:    zap(16,6);
				   break;
		case 8:
					for (int i = 1; i < StringGrid1->RowCount; i++)
					{
					if (StringGrid1->Cells[4][i].ToDouble()>0) {
					ADOQuery2->SQL->Text="insert into prihodblud(bludo, kateg, cena, kolvo, summa, data, kuda) values(:bludo, :kateg, :cena, :kolvo, :summa, :data, :kuda)";
					ADOQuery2->Parameters->ParamByName("bludo")->Value=StringGrid1->Cells[1][i];
					ADOQuery2->Parameters->ParamByName("kateg")->Value=StringGrid1->Cells[2][i];
					ADOQuery2->Parameters->ParamByName("cena")->Value=StringGrid1->Cells[3][i];
					ADOQuery2->Parameters->ParamByName("kolvo")->Value=StringGrid1->Cells[4][i];
					ADOQuery2->Parameters->ParamByName("summa")->Value=StringGrid1->Cells[3][i].ToDouble()*StringGrid1->Cells[4][i].ToDouble();
					ADOQuery2->Parameters->ParamByName("data")->Value=DateTimePicker5->Date.DateString();
					ADOQuery2->Parameters->ParamByName("kuda")->Value=kuda;
					ADOQuery2->ExecSQL();

					ADOQuery1->SQL->Text="select *, s.kolvo as sk from recept r, skladost s where s.id_sklad=r.idskladprih and r.id_blud=:id_blud and r.nazn='�����'";
					ADOQuery1->Parameters->ParamByName("id_blud")->Value=StringGrid1->Cells[6][i];
					ADOQuery1->Active=true;
					while (!ADOQuery1->Eof)
					{
					xxl=ADOQuery1->FieldByName("sk")->Value;
					iid=ADOQuery1->FieldByName("id_sklad")->Value;
					xse=ADOQuery1->FieldByName("stoymzaed")->Value;
					xkvp=ADOQuery1->FieldByName("kolvopr")->Value;
					xkv=StringGrid1->Cells[4][i].ToDouble()*xkvp;
					xres=xse*xkv;
					ADOQuery2->SQL->Text="insert into skladrash(naim, stoymzaed, kolvo, edizm, category, data, cena, idkvit) values(:naim, :stoymzaed, :kolvo, :edizm, :category, :data, :cena, :idkvit)";
					ADOQuery2->Parameters->ParamByName("naim")->Value=ADOQuery1->FieldByName("naim")->Value;
					ADOQuery2->Parameters->ParamByName("stoymzaed")->Value=ADOQuery1->FieldByName("stoymzaed")->Value;
					ADOQuery2->Parameters->ParamByName("edizm")->Value=ADOQuery1->FieldByName("edizm")->Value;
					ADOQuery2->Parameters->ParamByName("category")->Value=ADOQuery1->FieldByName("category")->Value;
					ADOQuery2->Parameters->ParamByName("kolvo")->Value=xkv;
					ADOQuery2->Parameters->ParamByName("data")->Value=Date();
					ADOQuery2->Parameters->ParamByName("cena")->Value=xres;
					ADOQuery2->Parameters->ParamByName("idkvit")->Value=0;
					ADOQuery2->ExecSQL();
					ADOQuery1->Next();
					if (xxl<=xkv) {
					ADOQuery2->SQL->Text="update skladost set kolvo=:kolvo, cena=:cena where id_sklad=:id_sklad";
					ADOQuery2->Parameters->ParamByName("id_sklad")->Value=iid;
					xkv=0;
					ADOQuery2->Parameters->ParamByName("kolvo")->Value=xkv;
					xres=0;
					ADOQuery2->Parameters->ParamByName("cena")->Value=xres;
					ADOQuery2->ExecSQL();
					}
					else
					{
					ADOQuery2->SQL->Text="update skladost set stoymzaed=:stoymzaed, kolvo=:kolvo, cena=:cena where id_sklad=:id_sklad";
					ADOQuery2->Parameters->ParamByName("id_sklad")->Value=iid;
					xkvp=xxl-xkv;
					xse=ADOQuery1->FieldByName("stoymzaed")->Value;
					ADOQuery2->Parameters->ParamByName("kolvo")->Value=xkvp;
					xres=xse*xkvp;
					ADOQuery2->Parameters->ParamByName("cena")->Value=xres;
					ADOQuery2->ExecSQL();
					}
					}
					ADOQuery1->SQL->Text="select *, s.kolvo as sk from recept r, kuhnya s where s.id_kuhnya=r.idskladprih and r.id_blud=:id_blud and r.nazn='�����'";
					ADOQuery1->Parameters->ParamByName("id_blud")->Value=StringGrid1->Cells[6][i];
					ADOQuery1->Active=true;
					while (!ADOQuery1->Eof)
					{
					xxl=ADOQuery1->FieldByName("sk")->Value;
					iid=ADOQuery1->FieldByName("id_kuhnya")->Value;
					xkvp=ADOQuery1->FieldByName("kolvopr")->Value;
					xkv=StringGrid1->Cells[4][i].ToDouble()*xkvp;
					ADOQuery1->Next();
					ADOQuery2->SQL->Text="update kuhnya set kolvo=:kolvo where id_kuhnya=:id_kuhnya";
					ADOQuery2->Parameters->ParamByName("id_kuhnya")->Value=iid;
					xkvp=xxl-xkv;
					ADOQuery2->Parameters->ParamByName("kolvo")->Value=xkvp;
					ADOQuery2->ExecSQL();
					}
					}
					}
					zap(15,1);
					break;
		}
		 break;
case 16: switch(y)
		 {
		   case 1:
				   clearmas();
				   ADOQuery1->SQL->Text="select * from prihodblud where data=:data and kuda=:kuda and kolvo>0 order by kateg asc, bludo asc";
				   ADOQuery1->Parameters->ParamByName("data")->Value=DateTimePicker5->Date.DateString();
				   ADOQuery1->Parameters->ParamByName("kuda")->Value=kuda;
				   ADOQuery1->Active=true;
				   a[1]="����� �/�";
				   a[2]="�����";
				   a[3]="���������";
				   a[4]="����";
				   a[5]="����������";
				   a[6]="�����";
				   a[7]="����";
				   b[1]="bludo";
				   b[2]="kateg";
				   b[3]="cena";
				   b[4]="kolvo";
				   b[5]="summa";
				   b[6]="data";
				   b[7]="id_prib";
				   adtotab(7, StringGrid1);
				   break;
		   case 6:
					ADOQuery1->SQL->Text="delete from prihodblud where id_prib=:id_prib";
					ADOQuery1->Parameters->ParamByName("id_prib")->Value=StringGrid1->Cells[7][StringGrid1->Row];
					ADOQuery1->ExecSQL();
					zap(16,1);
					break;
		   case 7:
					ADOQuery1->SQL->Text="delete from prihodblud where data=:data and kuda=:kuda";
					ADOQuery1->Parameters->ParamByName("data")->Value=DateTimePicker5->Date.DateString();
					ADOQuery1->Parameters->ParamByName("kuda")->Value=kuda;
					ADOQuery1->ExecSQL();
					break;
		 }
		 break;
case 17: switch(y)
		 {
		   case 1:
				   zap(6,4);
				   StringGrid2->RowCount=1;
				   StringGrid2->ColCount=2;
				   StringGrid2->ColWidths[0]=200;
				   StringGrid2->ColWidths[1]=100;
				   StringGrid2->Cells[0][0]="�����������";
				   StringGrid2->Cells[1][0]="���������";
				   StringGrid2->Cells[2][0]="0";
				   for (int i = 1; i < 100; i++) {
				   StringGrid2->Cells[0][i]="";
				   StringGrid2->Cells[1][i]="";
				   StringGrid2->Cells[2][i]="";
				   }
				   clearmas();
				   Panel1->Visible=false;
				   Panel2->Visible=false;
				   Panel3->Visible=false;
				   Panel8->Visible=false;
				   Panel9->Visible=false;
				   Panel10->Visible=false;
				   Panel11->Visible=false;
				   Panel12->Visible=false;
				   Panel18->Visible=false;
				   Panel19->Visible=false;
				   Panel20->Visible=false;
				   Panel21->Visible=false;
				   Button26->Visible=false;
				   Button28->Visible=false;
				   Button17->Visible=false;
				   Button13->Visible=false;
				   Button4->Visible=false;
				   Button3->Visible=false;
				   Button2->Visible=false;
				   Button2->Visible=true;
				   Button3->Visible=true;
				   Button4->Visible=true;
				   Button17->Visible=true;
				   Panel19->Visible=true;
				   Panel12->Visible=true;
				   Panel9->Visible=true;
				   Panel6->Visible=true;
				   Panel2->Visible=true;
				   Panel1->Visible=true;
				   Label1->Caption="������������";
				   Label2->Caption="����������";
				   Label7->Caption="���� ��������";
				   Label5->Caption="���� �� �������";
				   ADOQuery1->SQL->Text="select * from kuhnya2 order by knaim asc";
				   ADOQuery1->Active=true;
				   a[1]="����� �/�";
				   a[2]="������������";
				   a[3]="����������";
				   a[4]="���� �� �������";
				   b[1]="knaim";
				   b[2]="kolvo";
				   b[3]="ced";
				   b[4]="id_kuhnya";
				   adtotab(4, StringGrid1);
				   break;
		   case 2:
					ADOQuery1->SQL->Text="select MAX(id_kuhnya) as ttt from kuhnya2";
					ADOQuery1->Active=true;
					if (ADOQuery1->FieldByName("ttt")->IsNull!=true)
						ind=ADOQuery1->FieldByName("ttt")->Value;
					else
						ind=0;
					ind++;

					if (Edit1->Text!="" && Edit2->Text!="") {
					ADOQuery1->SQL->Text="select * from kuhnya2 where knaim=:knaim";
					ADOQuery1->Parameters->ParamByName("knaim")->Value=Edit1->Text;
					ADOQuery1->Active=true;

					if (ADOQuery1->RecordCount>0) {
					double xc=ADOQuery1->FieldByName("kolvo")->Value;
					ind=ADOQuery1->FieldByName("id_kuhnya")->Value;
					clearmas();
					ADOQuery1->SQL->Text="select * from kuhnya2 where knaim=:knaim";
					ADOQuery1->Parameters->ParamByName("knaim")->Value=Edit1->Text;
					ADOQuery1->Active=true;
					a[1]="����� �/�";
					a[2]="������������";
					a[3]="����������";
					a[4]="���� �� �������";
					b[1]="knaim";
					b[2]="kolvo";
					b[3]="ced";
					b[4]="id_kuhnya";
					adtotab(4, StringGrid1);
					zap(18,3);
					ADOQuery1->SQL->Text="update kuhnya2 set kolvo=:kolvo, ced=:ced where id_kuhnya=:id_kuhnya";
					ADOQuery1->Parameters->ParamByName("kolvo")->Value=Edit2->Text.ToDouble()+xc;
					ADOQuery1->Parameters->ParamByName("id_kuhnya")->Value=ind;
					ADOQuery1->Parameters->ParamByName("ced")->Value=Edit3->Text;
					ADOQuery1->ExecSQL();
					}
					else
					{
					ADOQuery1->SQL->Text="insert into kuhnya2(knaim, kolvo, id_kuhnya, ced) values(:knaim, :kolvo, :id_kuhnya, :ced)";
					ADOQuery1->Parameters->ParamByName("knaim")->Value=Edit1->Text;
					ADOQuery1->Parameters->ParamByName("kolvo")->Value=Edit2->Text;
					ADOQuery1->Parameters->ParamByName("id_kuhnya")->Value=ind;
					ADOQuery1->Parameters->ParamByName("ced")->Value=Edit3->Text;
					ADOQuery1->ExecSQL();
					zap(18,2);
					}

					for (int i = 1; i < StringGrid2->RowCount; i++)
					{
					ADOQuery1->SQL->Text="select * from skladost where naim=:naim";
					ADOQuery1->Parameters->ParamByName("naim")->Value=StringGrid2->Cells[0][i];
					ADOQuery1->Active=true;
					xxl=ADOQuery1->FieldByName("kolvo")->Value;
					xkv=StringGrid2->Cells[1][i].ToDouble()*Edit2->Text.ToDouble();
					iid=ADOQuery1->FieldByName("id_sklad")->Value;
					xse=ADOQuery1->FieldByName("stoymzaed")->Value;
					xres=xse*xkv;
					ADOQuery2->SQL->Text="insert into skladrash(naim, stoymzaed, kolvo, edizm, category, data, cena) values(:naim, :stoymzaed, :kolvo, :edizm, :category, :data, :cena)";
					ADOQuery2->Parameters->ParamByName("naim")->Value=ADOQuery1->FieldByName("naim")->Value;
					ADOQuery2->Parameters->ParamByName("stoymzaed")->Value=ADOQuery1->FieldByName("stoymzaed")->Value;
					ADOQuery2->Parameters->ParamByName("edizm")->Value=ADOQuery1->FieldByName("edizm")->Value;
					ADOQuery2->Parameters->ParamByName("category")->Value=ADOQuery1->FieldByName("category")->Value;
					ADOQuery2->Parameters->ParamByName("kolvo")->Value=xkv;
					ADOQuery2->Parameters->ParamByName("data")->Value=Date();
					ADOQuery2->Parameters->ParamByName("cena")->Value=xres;
					ADOQuery2->ExecSQL();

					if (xxl<=xkv) {
					ADOQuery2->SQL->Text="update skladost set kolvo=:kolvo, cena=:cena where id_sklad=:id_sklad";
					ADOQuery2->Parameters->ParamByName("id_sklad")->Value=iid;
					xkv=0;
					ADOQuery2->Parameters->ParamByName("kolvo")->Value=xkv;
					xres=0;
					ADOQuery2->Parameters->ParamByName("cena")->Value=xres;
					ADOQuery2->ExecSQL();
					}
					else
					{
					ADOQuery2->SQL->Text="update skladost set kolvo=:kolvo, cena=:cena where id_sklad=:id_sklad";
					ADOQuery2->Parameters->ParamByName("id_sklad")->Value=iid;
					xkvp=xxl-xkv;
					ADOQuery2->Parameters->ParamByName("kolvo")->Value=xkvp;
					xres=xse*xkvp;
					ADOQuery2->Parameters->ParamByName("cena")->Value=xres;
					ADOQuery2->ExecSQL();
					}
					}
					zap(17,1);
					for (int i = 1; i < 100; i++) {
					StringGrid2->Cells[0][i]="0";
					StringGrid2->Cells[1][i]="0";
					StringGrid2->Cells[2][i]="0";
					}
					} else ShowMessage("��� ���� ������ ���� ��������� ���������");
					break;
		   case 3:
					ADOQuery1->SQL->Text="select * from kuhnya2 where knaim=:knaim";
					ADOQuery1->Parameters->ParamByName("knaim")->Value=StringGrid1->Cells[1][StringGrid1->Row];
					ADOQuery1->Active=true;
					ind=ADOQuery1->FieldByName("id_kuhnya")->Value;
					ADOQuery1->SQL->Text="update kuhnya2 set ced=:ced where id_kuhnya=:id_kuhnya";
					ADOQuery1->Parameters->ParamByName("ced")->Value=Edit3->Text;
					ADOQuery1->Parameters->ParamByName("id_kuhnya")->Value=ind;
					ADOQuery1->ExecSQL();
					zap(18,3);
					zap(17,1);
					break;
		   case 4:  ADOQuery1->SQL->Text="select * from kuhnya2 order by knaim asc";
					ADOQuery1->Active=true;
					adtolb(StringGrid3, "knaim", "id_kuhnya", "kuhnya");
					break;
		   case 6:
					ADOQuery1->SQL->Text="delete from kuhnya2 where id_kuhnya=:id_kuhnya";
					ADOQuery1->Parameters->ParamByName("id_kuhnya")->Value=StringGrid1->Cells[4][StringGrid1->Row];
					ADOQuery1->ExecSQL();
					ADOQuery1->SQL->Text="delete from receptkuh2 where id_kuh=:id_kuh";
					ADOQuery1->Parameters->ParamByName("id_kuh")->Value=StringGrid1->Cells[4][StringGrid1->Row];
					ADOQuery1->ExecSQL();
					zap(17,1);
					break;
		   case 7:
					clearmas();
					ADOQuery1->SQL->Text="select * from kuhnya2 order by knaim asc";
					ADOQuery1->Active=true;
					a[1]="����� �/�";
					a[2]="������������";
					a[3]="����������";
					a[4]="���� �� �������";
					b[1]="knaim";
					b[2]="kolvo";
					b[3]="ced";
					b[4]="id_kuhnya";
					adtotab(4, StringGrid1);
					break;
		   }
		 break;
 case 18: switch(y)
		 {
		   case 1:
				   clearmas();
				   ADOQuery1->SQL->Text="select * from receptkuh2 r, kuhnya2 k, skladost s where k.id_kuhnya=r.id_kuh and r.id_kuh=:id_kuh and r.idskladprih=s.id_sklad order by naim asc";
				   ADOQuery1->Parameters->ParamByName("id_kuh")->Value=StringGrid1->Cells[4][StringGrid1->Row];
				   ADOQuery1->Active=true;
				   a[1]="�����������";
				   a[2]="���������";
				   b[1]="naim";
				   b[2]="kolvopr";
				   b[3]="nazn";
				   b[4]="idskladprih";
				   b[5]="id_recept";
				   b[6]="id_kuh";
				   adtotab2(2, StringGrid2);
				   break;
		   case 2:
					for (int i = 1; i < StringGrid2->RowCount; i++) {
					ADOQuery1->SQL->Text="insert into receptkuh2(id_kuh, idskladprih, kolvopr, nazn) values(:id_kuh, :idskladprih, :kolvopr, :nazn)";
					ADOQuery1->Parameters->ParamByName("id_kuh")->Value=ind;
					ADOQuery1->Parameters->ParamByName("idskladprih")->Value=StringGrid2->Cells[3][i];
					ADOQuery1->Parameters->ParamByName("nazn")->Value=StringGrid2->Cells[2][i];
					ADOQuery1->Parameters->ParamByName("kolvopr")->Value=StringGrid2->Cells[1][i];
					ADOQuery1->ExecSQL();
					}
					//zap(4,1);
					break;
		   case 3:
					ADOQuery1->SQL->Text="delete from receptkuh2 where id_kuh=:id_kuh";
					ADOQuery1->Parameters->ParamByName("id_kuh")->Value=StringGrid1->Cells[4][StringGrid1->Row];
					ADOQuery1->ExecSQL();

					for (int i = 1; i < StringGrid2->RowCount; i++) {
					ADOQuery1->SQL->Text="insert into receptkuh2(id_kuh, idskladprih, kolvopr, nazn) values(:id_kuh, :idskladprih, :kolvopr, :nazn)";
					ADOQuery1->Parameters->ParamByName("id_kuh")->Value=StringGrid1->Cells[4][StringGrid1->Row];
					ADOQuery1->Parameters->ParamByName("idskladprih")->Value=StringGrid2->Cells[3][i];
					ADOQuery1->Parameters->ParamByName("kolvopr")->Value=StringGrid2->Cells[1][i];
					ADOQuery1->Parameters->ParamByName("nazn")->Value=StringGrid2->Cells[2][i];
					ADOQuery1->ExecSQL();
					}
					break;
		 }
		 break;
 case 19:
		switch(y)
		{
		case 1:
				   clearmas();
				   Panel1->Visible=false;
				   Panel2->Visible=false;
				   Panel3->Visible=false;
				   Panel8->Visible=false;
				   Panel9->Visible=false;
				   Panel10->Visible=false;
				   Panel11->Visible=false;
				   Panel12->Visible=false;
				   Panel18->Visible=false;
				   Panel19->Visible=false;
				   Panel20->Visible=false;
				   Panel21->Visible=false;
				   Panel21->Visible=true;
				   Button26->Visible=false;
				   Button28->Visible=false;
				   Button17->Visible=false;
				   Button13->Visible=false;
				   Button4->Visible=false;
				   Button3->Visible=false;
				   Button2->Visible=false;
				   Button2->Visible=true;
				   zap(2,4);
				   ADOQuery1->SQL->Text="select *, (ced*kolvo) as tx from kuhnya2 order by knaim";
				   ADOQuery1->Active=true;
				   a[1]="����� �/�";
				   a[2]="�����";
				   a[3]="����";
				   a[4]="������� �� ������";
				   a[5]="����� ������";
				   a[6]="������� �� �����";
				   a[7]="����� �����";
				   a[8]="����������";
				   a[9]="�����";
				   b[1]="knaim";
				   b[2]="ced";
				   b[3]="kolvo";
				   b[4]="tx";
				   b[9]="id_kuhnya";
				   adtotab(9, StringGrid1);
				   for (int i = 1; i < StringGrid1->RowCount; i++) {
				   StringGrid1->Cells[5][i]="0";
				   StringGrid1->Cells[6][i]="0";
				   StringGrid1->Cells[7][i]="0";
				   StringGrid1->Cells[8][i]="0";
				   }
				   break;
		case 6:    zap(20,6);
				   break;
		case 8:
					/*
					ADOQuery1->SQL->Text="delete from prihodblud where data=:data and kuda=:kuda";
					ADOQuery1->Parameters->ParamByName("data")->Value=Date();
					ADOQuery1->Parameters->ParamByName("kuda")->Value=kuda;
					ADOQuery1->ExecSQL();
					*/
					double bx=0;
					for (int i = 1; i < StringGrid1->RowCount; i++) {
					double r=0;
					r=StringGrid1->Cells[3][i].ToDouble()-StringGrid1->Cells[5][i].ToDouble();
					StringGrid1->Cells[6][i]=StringGrid1->Cells[5][i].ToDouble()*StringGrid1->Cells[2][i].ToDouble();
					StringGrid1->Cells[7][i]=r;
					StringGrid1->Cells[8][i]=r*StringGrid1->Cells[2][i].ToDouble();
					bx=bx+r;
					}
					for (int i = 1; i < StringGrid1->RowCount; i++)
					{
					ADOQuery2->SQL->Text="insert into prihodblud2(bludo, cena, ostnach, sumnach, kolvo, summa, ostkon, sumcon, data, kuda) values(:bludo, :cena, :ostnach, :sumnach, :kolvo, :summa, :ostkon, :sumcon, :data, :kuda)";
					ADOQuery2->Parameters->ParamByName("bludo")->Value=StringGrid1->Cells[1][i];
					ADOQuery2->Parameters->ParamByName("cena")->Value=StringGrid1->Cells[2][i];
					ADOQuery2->Parameters->ParamByName("ostnach")->Value=StringGrid1->Cells[3][i];
					ADOQuery2->Parameters->ParamByName("sumnach")->Value=StringGrid1->Cells[4][i];
					ADOQuery2->Parameters->ParamByName("kolvo")->Value=StringGrid1->Cells[7][i];
					ADOQuery2->Parameters->ParamByName("summa")->Value=StringGrid1->Cells[8][i];
					ADOQuery2->Parameters->ParamByName("ostkon")->Value=StringGrid1->Cells[5][i];
					ADOQuery2->Parameters->ParamByName("sumcon")->Value=StringGrid1->Cells[6][i];
					ADOQuery2->Parameters->ParamByName("data")->Value=DateTimePicker5->Date.DateString();
					ADOQuery2->Parameters->ParamByName("kuda")->Value=kuda;
					ADOQuery2->ExecSQL();

					ADOQuery1->SQL->Text="select * from kuhnya2 where id_kuhnya=:id_kuhnya";
					ADOQuery1->Parameters->ParamByName("id_kuhnya")->Value=StringGrid1->Cells[9][i];
					ADOQuery1->Active=true;
					ADOQuery2->SQL->Text="update kuhnya2 set kolvo=:kolvo where id_kuhnya=:id_kuhnya";
					ADOQuery2->Parameters->ParamByName("id_kuhnya")->Value=StringGrid1->Cells[9][i];
					xkv=StringGrid1->Cells[3][i].ToDouble()-StringGrid1->Cells[7][i].ToDouble();
					ADOQuery2->Parameters->ParamByName("kolvo")->Value=xkv;
					ADOQuery2->ExecSQL();
					}
					zap(19,1);
					break;
		}
		 break;
case 20: switch(y)
		 {
		   case 1:
				   clearmas();
				   ADOQuery1->SQL->Text="select * from prihodblud2 where data=:data and kuda=:kuda order by bludo asc";
				   ADOQuery1->Parameters->ParamByName("data")->Value=DateTimePicker5->Date.DateString();
				   ADOQuery1->Parameters->ParamByName("kuda")->Value=kuda;
				   ADOQuery1->Active=true;
				   a[1]="����� �/�";
				   a[2]="�����";
				   a[3]="����";
				   a[4]="������� �� ������";
				   a[5]="����� ������";
				   a[6]="������� �� �����";
				   a[7]="����� �����";
				   a[8]="����������";
				   a[9]="�����";
				   b[1]="bludo";
				   b[2]="cena";
				   b[3]="ostnach";
				   b[4]="sumnach";
				   b[5]="ostkon";
				   b[6]="sumcon";
				   b[7]="kolvo";
				   b[8]="summa";
				   b[9]="id_prib";
				   adtotab(9, StringGrid1);
				   break;
		   case 6:
					ADOQuery1->SQL->Text="delete from prihodblud2 where id_prib=:id_prib";
					ADOQuery1->Parameters->ParamByName("id_prib")->Value=StringGrid1->Cells[9][StringGrid1->Row];
					ADOQuery1->ExecSQL();
					zap(20,1);
					break;
		   case 7:
					ADOQuery1->SQL->Text="delete from prihodblud2 where data=:data and kuda=:kuda";
					ADOQuery1->Parameters->ParamByName("data")->Value=DateTimePicker5->Date.DateString();
					ADOQuery1->Parameters->ParamByName("kuda")->Value=kuda;
					ADOQuery1->ExecSQL();
					break;
		 }
		 break;
 }
}

void TForm1::adtotab(int X,  TStringGrid *StringGrid1)
{
StringGrid1->ColCount=X;
StringGrid1->ColWidths[0]=57;
StringGrid1->ColWidths[1]=400;
StringGrid1->Cells[0][0]=a[1];
StringGrid1->Cells[1][0]=a[2];
StringGrid1->Cells[2][0]=a[3];
StringGrid1->Cells[3][0]=a[4];
StringGrid1->Cells[4][0]=a[5];
StringGrid1->Cells[5][0]=a[6];
StringGrid1->Cells[6][0]=a[7];
StringGrid1->Cells[7][0]=a[8];
StringGrid1->Cells[8][0]=a[9];
StringGrid1->Cells[9][0]=a[10];
StringGrid1->Cells[10][0]=a[11];
StringGrid1->Cells[11][0]=a[12];
StringGrid1->Cells[12][0]=a[13];
StringGrid1->Cells[13][0]=a[14];
StringGrid1->Cells[14][0]=a[15];
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


void TForm1::adtotab2(int X,  TStringGrid *StringGrid1)
{
StringGrid1->ColCount=X;
StringGrid1->Cells[0][0]=a[1];
StringGrid1->Cells[1][0]=a[2];
StringGrid1->Cells[2][0]=a[3];
StringGrid1->Cells[3][0]=a[4];
StringGrid1->Cells[4][0]=a[5];
StringGrid1->Cells[5][0]=a[6];
StringGrid1->Cells[6][0]=a[7];
StringGrid1->Cells[7][0]=a[8];
StringGrid1->Cells[8][0]=a[9];
StringGrid1->Cells[9][0]=a[10];
StringGrid1->Cells[10][0]=a[11];
StringGrid1->Cells[11][0]=a[12];
StringGrid1->Cells[12][0]=a[13];
StringGrid1->Cells[13][0]=a[14];
StringGrid1->Cells[14][0]=a[15];
int i=1;
StringGrid1->RowCount=ADOQuery1->RecordCount+1;
  if (StringGrid1->RowCount>1)
  {
  StringGrid1->FixedCols=0;
  StringGrid1->FixedRows=1;
  }
  ADOQuery1->First();
  while (!ADOQuery1->Eof)
  {
	for (int j= 0; j<10; j++)
	{
	try
	{
	if (b[j+1]!="0") StringGrid1->Cells[j][i]=Trim(ADOQuery1->FieldByName(b[j+1])->Value);
	} catch(...){}
	}
	i++;
	ADOQuery1->Next();
  }
}

void TForm1::adtotab2plus(int X,  TStringGrid *StringGrid1)
{
ADOQuery1->First();
  while (!ADOQuery1->Eof)
  {
	for (int j= 0; j<10; j++)
	{
	try
	{
	if (b[j+1]!="0")
		{
		StringGrid1->Cells[j][StringGrid1->RowCount]=Trim(ADOQuery1->FieldByName(b[j+1])->Value);
		}
	} catch(...){}
	}
	StringGrid1->RowCount=StringGrid1->RowCount+1;
	ADOQuery1->Next();
  }
}


void TForm1::adtocb(TComboBox *cb, String val1)
{
cb->Items->Clear();
ADOQuery1->First();
while (!ADOQuery1->Eof){
 cb->Items->Add(Trim(ADOQuery1->FieldByName(val1)->Value));
 ADOQuery1->Next();
}
}

void TForm1::adtolb(TStringGrid *StringGrid1, String val1, String val2, String val3)
{
StringGrid1->RowCount=ADOQuery1->RecordCount;
StringGrid1->ColCount=2;
int i=0;
ADOQuery1->First();
while (!ADOQuery1->Eof)
{
StringGrid1->Cells[0][i]=Trim(ADOQuery1->FieldByName(val1)->Value);
StringGrid1->Cells[1][i]=val3;
StringGrid1->Cells[2][i]=Trim(ADOQuery1->FieldByName(val2)->Value);
i++;
ADOQuery1->Next();
  }
}


void TForm1::adtolbplus(TStringGrid *StringGrid1, String val1, String val2, String val3)
{
ADOQuery1->First();
while (!ADOQuery1->Eof)
{
StringGrid1->RowCount=StringGrid1->RowCount+1;
StringGrid1->Cells[0][StringGrid1->RowCount-1]=Trim(ADOQuery1->FieldByName(val1)->Value);
StringGrid1->Cells[1][StringGrid1->RowCount-1]=val3;
StringGrid1->Cells[2][StringGrid1->RowCount-1]=Trim(ADOQuery1->FieldByName(val2)->Value);
ADOQuery1->Next();
  }
}


void __fastcall TForm1::FormActivate(TObject *Sender)
{
DateTimePicker1->Date=Date();
DateTimePicker2->Date=Date();
DateTimePicker3->Date=Date();
DateTimePicker4->Date=Date();
DateTimePicker5->Date=Date();
zap(1,4);
Panel15->Width=Screen->Width;
Panel15->Height=Screen->Height;
Panel15->Left=0;
Panel15->Top=0;
Panel15->Visible=true;
Panel16->Left=Form1->Width/2-Panel16->Width/2;
Panel16->Top=Form1->Height/2-Panel16->Height/2;
Panel11->Visible=false;
Panel4->Visible=false;

Panel17->Visible=false;
Panel21->Visible=false;
StringGrid1->Visible=false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
tab=1;
zap(tab,1);
Edit1->Text=StringGrid1->Cells[1][StringGrid1->Row];
Edit2->Text="";
ComboBox1->Text=StringGrid1->Cells[2][StringGrid1->Row];
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button6Click(TObject *Sender)
{
ComboBox5->Visible=true;
tab=3;
zap(tab,1);
zap(8,1);
Edit1->Text=StringGrid1->Cells[1][StringGrid1->Row];
Edit2->Text=StringGrid1->Cells[2][StringGrid1->Row];
ComboBox1->Text=StringGrid1->Cells[3][StringGrid1->Row];
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{
tab=2;
zap(tab,1);
Edit1->Text=StringGrid1->Cells[1][StringGrid1->Row];
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
zap(tab, 3);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
zap(tab,2);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button7Click(TObject *Sender)
{
tab=4;
zap(tab,1);
Edit1->Text=StringGrid1->Cells[1][StringGrid1->Row];
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button8Click(TObject *Sender)
{
tab=5;
zap(tab,1);
Edit1->Text=StringGrid1->Cells[1][StringGrid1->Row];
Edit2->Text=StringGrid1->Cells[2][StringGrid1->Row];
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button9Click(TObject *Sender)
{
Label4->Visible=true;
Edit8->Visible=true;
tab=6;
zap(tab,1);
Edit1->Text=StringGrid1->Cells[1][StringGrid1->Row];
Edit2->Text=StringGrid1->Cells[2][StringGrid1->Row];
ComboBox1->Text=StringGrid1->Cells[3][StringGrid1->Row];
ComboBox2->Text=StringGrid1->Cells[4][StringGrid1->Row];
Edit3->Text=StringGrid1->Cells[5][StringGrid1->Row];
zap(4,9);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button10Click(TObject *Sender)
{
Label4->Visible=true;
Edit8->Visible=true;
tab=7;
zap(tab,1);
zap(4,9);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button11Click(TObject *Sender)
{
StringGrid2->RowCount=StringGrid2->RowCount+1;
StringGrid2->FixedRows=1;
StringGrid2->Cells[0][StringGrid2->RowCount-1]=StringGrid3->Cells[0][StringGrid3->Row];
StringGrid2->Cells[1][StringGrid2->RowCount-1]=Edit4->Text;
StringGrid2->Cells[2][StringGrid2->RowCount-1]=StringGrid3->Cells[1][StringGrid3->Row];
StringGrid2->Cells[3][StringGrid2->RowCount-1]=StringGrid3->Cells[2][StringGrid3->Row];
StringGrid2->Cells[4][StringGrid2->RowCount-1]=StringGrid3->Cells[3][StringGrid3->Row];
//StringGrid2->ColCount=10;
//StringGrid3->ColCount=10;
}
//---------------------------------------------------------------------------

class TPublicGrid: public  TStringGrid
{
	public:
		using TStringGrid::DeleteRow;
};

void __fastcall TForm1::Button12Click(TObject *Sender)
{
((TPublicGrid*)StringGrid2)->DeleteRow(StringGrid2->Row);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::StringGrid1Click(TObject *Sender)
{
switch (tab)
 {
	case 1:
			Edit1->Text=StringGrid1->Cells[1][StringGrid1->Row];
			Edit2->Text="";
			ComboBox1->Text=StringGrid1->Cells[2][StringGrid1->Row];
			break;
	case 2:
			Edit1->Text=StringGrid1->Cells[1][StringGrid1->Row];
			break;
	case 3:
			zap(8,1);
			Label8->Caption=StringGrid1->Cells[1][StringGrid1->Row];
			Edit1->Text=StringGrid1->Cells[1][StringGrid1->Row];
			Edit2->Text=StringGrid1->Cells[2][StringGrid1->Row];
			ComboBox1->Text=StringGrid1->Cells[3][StringGrid1->Row];
			break;
	case 4:
			Edit1->Text=StringGrid1->Cells[1][StringGrid1->Row];
			break;
	case 5:
			Edit1->Text=StringGrid1->Cells[1][StringGrid1->Row];
			Edit2->Text=StringGrid1->Cells[2][StringGrid1->Row];
			break;
	case 6:
			Edit1->Text=StringGrid1->Cells[1][StringGrid1->Row];
			Edit2->Text=StringGrid1->Cells[2][StringGrid1->Row];
			ComboBox1->Text=StringGrid1->Cells[3][StringGrid1->Row];
			ComboBox2->Text=StringGrid1->Cells[4][StringGrid1->Row];
			Edit3->Text=StringGrid1->Cells[5][StringGrid1->Row];
			break;
	case 9:
			Label8->Caption=StringGrid1->Cells[1][StringGrid1->Row];
			break;
	case 10:
			zap(11,1);
			break;
	case 12:
			zap(13,1);
			Label8->Caption=StringGrid1->Cells[1][StringGrid1->Row];
			Edit1->Text=StringGrid1->Cells[1][StringGrid1->Row];
			Edit2->Text=StringGrid1->Cells[2][StringGrid1->Row];
			break;
	case 17:
			zap(18,1);
			Label8->Caption=StringGrid1->Cells[1][StringGrid1->Row];
			Edit1->Text=StringGrid1->Cells[1][StringGrid1->Row];
			Edit2->Text=StringGrid1->Cells[2][StringGrid1->Row];
			Edit3->Text=StringGrid1->Cells[3][StringGrid1->Row];
			break;
 }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button14Click(TObject *Sender)
{
ComboBox5->Visible=false;
Button16->Caption="�������";
tab=9;
zap(tab,1);
zap(4,9);
zap(14,1);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
zap(tab,6);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button13Click(TObject *Sender)
{
Label8->Caption=StringGrid1->Cells[1][StringGrid1->Row];
Panel11->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button15Click(TObject *Sender)
{
Panel11->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button16Click(TObject *Sender)
{
double a, b, c;
if (tab==9){zap(tab,7); }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button17Click(TObject *Sender)
{
Edit4->Text="0";
Panel10->Visible=!Panel10->Visible;
if (tab==3) {
zap(8,1);
}
if (tab==12) {
zap(13,1);
}
if (tab==17) {
zap(18,1);
}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button18Click(TObject *Sender)
{
tab=17;
zap(tab,1);
Edit1->Text=StringGrid1->Cells[1][StringGrid1->Row];
Edit2->Text=StringGrid1->Cells[2][StringGrid1->Row];
Edit3->Text=StringGrid1->Cells[3][StringGrid1->Row];
zap(18,1);
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button20Click(TObject *Sender)
{
if (tab==15) {
zap(16,7);
zap(16,1);
}
if (tab==19) {
zap(20,7);
zap(20,1);
}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::FormResize(TObject *Sender)
{
Panel16->Left=Form1->Width/2-Panel16->Width/2;
Panel16->Top=Form1->Height/2-Panel16->Height/2;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button22Click(TObject *Sender)
{
l=ComboBox3->Text;
p=Edit7->Text;
zap(1,5);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button23Click(TObject *Sender)
{
zap(1,4);
Panel15->Width=Screen->Width;
Panel15->Height=Screen->Height;
Panel15->Left=0;
Panel15->Top=0;
Panel15->Visible=true;
Panel16->Left=Form1->Width/2-Panel16->Width/2;
Panel16->Top=Form1->Height/2-Panel16->Height/2;
Panel11->Visible=false;
Panel18->Visible=false;
Panel17->Visible=false;
Panel4->Visible=false;
StringGrid1->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn1Click(TObject *Sender)
{
if (tab==6) {
zap(6, 7);
double xc, yc, ac, bc;
xc=0;
yc=0;
ac=0;
bc=0;
for (int i = 1; i < StringGrid1->RowCount; i++) {
yc=StringGrid1->Cells[6][i].ToDouble();
xc=xc+yc;
bc=StringGrid1->Cells[5][i].ToDouble();
ac=bc+ac;
}
String xx=xc;
String xy=ac;
Label13->Caption="�����: "+xx+" "+"����������: "+xy;
}
if (tab==7) {
zap(7, 7);
double xc, yc, ac, bc;
xc=0;
yc=0;
ac=0;
bc=0;
for (int i = 1; i < StringGrid1->RowCount; i++) {
yc=StringGrid1->Cells[6][i].ToDouble();
xc=xc+yc;
bc=StringGrid1->Cells[5][i].ToDouble();
ac=bc+ac;
}
String xx=xc;
String xy=ac;
Label13->Caption="�����: "+xx+" "+"����������: "+xy;
}
if (tab==9) {
zap(9, 8);
double xc, yc, ac, bc;
xc=0;
yc=0;
ac=0;
bc=0;
for (int i = 1; i < StringGrid1->RowCount; i++) {
yc=StringGrid1->Cells[6][i].ToDouble();
xc=xc+yc;
bc=StringGrid1->Cells[5][i].ToDouble();
ac=bc+ac;
}
String xx=xc;
String xy=ac;
Label18->Caption="�����: "+xx+" "+"����������: "+xy;
}
if (tab==10) {
zap(10, 8);
double xc;
xc=0;
for (int i = 1; i < StringGrid1->RowCount; i++) {
xc=xc+StringGrid1->Cells[2][i].ToDouble();
}
String xx=xc;
Label18->Caption="�����: "+xx;
}
if (tab==12) {
zap(12, 7);
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormClick(TObject *Sender)
{
DateTimePicker1->Date=Date();
DateTimePicker2->Date=Date();
DateTimePicker3->Date=Date();
DateTimePicker4->Date=Date();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button24Click(TObject *Sender)
{
tab=12;
zap(tab,1);
Edit1->Text=StringGrid1->Cells[1][StringGrid1->Row];
Edit2->Text=StringGrid1->Cells[2][StringGrid1->Row];
zap(13,1);
}
//---------------------------------------------------------------------------




void __fastcall TForm1::Button28Click(TObject *Sender)
{
zap(10,7);
}
//---------------------------------------------------------------------------







void __fastcall TForm1::Button21Click(TObject *Sender)
{
tab=15;
zap(tab,1);
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button29Click(TObject *Sender)
{
if (tab==15) {
double bx=0;
for (int i = 1; i < StringGrid1->RowCount; i++) {
double r=0;
r=StringGrid1->Cells[3][i].ToDouble()*StringGrid1->Cells[4][i].ToDouble();
StringGrid1->Cells[5][i]=r;
bx=bx+r;
}
String gx=bx;
Label20->Caption=" �����: "+gx+"  ";
}
if (tab==19) {
double bx=0;
for (int i = 1; i < StringGrid1->RowCount; i++) {
double r=0;
r=StringGrid1->Cells[3][i].ToDouble()-StringGrid1->Cells[5][i].ToDouble();
StringGrid1->Cells[6][i]=StringGrid1->Cells[5][i].ToDouble()*StringGrid1->Cells[2][i].ToDouble();
StringGrid1->Cells[7][i]=r;
StringGrid1->Cells[8][i]=r*StringGrid1->Cells[2][i].ToDouble();
bx=bx+StringGrid1->Cells[8][i].ToDouble();
}
String gx=bx;
Label20->Caption=" �����: "+gx+"  ";
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button30Click(TObject *Sender)
{
kuda="������";
zap(tab,8);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button31Click(TObject *Sender)
{
kuda="���������";
zap(tab,8);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button33Click(TObject *Sender)
{
kuda="������";
if (tab==15) {
zap(16,1);
}
if (tab==19) {
zap(20,1);
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button32Click(TObject *Sender)
{
kuda="���������";
if (tab==15) {
zap(16,1);
}
if (tab==19) {
zap(20,1);
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button34Click(TObject *Sender)
{
zap(tab,1);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button19Click(TObject *Sender)
{
tab=19;
zap(tab,1);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button25Click(TObject *Sender)
{
Variant v;
vVarApp=CreateOleObject("Word.Application");
vVarApp.OlePropertySet("Visible",true);
vVarDocs=vVarApp.OlePropertyGet("Documents");
vVarDocs.OleProcedure("Add");
vVarDoc=vVarDocs.OleFunction("Item",1);
vVarDoc.OleProcedure("Activate");
vVarParagraphs=vVarDoc.OlePropertyGet("Paragraphs");
vVarParagraphs.OleProcedure("Add");
vVarParagraph=vVarParagraphs.OleFunction("Item",1);
vVarParagraph.OlePropertySet("Alignment",1);
vVarRange = vVarParagraph.OlePropertyGet("Range");
int x=StringGrid1->RowCount;
int y=StringGrid1->ColCount;
vVarDoc.OlePropertyGet("Tables").OleProcedure("Add", vVarRange, x, y,1,1);
vVarTable=vVarDoc.OlePropertyGet("Tables").OleFunction("Item",1);
vVarTable.OlePropertyGet("Rows").OlePropertySet("Alignment",1);
vVarTable.OleFunction("AutoFitBehavior",2);
vVarApp.OlePropertyGet("ActiveWindow").OlePropertyGet("View").OlePropertySet("TableGridlines",true);
for (int j = 0; j < StringGrid1->RowCount; j++) {
for (int i = 0; i < StringGrid1->ColCount; i++) {
vVarCell=vVarTable.OleFunction("Cell",j+1,i+1);
vVarCell.OleFunction("Select");
v = vVarApp.OlePropertyGet("Selection").OlePropertyGet("Font");
v.OlePropertySet("Size",10);
str=StringGrid1->Cells[i][j];
vVarCell.OlePropertyGet("Range").OlePropertySet("Text",str);
}
}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button26Click(TObject *Sender)
{
zap(7, 77);
}
//---------------------------------------------------------------------------

