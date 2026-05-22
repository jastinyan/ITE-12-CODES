#include <iostream>
using namespace std;
int main()
{
    float temperature;

cout<<"Climate Today" <<endl;
cout<<"Temperature: ";cin>>temperature;
cout<<endl;

if (temperature<20)
    cout<<"ITS COLD!" <<endl;
    else
if (temperature>30)
    cout<<"ITS HOT!" <<endl;
    else
    cout<<"COOL CLIMATE!" <<endl;

    return 0;
}
