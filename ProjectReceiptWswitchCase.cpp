#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x,int y)
    {

        COORD coord;
        coord.X = x;
        coord.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    }

int main()
{
    float amount, deduction, total;
    float cBalance, aBalance;
    int day,year;
    char month;

   gotoxy(45,2);
    cout<<"RCBC" <<endl;
     gotoxy(44,4);
      cout<<"BANCNET" <<endl;
       gotoxy(31,5);
        cout<<"RIZAL COMMERCIAL BANKING CORPORATION" <<endl;
         gotoxy(39,6);
          cout<<"TRANSACTION RECORD" <<endl;
 {
   gotoxy(31,8);
    cout<<"DATE" <<endl;
     gotoxy(31,9);
      cout<<"Day: "; cin>>day;
       gotoxy(31,10);
        cout<<"Month: "; cin>>month;
         gotoxy(31,11);
          cout<<"Year: "; cin>>year;

    switch (month)
{
case 1:
    cout<<"Jan";
    break;
case 2:
    cout<<"Feb";
    break;
case 3:
    cout<<"Mar";
    break;
case 4:
    cout<<"April";
    break;
case 5:
    cout<<"May";
    break;
case 6:
    cout<<"June";
    break;
case 7:
    cout<<"July";
    break;
case 8:
    cout<<"Aug";
    break;
case 9:
    cout<<"Sept";
    break;
case 10:
    cout<<"Oct";
    break;
case 11:
    cout<<"Nov";
    break;
case 12:
    cout<<"Dec";
    break;
default:
    cout<<"0";
}
             system("cls");
    gotoxy(45,2);
     cout<<"RCBC" <<endl;
      gotoxy(44,4);
       cout<<"BANCNET" <<endl;
        gotoxy(31,5);
         cout<<"RIZAL COMMERCIAL BANKING CORPORATION" <<endl;
          gotoxy(39,6);
           cout<<"TRANSACTION RECORD" <<endl;
            gotoxy(26,8);
             cout<<"DATE    \t  \t" <<"TIME \t LOCATION" <<endl;
              gotoxy(26,9);
               cout<<day <<"-" <<month <<"-" <<year <<"\t  19:00    BUTUAN 2" <<endl;
}
     gotoxy(26,11);
      cout<<"TRANSACTION \t  \t  \t AMOUNT" <<endl;
       gotoxy(26,12);
        amount=1000;
         cout<<"CASH WITHDRAWAL \t  \t " <<amount <<endl;
          gotoxy(26,14);
           cout<<"CURRENT BALANCE    \t  AVAILABLE BALANCE" <<endl;
            gotoxy(26,15);
            cBalance=2181.50;
            aBalance=2181.50;
            cout<<"PHP "  <<cBalance <<"\t \t  PHP " <<aBalance <<endl;
             gotoxy(26,17);
             cout<<"TRANSACTION FEE  :   PHP 18.00" <<endl;
             gotoxy(26,18);
             total=amount+18;
             cout<<"TOTAL \t   :    PHP " <<total <<endl;

     gotoxy(26,19);
     cout<<"TRACE NUMBER     :   152710" <<endl;
     gotoxy(26,20);
     cout<<"APPLICATION      :   A0000000041010" <<endl;
     gotoxy(26,21);
     cout<<"APPLICATION LABEL:   DEBIT MASTER CARD" <<endl;
     gotoxy(26,23);
     cout<<"*FOR ALL CARDS ISSUED ABROAD, THE" <<endl;
     gotoxy(26,24);
     cout<<"TRANSACTION AMOUNT IS EXCLUSIVE OF A" <<endl;
     gotoxy(26,25);
     cout<<"PHP250 ACCESS FEE." <<endl;
     gotoxy(26,26);
     cout<<"*FOR NON-RCBC LOCALLY ISSUED CARDS, " <<endl;
     gotoxy(26,27);
     cout<<"AN ATM FEE OF PHP18 IS ALREADY" <<endl;
     gotoxy(26,28);
     cout<<"INCLUDED IN THE TRANSACTION AMOUNT" <<endl;
     gotoxy(26,29);
     cout<<"*FOR ATM INQUIRIES PLS CALL 8877-72222" <<endl;



}


