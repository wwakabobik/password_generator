//---------------------------------------------------------------------------

#pragma hdrstop

//---------------------------------------------------------------------------

#pragma argsused
#include <conio.h>
#include <fstream.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
char alphabeet[]="0123456789qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLMNBVCXZ<>.,?\/\\\'\";:[]{}=-_+)(*&^%$#@!~` ";
/* Алфавит можно модифицировать по желанию, включая, например русские буквы, и
исключая символы... как душе угодно... */
ofstream w;
char tempchar;
int i=0;
while (temphar!=' ') //длина алфавита
{
tempchar=alphabeet[i];
i++;
}
length=i; //95
w.open("passlist.txt",ios::app);
char output[9];

int i, a1, a2, a3, a4, a5, a6, a7, a8, numchar;
/* Рассмотрен пример для перебора ВСЕХ восьмизначных комбинаций, одако, запустив, смежешь убедиться,
что сие чудо займет пару гигов текста)) Поэтому советую перебирать для 2, 3, 4 - символьных паролей... 
по нужде - бльше... Что бы это сделать закоментируй a8, a7 и т.п., которые в for'е, и в output'e. Удачи! */
for (a1=0; a1<length; a1++)
{
for (a2=0; a2<length; a2++)
{
for (a3=0; a3<length; a3++)
{
for (a4=0; a4<length; a4++)
{
for (a5=0; a5<length; a5++)
{
for (a6=0; a6<length; a6++)
{
for (a7=0; a7<length; a7++)
{
for (a8=0; a8<length; a8++)
{
output[0]=alphabeet[a1];
output[1]=alphabeet[a2];
output[2]=alphabeet[a3];
output[3]=alphabeet[a4];
output[4]=alphabeet[a5];
output[5]=alphabeet[a6];
output[6]=alphabeet[a7];
output[7]=alphabeet[a8];
output[8]='\0';
w << output << endl;
}
}
}
}
}
}
}
}
w.close();
        return 0;
}
//---------------------------------------------------------------------------
 