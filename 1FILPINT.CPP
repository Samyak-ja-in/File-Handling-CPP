//tellg tellp illustration
#include<conio.h>
#include<iostream.h>
#include<fstream.h>
void main()
{
clrscr();
int opos;
ofstream fout;
fout.open("ZHello.txt");
cout<<"On opening file put pointer points to\n";
opos=fout.tellp();
cout<<opos;
fout<<"Hello";
opos=fout.tellp();
cout<<"\n After writing Hello put pointer points to";
cout<<"\n"<<opos;
fout.close();
cout<<"\nReading of file started";
ifstream fin("ZHello.txt");
int ipos;
char ch;
while(!fin.eof())
{ipos=fin.tellg();
cout<<"\t"<<ipos;
ch=fin.get();
cout<<ch;
}
fin.close();
fout.open("ZHello.txt",ios::app);
opos=fout.tellp();
cout<<"\nAppending started put pointer points to";
cout<<"\n"<<opos;
fout<<" Samyak";
opos=fout.tellp();
cout<<"\n After appending put pointer points to";
cout<<"\n"<<opos;
fout.close();
//ifstream fin;
fin.open("ZHello.txt");
cout<<"\nGet pointer after appending";
while(!fin.eof())
{ipos=fin.tellg();
cout<<"\t"<<ipos;
ch=fin.get();
cout<<ch;
}
fin.close();
getch();
}