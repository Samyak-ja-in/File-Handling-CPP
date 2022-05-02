#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
int n,i;
char state[20];
char capital[20];
cout<<"Enter the number of states ";
cin>>n;
ofstream fout;
fout.open("ZState.txt");
//fout("State.txt");
for(i=0;i<n;i++)
{
cout<<"\nEnter the "<<i+1<<" state name ";
cin>>state;
//cin.getline(state,20);
fout<<state;
fout<<"\n";
}
fout.close();

//ofstream fout;
fout.open("ZCapital.txt");
for(i=0;i<n;i++)
{
cout<<"\nEnter the "<<i+1<<" capital name ";
cin>>capital;
fout<<capital;
fout<<"\n";
}
fout.close();
ifstream fin1;
ifstream fin2;
fin1.open("ZState.txt");
fin2.open("ZCapital.txt");
fout.open("ZCombine.txt");
fout<<"State  Capital\n";
char line[20];
while(!fin1.eof())
{
fin1.getline(line,20);
fout<<line;
while(!fin2.eof())
{fout<<"  ";
fin2.getline(line,20);
fout<<line;
break;}
fout<<"\n";
}
fout.close();
fin1.close();
fin2.close();
}



