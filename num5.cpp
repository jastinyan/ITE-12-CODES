//num5
#include <iostream>
using namespace std;
int main()

{3
    int fact=1, num, n;

    cout<<"Enter a number:"; cin>>num;

    {for (n=1; n<=num; n++)
    fact=fact*n;
    cout<<"The factorial of " <<num <<" is:" <<fact <<endl;
    }
    return 0;
}
