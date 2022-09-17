//---------------------------------------------------------------------------

#ifndef passgen0H
#define passgen0H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include "CSPIN.h"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TEdit *Edit1;
        TCheckBox *num;
        TCheckBox *lat;
        TCheckBox *rus;
        TCheckBox *sym;
        TTrackBar *len0;
        TEdit *Edit2;
        TLabel *Label1;
        TImage *Image1;
        TCheckBox *reg1;
        TCheckBox *file0;
        TLabel *Label2;
        TCSpinEdit *times;
        TLabel *Label3;
        TLabel *Label4;
        void __fastcall Image1Click(TObject *Sender);
        void __fastcall len0Change(TObject *Sender);
        void __fastcall file0Click(TObject *Sender);
        void __fastcall Label4Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
