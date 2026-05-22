//num3
#include <iostream>
using namespace std;
int main()

{
    int n;
    int a=1;

    cout<<"Enter a number: "; cin>>n;
    cout<<"The first " <<n <<" even numbers are: ";

   {
       for(a=1;a<=n;a++)
        cout<<a*2 <<",";
   }
    cout<<endl;
    return 0;
}
