//num2
#include <iostream>
using namespace std;
int main()

{
    float n,x,sum;

    cout<<"Enter a number: "; cin>>n;
{
    sum=0;
    x=0;
    do
    {
        sum=sum+x;
        x++;
    } while (x<=n);
        cout<<"Sum of all number from 1 to n is: " <<sum <<endl;
}
return 0;
}
