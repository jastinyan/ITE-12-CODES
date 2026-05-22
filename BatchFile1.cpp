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
//BORDERS
void border()
    {
    int x;

        gotoxy(8,1); //upper border
        for(x=1; x<=72; x++)
            {
            cout<<"-";
            }
        gotoxy(8,2); //right border
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

        gotoxy(79,2);//Left border
        cout<<"*"<<endl;
        gotoxy(79,3);
        cout<<"*"<<endl;
        gotoxy(79,4);
        cout<<"*"<<endl;
        gotoxy(79,5);
        cout<<"*"<<endl;
        gotoxy(79,6);
        cout<<"*"<<endl;
        gotoxy(79,7);
        cout<<"*"<<endl;
        gotoxy(79,8);
        cout<<"*"<<endl;
        gotoxy(79,9);
        cout<<"*"<<endl;
        gotoxy(79,10);
        cout<<"*"<<endl;
        gotoxy(79,11);
        cout<<"*"<<endl;
        gotoxy(79,12);
        cout<<"*"<<endl;
        gotoxy(79,13);
        cout<<"*"<<endl;
        gotoxy(79,14);
        cout<<"*"<<endl;
        gotoxy(79,15);
        cout<<"*"<<endl;
        gotoxy(79,16);
        cout<<"*"<<endl;
        gotoxy(79,17);
        cout<<"*"<<endl;
        gotoxy(79,18);
        cout<<"*"<<endl;
        gotoxy(79,19);
        cout<<"*"<<endl;
        gotoxy(79,20);
        cout<<"*"<<endl;
        gotoxy(79,21);
        cout<<"*"<<endl;

	int i; //bottom border
        gotoxy(8,21);
        for(i=1; i<=72; i++)
            {
            cout<<"-";
            }
    }
void L_FloatingNumbers(float num1,float num2, float num3)
    {
        gotoxy(31,13);
        if (num1>num2&&num1>num3)
            cout<<"The largest floating-point number is: " <<num1 <<endl;
        else
        if (num2>num3&&num2>num1)
            cout<<"The largest floating-point number is: " <<num2 <<endl;
        else
        if (num3>num1&&num3>num2)
            cout<<"The largest floating-point number is: " <<num3 <<endl;
    }

int main()
{
    char input;
    char YESNO;
    border();

    {
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
        cout<<"[4] Function/Structured Prog."<<endl;
        gotoxy(45,6);
        cout<<"[5] Recursion"<<endl;
        gotoxy(45,8);
        cout<<"[6] Project"<<endl;
        gotoxy(32,16);
        cout<<"JUSTINIAN L. MELECIO" <<endl;
        gotoxy(32,17);
        cout<<"--------------------" <<endl;
        gotoxy(37,18);
        cout<<"PROGRAMMER" <<endl;
        gotoxy(35,14);
        cout<<"Select [1-7]: "; cin>>input; cout<<endl;
        cout<<endl;
    }

//INPUT STATEMENT
if (input=='1')
    {
        system("cls");
        float kW, watts;

        gotoxy(25,3);
        cout<<"Create a program that will input a number" <<endl;
        gotoxy(27,4);
        cout<<"in kilowatt and display its equivalent" <<endl;
        gotoxy(37,5);
        cout<<"measure in watts." <<endl;
        gotoxy(24,6);
        cout<<"*******************************************" <<endl;
        gotoxy(35,8);
        cout<<"KILOWATTS TO WATTS" <<endl;
        gotoxy(32,11);
        cout<<"Input number of kilowatt: ";
        cin>>kW;
        gotoxy(30,12);
        watts=kW*1000;
        cout<<"Equivalent measure to watts: " <<watts <<endl;
        cout<<endl;

        gotoxy(65,15);
        cin.get();
        cout<<"Back to Main Menu?y/n: "; cin>>YESNO;
            system ("cls");
            if (YESNO=='y')
                {cin.get();
                 system("cls");
                 main();}
            if (YESNO=='n')
                {
                gotoxy (45,10);
                cout<<"Thank you for running this codes!" <<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                exit(0);
                }
            else
                {
                gotoxy (52,10);
                cout<<"INVALID INPUT" <<endl;
                gotoxy (45,11);
                cout<<"Thank you for running this codes!" <<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                exit(0);
                }
    }

//CONDITIONAL STATEMENT
else if (input=='2')
    {
        system ("cls");
        float num1,num2,num3,num4,num5,a;

        gotoxy(23,3);
        cout<<"Write a program that accepts five numbers from the user" <<endl;
        gotoxy(27,4);
        cout<<"and displays the highest and the lowest number." <<endl;
        gotoxy(29,5);
        cout<<"Assume that there are no duplicate values." <<endl;
        gotoxy(22,6);
        cout<<"*********************************************************" <<endl;
        gotoxy(37,8);
        cout<<"HIGHEST AND LOWEST NUMBER" <<endl;
        gotoxy(40,11);
        cout<<"Enter 1st number: "; cin>>num1;
        gotoxy(40,12);
        cout<<"Enter 2nd number: "; cin>>num2;
        gotoxy(40,13);
        cout<<"Enter 3rd number: "; cin>>num3;
        gotoxy(40,14);
        cout<<"Enter 4th number: "; cin>>num4;
        gotoxy(40,15);
        cout<<"Enter 5th number: "; cin>>num5;


        gotoxy(38,17);
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

        gotoxy(38,18);
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

        gotoxy(65,21);
        cin.get();
        cout<<"Back to Main Menu?y/n: "; cin>>YESNO;
            system ("cls");
            if (YESNO=='y')
                {cin.get();
                 system("cls");
                 main();}
            if (YESNO=='n')
                {
                gotoxy (45,10);
                cout<<"Thank you for running this codes!" <<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                exit(0);
                }
             else
                {
                gotoxy (52,10);
                cout<<"INVALID INPUT" <<endl;
                gotoxy (45,11);
                cout<<"Thank you for running this codes!" <<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                exit(0);
                }
    }

//ITERATIVE STATEMENT
else if (input=='3')
    {
        system ("cls");
        int n;
        int a=1;

        gotoxy(23,3);
        cout<<"Write a program that asks the user to enter a number n" <<endl;
        gotoxy(33,4);
        cout<<"and display the first n even numbers." <<endl;
        gotoxy(19,5);
        cout<<"Example: if n=5, the first 5 even numbers are 2,4,6,8, and 10." <<endl;
        gotoxy(18,6);
        cout<<"****************************************************************" <<endl;
        gotoxy(40,8);
        cout<<"FIRST n EVEN NUMBERS" <<endl;
        gotoxy(41,10);
        cout<<"Enter a number: "; cin>>n;
        gotoxy(32,12);
        cout<<"The first " <<n <<" even numbers are: ";

            {
                for(a=1;a<=n;a++)
                cout<<a*2 <<",";
            }

        gotoxy(65,15);
        cin.get();
        cout<<"Back to Main Menu?y/n: "; cin>>YESNO;

            system ("cls");
            if (YESNO=='y')
                {cin.get();
                 system("cls");
                 main();}
            if (YESNO=='n')
                {
                gotoxy (45,10);
                cout<<"Thank you for running this codes!" <<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                exit(0);
                }
            else
                {
                gotoxy (52,10);
                cout<<"INVALID INPUT" <<endl;
                gotoxy (45,11);
                cout<<"Thank you for running this codes!" <<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                exit(0);
                }
    }

//FUNCTION/STRUCTURED PROGRAM
else if (input=='4')
    {
        system ("cls");
        gotoxy(25,3);
        cout<<"Write a program containing a function that will return" <<endl;
        gotoxy(32,4);
        cout<<"the largest of 3 floating-point numbers." <<endl;
        gotoxy(24,5);
        cout<<"********************************************************" <<endl;

        {
            float a,b,c;
            gotoxy(12,7);
            cout<<"Floating-point numbers are positive or negative whole numbers with a decimal point " <<endl;
            gotoxy(32,9);
            cout<<"Input first floating-point number:  "; cin>>a;
            gotoxy(32,10);
            cout<<"Input second floating-point number: "; cin>>b;
            gotoxy(32,11);
            cout<<"Input third floating-point number:  "; cin>>c;
            L_FloatingNumbers (a,b,c);
        }

        gotoxy(65,17);
        cin.get();
        cout<<"Back to Main Menu?y/n: "; cin>>YESNO;

            system ("cls");
            if (YESNO=='y')
                {cin.get();
                 system("cls");
                 main();}
            if (YESNO=='n')
                {
                gotoxy (45,10);
                cout<<"Thank you for running this codes!" <<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                exit(0);
                }
            else
                {
                gotoxy (52,10);
                cout<<"INVALID INPUT" <<endl;
                gotoxy (45,11);
                cout<<"Thank you for running this codes!" <<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                exit(0);
                }
    }

//RECURSIVE METHOD
else if (input=='5')
    {
        system ("cls");
        int x, n;
        int c=1;
        int i;
        int result;

        gotoxy(25,3);
        cout<<"Write a C++ program containing a recursive function that will raise a" <<endl;
        gotoxy(35,4);
        cout<<"certain integer x to a certain positive integer n." <<endl;
        gotoxy(30,5);
        cout<<"(Example: if x=2 and n=3, find 2 to the power of 3= 2*2*2=8)" <<endl;
        gotoxy(24,6);
        cout<<"***********************************************************************" <<endl;
        gotoxy(50,8);
        cout<<"X TO THE POWER OF N" <<endl;
        gotoxy(50,11);
        cout<<"Enter BASE number: ";  cin>>x;
        gotoxy(48,12);
        cout<<"Enter EXPONENT number: "; cin>>n;
        for(i=1; i<=n; i++)
            {
            c=c*x;
            }
        gotoxy(47,14);
        cout<<x <<" to the power of " <<n <<" is: "   <<c   <<endl;

        gotoxy(65,19);
        cin.get();
        cout<<"Back to Main Menu?y/n: "; cin>>YESNO;
           system ("cls");
            if (YESNO=='y')
                {cin.get();
                 system("cls");
                 main();}
            if (YESNO=='n')
                {
                gotoxy (45,10);
                cout<<"Thank you for running this codes!" <<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                exit(0);
                }
            else
                {
                gotoxy (52,10);
                cout<<"INVALID INPUT" <<endl;
                gotoxy (45,11);
                cout<<"Thank you for running this codes!" <<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                exit(0);
                }

    }
//PROJECT-ATM RECIEPT
else if (input=='6')
    {
        system("cls");
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

                if (amount>=250)
                {
                    total=amount+18;
                    gotoxy(26,17);
                    cout<<"TRANSACTION FEE  :   PHP 18.00" <<endl;
                    gotoxy(26,18);
                    cout<<"TOTAL \t   :   PHP " <<total <<endl;
                }
                if  (amount<250)
               {
                    total=amount;
                    gotoxy(26,17);
                    cout<<"TRANSACTION FEE  :   PHP 0.00" <<endl;
                    gotoxy(26,18);
                    cout<<"TOTAL \t   :   PHP " <<total <<endl;
                }
                if(amount>cBalance)
                {
                    system ("cls");
                    gotoxy(40,10);
                    cout<<"Insufficient Amount of Balance" <<endl;
                    gotoxy(42,11);
                    cout<<"You cannot withdraw cash" <<endl;
                    cin.get();
                    gotoxy(50,15);
                    cout<<"Back to Main Menu?y/n: "; cin>>YESNO;

                    system ("cls");
                    if (YESNO=='y')
                    {cin.get();
                    system("cls");
                    main();}
                    if (YESNO=='n')
                        {
                            gotoxy (45,10);
                            cout<<"Thank you for running this codes!" <<endl;
                            cout<<endl;
                            cout<<endl;
                            cout<<endl;
                            cout<<endl;
                            cout<<endl;
                            cout<<endl;
                            exit(0);
                        }
                     else
                        {
                            gotoxy (52,10);
                            cout<<"INVALID INPUT" <<endl;
                        gotoxy (45,11);
                        cout<<"Thank you for running this codes!" <<endl;
                        cout<<endl;
                        cout<<endl;
                        cout<<endl;
                        cout<<endl;
                        cout<<endl;
                        cout<<endl;
                        exit(0);
                        }
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

                gotoxy(80,35);
                cin.get();
                cout<<"Back to Main Menu?y/n: "; cin>>YESNO;
                system ("cls");
                if (YESNO=='y')
                    {
                    cin.get();
                    system("cls");
                    main();
                    }
                if (YESNO=='n')
                    {
                    gotoxy (45,10);
                    cout<<"Thank you for running this codes!" <<endl;
                    cout<<endl;
                    cout<<endl;
                    cout<<endl;
                    cout<<endl;
                    cout<<endl;
                    cout<<endl;
                    exit(0);
                    }
                else
                    {
                    gotoxy (52,10);
                    cout<<"INVALID INPUT" <<endl;
                    gotoxy (45,11);
                    cout<<"Thank you for running this codes!" <<endl;
                    cout<<endl;
                    cout<<endl;
                    cout<<endl;
                    cout<<endl;
                    cout<<endl;
                    cout<<endl;
                    exit(0);
                    }
    }
//EXIT
else if (input=='7')
    {
        system("cls");
        gotoxy(15,10);
        cout<<"It does not matter how slowly you go as long as you did not stop." <<endl;
        gotoxy(40,11);
        cout<<"-Confucius." <<endl;
        gotoxy(14,12);
        cout<<"*******************************************************************" <<endl;

            gotoxy(60,15);
            cin.get();
            cout<<"Back to Main Menu?y/n: "; cin>>YESNO;
                system ("cls");
                if (YESNO=='y')
                    {
                    cin.get();
                    system("cls");
                    main();
                    }
                if (YESNO=='n')
                    {
                    gotoxy (45,10);
                    cout<<"Thank you for running this codes!" <<endl;
                    cout<<endl;
                    cout<<endl;
                    cout<<endl;
                    cout<<endl;
                    cout<<endl;
                    cout<<endl;
                    exit(0);
                    }
                else
                    {
                    gotoxy (52,10);
                    cout<<"INVALID INPUT" <<endl;
                    gotoxy (45,11);
                    cout<<"Thank you for running this codes!" <<endl;
                    cout<<endl;
                    cout<<endl;
                    cout<<endl;
                    cout<<endl;
                    cout<<endl;
                    cout<<endl;
                    exit(0);
                    }
    }

}




