//num4
#include <iostream>
using namespace std;
int main()

{
    int n;
    int a;

    cout<<"Enter a number: "; cin>>n;
    cout<<"The first " <<n <<" odd numbers are: ";

   {
       for(a=0;a<n;a++)
        cout<<(a*2)+1 <<",";
   }
    cout<<endl;
    return 0;
}
