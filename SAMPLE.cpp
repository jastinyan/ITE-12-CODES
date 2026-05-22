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
