#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y)
{
COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}
void border(){
int x;
	gotoxy(8,1); //upper border
	for(x=1; x<=78; x++){
		cout<<"-";
	}
	gotoxy(8,2); //right border
	gotoxy(8,2);
	cout<<"*"<<endl;
	gotoxy(8,3);
	cout<<"*"<<endl;
	gotoxy(8,4);
	cout<<"*"<<endl;
	gotoxy(8,5);
	cout<<"*"<<endl;
	gotoxy(8,6);
	cout<<"*"<<endl;
	gotoxy(8,7);
	cout<<"*"<<endl;
	gotoxy(8,8);
	cout<<"*"<<endl;
	gotoxy(8,9);
	cout<<"*"<<endl;
	gotoxy(8,10);
	cout<<"*"<<endl;
	gotoxy(8,11);
	cout<<"*"<<endl;
	gotoxy(8,12);
	cout<<"*"<<endl;
	gotoxy(8,13);
	cout<<"*"<<endl;
	gotoxy(8,14);
	cout<<"*"<<endl;
	gotoxy(8,15);
	cout<<"*"<<endl;
	gotoxy(8,16);
	cout<<"*"<<endl;
	gotoxy(8,17);
	cout<<"*"<<endl;
	gotoxy(8,18);
	cout<<"*"<<endl;
	gotoxy(8,19);
	cout<<"*"<<endl;
	gotoxy(8,20);
	cout<<"*"<<endl;
	gotoxy(8,21);
	cout<<"*"<<endl;

	gotoxy(85,2);//Left border
	cout<<"*"<<endl;
	gotoxy(85,3);
	cout<<"*"<<endl;
	gotoxy(85,4);
	cout<<"*"<<endl;
	gotoxy(85,5);
	cout<<"*"<<endl;
	gotoxy(85,6);
	cout<<"*"<<endl;
	gotoxy(85,7);
	cout<<"*"<<endl;
	gotoxy(85,8);
	cout<<"*"<<endl;
	gotoxy(85,9);
	cout<<"*"<<endl;
	gotoxy(85,10);
	cout<<"*"<<endl;
	gotoxy(85,11);
	cout<<"*"<<endl;
	gotoxy(85,12);
	cout<<"*"<<endl;
	gotoxy(85,13);
	cout<<"*"<<endl;
	gotoxy(85,14);
	cout<<"*"<<endl;
	gotoxy(85,15);
	cout<<"*"<<endl;
	gotoxy(85,16);
	cout<<"*"<<endl;
	gotoxy(85,17);
	cout<<"*"<<endl;
	gotoxy(85,18);
	cout<<"*"<<endl;
	gotoxy(85,19);
	cout<<"*"<<endl;
	gotoxy(85,20);
	cout<<"*"<<endl;
	gotoxy(85,21);
	cout<<"*"<<endl;

	int i; //bottom border
	gotoxy(8,21);
	for(i=1; i<=78; i++){
		cout<<"-";
	}
}
int main(){
    char input;
    border();
    gotoxy(38,2);
    cout<<"MAIN MENU"<<endl;
   gotoxy(15,4);
   cout<<"[1] Input Statement"<<endl;
   gotoxy(15,6);
   cout<<"[2] Conditional Statement"<<endl;
   gotoxy(15,8);
   cout<<"[3] Iterative Statement"<<endl;
   gotoxy(38,10);
   cout<<"[7] Exit"<<endl;
   gotoxy(45,4);
   cout<<"[4] Function and Structured Program"<<endl;
   gotoxy(45,6);
   cout<<"[5] Recursion"<<endl;
   gotoxy(45,8);
   cout<<"[6] Project"<<endl;
   gotoxy(35,14);
   cout<<"Select [1-7]: "; cin>>input; cout<<endl;
   gotoxy(32,16);
   cout<<"JUSTINIAN L. MELECIO" <<endl;
   gotoxy(32,17);
   cout<<"--------------------" <<endl;
   gotoxy(37,18);
   cout<<"PROGRAMMER" <<endl;
   cout<<endl;
   gotoxy(30,20);
   system ("pause");
   system("CLS");


if (input=='1')
    {
        system ("cls");
        float kW, watts;
        cout<<"KILOWATTS TO WATTS"               <<endl;
        cout<<endl;
        cout<<"Input number of kilowatt: ";
        cin>>kW;
        watts=kW*1000;
        cout<<"Equivalent measure to watts: " <<watts <<endl;
    }

else if (input=='2')
    {
    system ("cls");
    float num1,num2,num3,num4,num5,a;

    cout<<"HIGHEST AND LOWEST NUMBER" <<endl;
    cout<<endl;
    cout<<"Enter 1st number: "; cin>>num1;
    cout<<"Enter 2nd number: "; cin>>num2;
    cout<<"Enter 3rd number: "; cin>>num3;
    cout<<"Enter 4th number: "; cin>>num4;
    cout<<"Enter 5th number: "; cin>>num5;

    cout<<endl;

    if (num1<num2&&num1<num3&&num1<num4&&num1<num5)
    cout<<num1 <<" is the smallest number" <<endl;
    else
    if (num2<num1&&num2<num3&&num2<num4&&num2<num5)
    cout<<num2 <<" is the smallest number" <<endl;
    else
    if (num3<num1&&num3<num2&&num3<num4&&num3<num5)
    cout<<num3 <<" is the smallest number" <<endl;
    else
    if (num4<num1&&num4<num2&&num4<num3&&num4<num5)
    cout<<num4 <<" is the smallest number" <<endl;
    else
    if (num5<num1&&num5<num2&num5<num3&&num5<num4)
    cout<<num5 <<" is the smallest number" <<endl;



    if (num1>num2&&num1>num3&&num1>num4&&num1>num5)
    cout<<num1 <<" is the highest number" <<endl;
    else
    if (num2>num1&&num2>num3&&num2>num4&&num2>num5)
    cout<<num2 <<" is the highest number" <<endl;
    else
    if (num3>num1&&num3>num2&&num3>num4&&num3>num5)
    cout<<num3 <<" is the highest number" <<endl;
    else
    if (num4>num1&&num4>num2&&num4>num3&&num4>num5)
    cout<<num4 <<" is the highest number" <<endl;
    else
    if (num5>num1&&num5>num2&num5>num3&&num5>num4)
    cout<<num5 <<" is the highest number" <<endl;

else if (input=='3')
    {
    system ("cls");
    int n;
    int a=1;

    cout<<"FIRST n EVEN NUMBERS" <<endl;
    cout<<endl;
    cout<<"Enter a number: "; cin>>n;
    cout<<"The first " <<n <<" even numbers are: ";

       {
           for(a=1;a<=n;a++)
            cout<<a*2 <<",";
        }
    cout<<endl;
    }



else if (input=='7')
    {cout<<"Thank you for your time"<<endl;
}


}
}


