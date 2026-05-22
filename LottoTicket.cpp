#include <iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y){

COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
{

int g1, g2, g3, g4, c1, c2, c3, c4, b1, b2, b3, b4, T, T2, choice;
cout<<"AGENT NAME: Arboleda, Rene"<<endl;
cout<<"BET DATE: JAN 5,2023" <<endl;
cout<<"BET TIME: 12:52 PM" <<endl;
cout<<"DRAW TIME: 2:00 PM" <<endl;
cout<<"TRANS CODE: 010523-d6abfc6e" <<endl;
cout<<"---------------------------------"<<endl;
cout<<"ENTER GAME:"<<endl;
cin>>g1;
cout<<"ENTER COMBINATION:"<<endl;
cin>>c1;
cout<<"ENTER BET:"<<endl;
cin>>b1;
system("CLS");
cout<<"ENTER GAME:"<<endl;
cin>>g2;
cout<<"ENTER COMBINATION:"<<endl;
cin>>c2;
cout<<"ENTER BET:"<<endl;
cin>>b2;
system("CLS");
cout<<"ENTER GAME:"<<endl;
cin>>g3;
cout<<"ENTER COMBINATION:"<<endl;
cin>>c3;
cout<<"ENTER BET:"<<endl;
cin>>b3;
system("CLS");
cout<<"ENTER GAME:"<<endl;
cin>>g4;
cout<<"ENTER COMBINATION:"<<endl;
cin>>c4;
cout<<"ENTER BET:"<<endl;
cin>>b4;


cout<<"GAME      COMBINATION       BET"<<endl;


cout<<"---------------------------------"<<endl;

gotoxy(2,8);
cout<<g1;
gotoxy(15,8);
cout<<c1;
gotoxy(29,8);
cout<<b1;
gotoxy(2,10);
cout<<g2;
gotoxy(15,10);
cout<<c2;
gotoxy(29,10);
cout<<b2;
gotoxy(2,12);
cout<<g3;
gotoxy(15,12);
cout<<c3;
gotoxy(29,12);
cout<<b3;
gotoxy(2,14);
cout<<g4;
gotoxy(15,14);
cout<<c4;
gotoxy(29,14);
cout<<b4;
gotoxy(0,15);
cout<<"---------------------------------"<<endl;
T=b1+b2+b3+b4;

if(T>=100){
    T2=T*0.8;
    gotoxy(29,16);
    cout<<"TOTAL: "<<T2<<endl;
}

} }
