#include <iostream>
using namespace std;
int main()
{
float num1, num2, num3, num4, num5;

cout<<"Enter 1st integer: "; cin>>num1;
cout<<"Enter 2nd integer: "; cin>>num2;
cout<<"Enter 3rd integer: "; cin>>num3;
cout<<"Enter 4th integer: "; cin>>num4;
cout<<"Enter 5th integer: "; cin>>num5;

if (num1<num2&&num1<num3&&num1<num4&&num1<num5)
    cout<<"1st integer is the smallest" <<endl;
    else
if (num2<num1&&num2<num3&&num2<num4&&num2<num5)
    cout<<"2nd integer is the smallest" <<endl;
    else
if (num3<num1&&num3<num2&&num3<num4&&num3<num5)
    cout<<"3rd integer is the smallest" <<endl;
    else
if (num4<num1&&num4<num2&&num4<num3&&num4<num5)
    cout<<"4th integer is the smallest" <<endl;
    else
if (num5<num1&&num5<num2&num5<num3&&num5<num4)
    cout<<"5th integer is the smallest" <<endl;


return 0;
}
