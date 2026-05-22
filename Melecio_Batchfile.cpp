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

        gotoxy(10,1); //upper border
        for(x=1; x<=90; x++)
            {
            cout<<"+";
            }
        gotoxy(10,2); //right border
        cout<<"* *"<<endl;
        gotoxy(10,3);
        cout<<"* *"<<endl;
        gotoxy(10,4);
        cout<<"* *"<<endl;
        gotoxy(10,5);
        cout<<"* *"<<endl;
        gotoxy(10,6);
        cout<<"* *"<<endl;
        gotoxy(10,7);
        cout<<"* *"<<endl;
        gotoxy(10,8);
        cout<<"* *"<<endl;
        gotoxy(10,9);
        cout<<"* *"<<endl;
        gotoxy(10,10);
        cout<<"* *"<<endl;
        gotoxy(10,11);
        cout<<"* *"<<endl;
        gotoxy(10,12);
        cout<<"* *"<<endl;
        gotoxy(10,13);
        cout<<"* *"<<endl;
        gotoxy(10,14);
        cout<<"* *"<<endl;
        gotoxy(10,15);
        cout<<"* *"<<endl;
        gotoxy(10,16);
        cout<<"* *"<<endl;
        gotoxy(10,17);
        cout<<"* *"<<endl;
        gotoxy(10,18);
        cout<<"* *"<<endl;
        gotoxy(10,19);
        cout<<"* *"<<endl;
        gotoxy(10,20);
        cout<<"* *"<<endl;
        gotoxy(10,21);
        cout<<"* *"<<endl;
        gotoxy(10,22);
        cout<<"* *"<<endl;
        gotoxy(10,23);
        cout<<"* *"<<endl;
        gotoxy(10,24);
        cout<<"* *"<<endl;

        gotoxy(97,2);//Left border
        cout<<"* *"<<endl;
        gotoxy(97,3);
        cout<<"* *"<<endl;
        gotoxy(97,4);
        cout<<"* *"<<endl;
        gotoxy(97,5);
        cout<<"* *"<<endl;
        gotoxy(97,6);
        cout<<"* *"<<endl;
        gotoxy(97,7);
        cout<<"* *"<<endl;
        gotoxy(97,8);
        cout<<"* *"<<endl;
        gotoxy(97,9);
        cout<<"* *"<<endl;
        gotoxy(97,10);
        cout<<"* *"<<endl;
        gotoxy(97,11);
        cout<<"* *"<<endl;
        gotoxy(97,12);
        cout<<"* *"<<endl;
        gotoxy(97,13);
        cout<<"* *"<<endl;
        gotoxy(97,14);
        cout<<"* *"<<endl;
        gotoxy(97,15);
        cout<<"* *"<<endl;
        gotoxy(97,16);
        cout<<"* *"<<endl;
        gotoxy(97,17);
        cout<<"* *"<<endl;
        gotoxy(97,18);
        cout<<"* *"<<endl;
        gotoxy(97,19);
        cout<<"* *"<<endl;
        gotoxy(97,20);
        cout<<"* *"<<endl;
        gotoxy(97,21);
        cout<<"* *"<<endl;
        gotoxy(97,22);
        cout<<"* *"<<endl;
        gotoxy(97,23);
        cout<<"* *"<<endl;
        gotoxy(97,24);
        cout<<"* *"<<endl;

	int i; //bottom border
        gotoxy(10,24);
        for(i=1; i<=90; i++)
            {
            cout<<"+";
            }
    }
void border1()
    {
    int x;

        gotoxy(10,1); //upper border
        for(x=1; x<=90; x++)
            {
            cout<<"*";
            }
        gotoxy(9,2); //right border
        cout<<"*"<<endl;
        gotoxy(11,3);
        cout<<"*"<<endl;
        gotoxy(9,4);
        cout<<"*"<<endl;
        gotoxy(11,5);
        cout<<"*"<<endl;
        gotoxy(9,6);
        cout<<"*"<<endl;
        gotoxy(11,7);
        cout<<"*"<<endl;
        gotoxy(9,8);
        cout<<"*"<<endl;
        gotoxy(11,9);
        cout<<"*"<<endl;
        gotoxy(9,10);
        cout<<"*"<<endl;
        gotoxy(11,11);
        cout<<"*"<<endl;
        gotoxy(9,12);
        cout<<"*"<<endl;
        gotoxy(11,13);
        cout<<"*"<<endl;
        gotoxy(9,14);
        cout<<"*"<<endl;
        gotoxy(11,15);
        cout<<"*"<<endl;
        gotoxy(9,16);
        cout<<"*"<<endl;
        gotoxy(11,17);
        cout<<"*"<<endl;
        gotoxy(9,18);
        cout<<"*"<<endl;
        gotoxy(11,19);
        cout<<"*"<<endl;
        gotoxy(9,20);
        cout<<"*"<<endl;
        gotoxy(11,21);
        cout<<"*"<<endl;
        gotoxy(9,22);
        cout<<"*"<<endl;
        gotoxy(11,23);
        cout<<"*"<<endl;
        gotoxy(9,24);
        cout<<"*"<<endl;
        gotoxy(11,25);
        cout<<"*"<<endl;


        gotoxy(100,2);//Left border
        cout<<"*"<<endl;
        gotoxy(98,3);
        cout<<"*"<<endl;
        gotoxy(100,4);
        cout<<"*"<<endl;
        gotoxy(98,5);
        cout<<"*"<<endl;
        gotoxy(100,6);
        cout<<"*"<<endl;
        gotoxy(98,7);
        cout<<"*"<<endl;
        gotoxy(100,8);
        cout<<"*"<<endl;
        gotoxy(98,9);
        cout<<"*"<<endl;
        gotoxy(100,10);
        cout<<"*"<<endl;
        gotoxy(98,11);
        cout<<"*"<<endl;
        gotoxy(100,12);
        cout<<"*"<<endl;
        gotoxy(98,13);
        cout<<"*"<<endl;
        gotoxy(100,14);
        cout<<"*"<<endl;
        gotoxy(98,15);
        cout<<"*"<<endl;
        gotoxy(100,16);
        cout<<"*"<<endl;
        gotoxy(98,17);
        cout<<"*"<<endl;
        gotoxy(100,18);
        cout<<"*"<<endl;
        gotoxy(98,19);
        cout<<"*"<<endl;
        gotoxy(100,20);
        cout<<"*"<<endl;
        gotoxy(98,21);
        cout<<"*"<<endl;
        gotoxy(100,22);
        cout<<"*"<<endl;
        gotoxy(98,23);
        cout<<"*"<<endl;
        gotoxy(100,24);
        cout<<"*"<<endl;
        gotoxy(98,25);
        cout<<"*"<<endl;

	int i; //bottom border
        gotoxy(10,25);
        for(i=1; i<=90; i++)
            {
            cout<<"*";
            }
    }
void ATMborder()
    {
        int x;

        gotoxy(20,1); //upper border
        for(x=1; x<=50; x++)
            {
            cout<<"*";
            }
        gotoxy(20,2); //right border
        cout<<"|"<<endl;
        gotoxy(20,3);
        cout<<"|"<<endl;
        gotoxy(20,4);
        cout<<"|"<<endl;
        gotoxy(20,5);
        cout<<"|"<<endl;
        gotoxy(20,6);
        cout<<"|"<<endl;
        gotoxy(20,7);
        cout<<"|"<<endl;
        gotoxy(20,8);
        cout<<"|"<<endl;
        gotoxy(20,9);
        cout<<"|"<<endl;
        gotoxy(20,10);
        cout<<"|"<<endl;
        gotoxy(20,11);
        cout<<"|"<<endl;
        gotoxy(20,12);
        cout<<"|"<<endl;
        gotoxy(20,13);
        cout<<"|"<<endl;
        gotoxy(20,14);
        cout<<"|"<<endl;
        gotoxy(20,15);
        cout<<"|"<<endl;
        gotoxy(20,16);
        cout<<"|"<<endl;
        gotoxy(20,17);
        cout<<"|"<<endl;
        gotoxy(20,18);
        cout<<"|"<<endl;
        gotoxy(20,19);
        cout<<"|"<<endl;
        gotoxy(20,20);
        cout<<"|"<<endl;
        gotoxy(20,21);
        cout<<"|"<<endl;
        gotoxy(20,22);
        cout<<"|"<<endl;
        gotoxy(20,23);
        cout<<"|"<<endl;
        gotoxy(20,24);
        cout<<"|"<<endl;
        gotoxy(20,25);
        cout<<"|"<<endl;
        gotoxy(20,26);
        cout<<"|"<<endl;
        gotoxy(20,27);
        cout<<"|"<<endl;
        gotoxy(20,28);
        cout<<"|"<<endl;
        gotoxy(20,29);
        cout<<"|"<<endl;
        gotoxy(20,30);
        cout<<"|"<<endl;
        gotoxy(20,31);
        cout<<"|"<<endl;
        gotoxy(20,32);
        cout<<"|"<<endl;


        gotoxy(69,2);//Left border
        cout<<"|"<<endl;
        gotoxy(69,3);
        cout<<"|"<<endl;
        gotoxy(69,4);
        cout<<"|"<<endl;
        gotoxy(69,5);
        cout<<"|"<<endl;
        gotoxy(69,6);
        cout<<"|"<<endl;
        gotoxy(69,7);
        cout<<"|"<<endl;
        gotoxy(69,8);
        cout<<"|"<<endl;
        gotoxy(69,9);
        cout<<"|"<<endl;
        gotoxy(69,10);
        cout<<"|"<<endl;
        gotoxy(69,11);
        cout<<"|"<<endl;
        gotoxy(69,12);
        cout<<"|"<<endl;
        gotoxy(69,13);
        cout<<"|"<<endl;
        gotoxy(69,14);
        cout<<"|"<<endl;
        gotoxy(69,15);
        cout<<"|"<<endl;
        gotoxy(69,16);
        cout<<"|"<<endl;
        gotoxy(69,17);
        cout<<"|"<<endl;
        gotoxy(69,18);
        cout<<"|"<<endl;
        gotoxy(69,19);
        cout<<"|"<<endl;
        gotoxy(69,20);
        cout<<"|"<<endl;
        gotoxy(69,21);
        cout<<"|"<<endl;
        gotoxy(69,22);
        cout<<"|"<<endl;
        gotoxy(69,23);
        cout<<"|"<<endl;
        gotoxy(69,24);
        cout<<"|"<<endl;
        gotoxy(69,25);
        cout<<"|"<<endl;
        gotoxy(69,26);
        cout<<"|"<<endl;
        gotoxy(69,27);
        cout<<"|"<<endl;
        gotoxy(69,28);
        cout<<"|"<<endl;
        gotoxy(69,29);
        cout<<"|"<<endl;
        gotoxy(69,30);
        cout<<"|"<<endl;
        gotoxy(69,31);
        cout<<"|"<<endl;
        gotoxy(69,32);
        cout<<"|"<<endl;

	int i; //bottom border
        gotoxy(20,32);
        for(i=1; i<=50; i++)
            {
            cout<<"*";
            }
    }
void L_FloatingNumbers(float num1,float num2, float num3)
    {
        gotoxy(35,13);
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
{   //MAIN MENU
    char input;
    char YESNO;
    border();

    {
        gotoxy(50,3);
        cout<<"MAIN MENU"<<endl;
        gotoxy(20,6);
        cout<<"[1] Input Statement"<<endl;
        gotoxy(20,8);
        cout<<"[2] Conditional Statement"<<endl;
        gotoxy(20,10);
        cout<<"[3] Iterative Statement"<<endl;
        gotoxy(50,12);
        cout<<"[7] Exit"<<endl;
        gotoxy(65,6);
        cout<<"[4] Function/Structured Prog."<<endl;
        gotoxy(65,8);
        cout<<"[5] Recursion"<<endl;
        gotoxy(65,10);
        cout<<"[6] Project"<<endl;
        gotoxy(44,20);
        cout<<"JUSTINIAN L. MELECIO" <<endl;
        gotoxy(44,21);
        cout<<"--------------------" <<endl;
        gotoxy(49,22);
        cout<<"PROGRAMMER" <<endl;
        gotoxy(47,16);
        cout<<"Select [1-7]: "; cin>>input; cout<<endl;
        cout<<endl;
    }

//INPUT STATEMENT
if (input=='1')
    {
        system("cls");
        float kW, watts;
        border1();

        gotoxy(35,3);
        cout<<"Create a program that will input a number" <<endl;
        gotoxy(37,4);
        cout<<"in kilowatt and display its equivalent" <<endl;
        gotoxy(47,5);
        cout<<"measure in watts." <<endl;
        gotoxy(34,6);
        cout<<"*******************************************" <<endl;
        gotoxy(45,8);
        cout<<"KILOWATTS TO WATTS" <<endl;
        gotoxy(42,11);
        cout<<"Input number of kilowatt: ";
        cin>>kW;
        gotoxy(40,12);
        watts=kW*1000;
        cout<<"Equivalent measure to watts: " <<watts <<endl;
        cout<<endl;

        gotoxy(65,20);
        cin.get();
        cout<<"Back to Main Menu?y/n: "; cin>>YESNO;
            system ("cls");
            if (YESNO=='y')
                {
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
                gotoxy (55,10);
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
 if (input=='2')
    {
        system ("cls");
        border1();
        float num1,num2,num3,num4,num5,a;

        gotoxy(28,3);
        cout<<"Write a program that accepts five numbers from the user" <<endl;
        gotoxy(32,4);
        cout<<"and displays the highest and the lowest number." <<endl;
        gotoxy(34,5);
        cout<<"Assume that there are no duplicate values." <<endl;
        gotoxy(27,6);
        cout<<"*********************************************************" <<endl;
        gotoxy(42,8);
        cout<<"HIGHEST AND LOWEST NUMBER" <<endl;
        gotoxy(45,11);
        cout<<"Enter 1st number: "; cin>>num1;
        gotoxy(45,12);
        cout<<"Enter 2nd number: "; cin>>num2;
        gotoxy(45,13);
        cout<<"Enter 3rd number: "; cin>>num3;
        gotoxy(45,14);
        cout<<"Enter 4th number: "; cin>>num4;
        gotoxy(45,15);
        cout<<"Enter 5th number: "; cin>>num5;


        gotoxy(43,17);
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

        gotoxy(43,18);
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

        gotoxy(65,23);
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
                gotoxy (55,10);
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
 if (input=='3')
    {
        system ("cls");
        int n;
        int a=1;
        border1();
        gotoxy(28,3);
        cout<<"Write a program that asks the user to enter a number n" <<endl;
        gotoxy(38,4);
        cout<<"and display the first n even numbers." <<endl;
        gotoxy(25,5);
        cout<<"Example: if n=5, the first 5 even numbers are 2,4,6,8, and 10." <<endl;
        gotoxy(24,6);
        cout<<"****************************************************************" <<endl;
        gotoxy(45,8);
        cout<<"FIRST n EVEN NUMBERS" <<endl;
        gotoxy(46,10);
        cout<<"Enter a number: "; cin>>n;
        gotoxy(37,12);
        cout<<"The first " <<n <<" even numbers are: ";

            {
                for(a=1;a<=n;a++)
                cout<<a*2 <<",";
            }

        gotoxy(65,20);
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
                gotoxy (55,10);
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
 if (input=='4')
    {
        system ("cls");
        border1();
        gotoxy(29,3);
        cout<<"Write a program containing a function that will return" <<endl;
        gotoxy(36,4);
        cout<<"the largest of 3 floating-point numbers." <<endl;
        gotoxy(28,5);
        cout<<"********************************************************" <<endl;

        {
            float a,b,c;
            gotoxy(14,7);
            cout<<"Floating-point numbers are positive or negative whole numbers with a decimal point " <<endl;
            gotoxy(36,9);
            cout<<"Input first floating-point number:  "; cin>>a;
            gotoxy(36,10);
            cout<<"Input second floating-point number: "; cin>>b;
            gotoxy(36,11);
            cout<<"Input third floating-point number:  "; cin>>c;
            L_FloatingNumbers (a,b,c);
        }

        gotoxy(65,20);
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
                gotoxy (55,10);
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
 if (input=='5')
    {
        system ("cls");
        border1();
        int x, n;
        int c=1;
        int i;
        int result;

        gotoxy(20,3);
        cout<<"Write a C++ program containing a recursive function that will raise a" <<endl;
        gotoxy(30,4);
        cout<<"certain integer x to a certain positive integer n." <<endl;
        gotoxy(25,5);
        cout<<"(Example: if x=2 and n=3, find 2 to the power of 3= 2*2*2=8)" <<endl;
        gotoxy(19,6);
        cout<<"***********************************************************************" <<endl;
        gotoxy(45,8);
        cout<<"X TO THE POWER OF N" <<endl;
        gotoxy(45,11);
        cout<<"Enter BASE number: ";  cin>>x;
        gotoxy(43,12);
        cout<<"Enter EXPONENT number: "; cin>>n;
        for(i=1; i<=n; i++)
            {
            c=c*x;
            }
        gotoxy(42,14);
        cout<<x <<" to the power of " <<n <<" is: "   <<c   <<endl;

        gotoxy(65,20);
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
                gotoxy (55,10);
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
 if (input=='6')
    {
        system("cls");
        ATMborder();
        float amount, deduction, total;
        float cBalance, aBalance, tBalance;


            gotoxy(43,2);
            cout<<"RCBC" <<endl;
            gotoxy(42,4);
            cout<<"BANCNET" <<endl;
            gotoxy(27,5);
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
            cout<<"CURRENT BALANCE      AVAILABLE BALANCE" <<endl;
            gotoxy(26,15);
            cout<<"PHP ";  cin>>cBalance;
            gotoxy(47,15);
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
                            gotoxy (55,10);
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

                gotoxy(45,33);
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
                    gotoxy (55,10);
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
 if (input=='7')
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

 else //invalid input
    {
        system ("cls");
        gotoxy (55,10);
        cout<<"INVALID INPUT" <<endl;
        gotoxy (45,11);
        cout<<"Thank you for running this codes!" <<endl;
        cout<<endl;
                    gotoxy(60,15);
                    cout<<"Back to Main Menu?y/n: "; cin>>YESNO;
                    system ("cls");
                if (YESNO=='y')
                    {
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
                    gotoxy (55,10);
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


