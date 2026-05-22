#include <iostream>
    #include <windows.h>
    using namespace std;
    void gotoxy(int x,int y){

        COORD coord;
        coord.X = x;
        coord.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    }
    int main(){
cout<<">>Recursive<<"<<endl;
cout<<" "<<endl;
             cout<<" "<<endl;
cout<<"Problem:"<<endl;
cout<<"Write a program containing a recursive function"<<endl;
cout<<"that will raise a certain integer x to a certain positive integer n."<<endl;
int x, n, c=1;
int i;
int result;
cout<<" "<<endl;
             cout<<" "<<endl;
cout<<"Enter base"<<endl;
cin>>x;
cout<<"Enter exponent"<<endl;
cin>>n;
for(i=1; i<=n; i++){

   c=c*x;


}
cout<<"Result: "<<endl;
cout<<c<<endl;
    }
