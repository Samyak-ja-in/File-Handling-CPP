#include<conio.h>
#include<iostream.h>
#include<fstream.h>
void main()
{
ofstream fout;
fout.open("ZHello.txt");
cout<<"Opened Zhello.txt";
getch();
fout<<"Hello Samyak";
cout<<"\n Written data to ZHello.txt";
getch();
fout.close();
cout<<"Closed ZHello.txt";
getch();
}
