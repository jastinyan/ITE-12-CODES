#include <iostream>
using namespace std;

void RECIEVE (float num1,float num2)
{

num1 = num1+5;
num2 = num2*2;
cout << num1 << "\t" << num2 << endl;


}

int main () {

float x, y;
cin>>x;
cin>>y;
cout << x << "\t" << y << endl;
RECIEVE(x,y);
cout << x << "\t" << y << endl;
}
