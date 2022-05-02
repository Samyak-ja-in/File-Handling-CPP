//seekg seekp
#include<conio.h>
#include<iostream.h>
#include<fstream.h>
void main()
{clrscr();
ofstream fout;
int opos;
fout.open("ZHello.txt",ios::ate);
opos=fout.tellp();
cout<<opos;
fout.seekp(5);
opos=fout.tellp();
cout<<opos;
fout<<"Jain";
opos=fout.tellp();
cout<<opos;
fout.seekp(-7,ios::cur);
cout<<"posiition is "<<fout.tellp();
fout.close();
ifstream fin;
fin.open("ZHello.txt");
int ipos;
char ch;
ipos=fin.tellg();
cout<<"\nInitially get pointer position";
cout<<ipos;
fin>>ch;
ipos=fin.tellg();
cout<<"\n After reading position "<<ipos;
fin.seekg(5);
cout<<"\n";
while(!fin.eof())
{ipos=fin.tellg();
cout<<ipos;
ch=fin.get();
cout<<ch<<"\t";
}
fin.seekg(5,ios::beg);
ipos=fin.tellg();
cout<<"\n"<<ipos;
fin.close();






getch();
}
