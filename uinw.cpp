//---------------------------------------------------------------------------

#pragma hdrstop

//---------------------------------------------------------------------------

#include <fstream.h>
#include <conio.h>
#include <iostream.h>
#include <stdio.h>

main()
{
int uin;
char buffer[1024];
cout << "UIN?";
cin >> uin;
ofstream f;
ifstream r;
r.open("words.txt");
f.open("source.txt");
r.getline(buffer,1024);
while(!r.eof())
{
f << uin << ";" << buffer << endl;
r.getline(buffer,1024);
}
}
//---------------------------------------------------------------------------
