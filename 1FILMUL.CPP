#include<iostream.h>
#include<fstream.h>
#include<conio.h>
void main()
{
ofstream fout;
fout.open("Harsh.txt");
fout<<"Hello this is Harsh";
fout.close();
fout.open("Samyak.txt");
fout<<"Hello this is Samyak";
fout.close();
fout.open("Samyak.txt",ios::app);
fout<<"\nThe End";
fout.close();
getch();
}