#include<conio.h>
#include<iostream.h>
#include<fstream.h>
#include<string.h>
void main()
{
char State[20];
char Capital[20];
int n,i=1;
ofstream fout;
fout.open("Table.txt");
cout<<"Enter number of states";
cin>>n;
/*for(i=1;i<n;i++)
{  */
cout<<"Enter a State and its Capital ";
cin.getline(State,20);
cin.getline(Capital,20);
fout<<State;
/*while(!(int(fout.tellp())==23))
{fout<<" ";} */
fout.seekp(23);
fout<<Capital;
fout<<"\n";
//}
getch();
}
