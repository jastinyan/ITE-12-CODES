//"Write a program containing a function that will return the largest of 3 floating-point numbers."

#include <iostream>
using namespace std;

void L_FloatingNumbers(float num1,float num2, float num3)
{
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
        float a,b,c;
        cout<<"Floating-point numbers are positive or negative whole numbers with a decimal point " <<endl;
        cout<<endl;
        cout<<"Input first floating-point number: "; cin>>a;
        cout<<"Input second floating-point number: "; cin>>b;
        cout<<"Input third floating-point number: "; cin>>c;
        L_FloatingNumbers (a,b,c);
}
