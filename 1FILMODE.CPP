#include<conio.h>
#include<iostream.h>
#include<fstream.h>
void main()
{
clrscr();
ofstream fout;
fout.open("ZState.txt",ios::app|ios::nocreate);
fout<<"\n"<<"Appended";   //fout.close() nahi kiya hence o/p me ye line nhi dikhegi
ifstream fin("ZState.txt",ios::in);
char ch;
ch=fin.get();
while(!fin.eof())
{cout<<ch;
ch=fin.get();}
fin.close();
fout.close();
getch();
}