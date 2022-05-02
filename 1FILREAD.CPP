#include<fstream.h>
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char ch;
//char text[100];
ifstream fin;
fin.open("HELLO.txt");
//fin>>ch;  //fin with >> takes space as delimiter and not read it hence space not printed
ch=fin.get();

/*fin.getline(text,100);
cout<<text;
while(!fin.eof())
{
fin.getline(text,100);
cout<<text;
}*/
while(!fin.eof())
{
cout<<ch;
//fin>>ch;
ch=fin.get();
}
fin.close();
/*ofstream fout;
fout.open("Hello.txt");
fout<<"Hello Harsh \nSamyak";
fout.close();*/
getch();
}