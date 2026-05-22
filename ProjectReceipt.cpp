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
    float cBalance, aBalance, tBalance;

   gotoxy(43,2);
    cout<<"RCBC" <<endl;
     gotoxy(42,4);
      cout<<"BANCNET" <<endl;
       gotoxy(29,5);
        cout<<"RIZAL COMMERCIAL BANKING CORPORATION" <<endl;
         gotoxy(37,6);
          cout<<"TRANSACTION RECORD" <<endl;
            gotoxy(26,8);
             cout<<"DATE    \t  " <<"TIME \t LOCATION" <<endl;
              gotoxy(26,9);
               cout<<"31-DEC-2022 \t  19:00  BUTUAN 2" <<endl;
     gotoxy(26,11);
      cout<<"TRANSACTION \t  \t  AMOUNT" <<endl;
       gotoxy(26,12);
         cout<<"CASH WITHDRAWAL \t  "; cin>>amount;
          gotoxy(26,14);
           cout<<"CURRENT BALANCE    \t  AVAILABLE BALANCE" <<endl;
            gotoxy(26,15);
             cout<<"PHP ";  cin>>cBalance;
              gotoxy(50,15);
               cout<<"PHP " <<cBalance <<endl;

             gotoxy(26,17);

             cout<<"TRANSACTION FEE  :   PHP 18.00" <<endl;
             gotoxy(26,18);
             if (amount>250)
             {
    total=amount+18;
             cout<<"TOTAL \t   :   PHP " <<total <<endl;
             }
             gotoxy(26,19);
    tBalance=cBalance-total;
             cout<<"BALANCE      \t   :   PHP " <<tBalance <<endl;

     gotoxy(26,21);
     cout<<"TRACE NUMBER     :   152710" <<endl;
     gotoxy(26,22);
     cout<<"APPLICATION      :   A0000000041010" <<endl;
     gotoxy(26,23);
     cout<<"APPLICATION LABEL:   DEBIT MASTER CARD" <<endl;

     gotoxy(26,25);
     cout<<"*FOR ALL CARDS ISSUED ABROAD, THE" <<endl;
     gotoxy(26,26);
     cout<<"TRANSACTION AMOUNT IS EXCLUSIVE OF A" <<endl;
     gotoxy(26,27);
     cout<<"PHP250 ACCESS FEE." <<endl;
     gotoxy(26,28);
     cout<<"*FOR NON-RCBC LOCALLY ISSUED CARDS, " <<endl;
     gotoxy(26,29);
     cout<<"AN ATM FEE OF PHP18 IS ALREADY" <<endl;
     gotoxy(26,30);
     cout<<"INCLUDED IN THE TRANSACTION AMOUNT" <<endl;
     gotoxy(26,31);
     cout<<"*FOR ATM INQUIRIES PLS CALL 8877-72222" <<endl;
}


