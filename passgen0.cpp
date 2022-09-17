//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "passgen0.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "CSPIN"
#pragma resource "*.dfm"
#include <fstream.h>
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image1Click(TObject *Sender)
{
int numc=1;
if (file0->Checked && times->Value!=0)
{
numc=times->Value+1;
}
char tempfile[]="passes.txt";
WideString t="0000000000000000000000000000000000000000000000000000000000000000";
int length=0, massiv[33], mas[5]={0,0,0,0,0}, stat=0,reg=0;
length=len0->Position;
if (reg=reg1->Checked)
reg=1;
if (num->Checked)
mas[1]=1;
if (sym->Checked)
mas[2]=1;
if (lat->Checked)
mas[3]=1;
if (rus->Checked)
mas[4]=1;
if (num->Checked || sym->Checked || lat->Checked || rus->Checked)
 {
 int j=0;
 randomize();
 while (numc!=0)
 {
 for (j=1;j<=length;j++)
  {
  stat=random(4)+1;
  while(mas[stat]==0)
  stat=random(4)+1;
   if (stat==1)
   t[j]=random(10)+48;
   else if (stat==2)
   {
   WideString s="?!+=-_)(*&^%$#@></|\\.,:;[]}{\'\"~`";
   int k;
   k=random(32)+1;
   t[j]=s[k];
   }
   else if (stat==3)
   {
   WideString l="qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
   int k;
   if (reg==0)
   k=random(26)+1;
   if (reg==1)
   k=random(52)+1;
   t[j]=l[k];
   }
   else if (stat==4)
   {
   WideString r="éöóêåíãøùçõúôûâàïðîëäæýÿ÷ñìèòüáþÉÖÓÊÅÍÃØÙÇÕÚÔÛÂÀÏÐÎËÄÆÝß×ÑÌÈÒÜÁÞ";
   int k;
   if (reg==0)
   k=random(32)+1;
   if (reg==1)
   k=random(64)+1;
   t[j]=r[k];
   }
  }
 t[j]='\0';  t[j+1]='\0';  t[j+2]='\0';  t[j+3]='\0';
 Edit1->Text=t;
 if (numc==1)
 numc=0;
 if (file0->Checked && times->Value!=0)
 {
 unsigned char tempword[33];
 int i=0;
 while (t[i+1]!='\0')
 {tempword[i]=t[i+1]; i++;}
 tempword[i]='\0';
 ofstream w;
 w.open(tempfile,ios::app);
 w << tempword << endl;
 w.close();
 if (numc!=0)
 numc--;
 }
 }
 }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::len0Change(TObject *Sender)
{
Edit2->Text=len0->Position;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::file0Click(TObject *Sender)
{
if (file0->Checked)
times->Enabled=true;
else
times->Enabled=false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Label4Click(TObject *Sender)
{
Form1->Close();
}
//---------------------------------------------------------------------------
