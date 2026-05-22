#include <iostream>
using namespace std;
int main()

{
    //Month, day and year.
    int day, month, year;

    cout<<"Enter Month: "; cin>>month;
    cout<<"Enter Day: "; cin>>day;
    cout<<"Enter Year: "; cin>>year;
    cout<<endl;
    cout<<"The date is: ";

    switch (month)
{
case 1:
    cout<<"January ";
    break;
case 2:
    cout<<"February ";
    break;
case 3:
    cout<<"March ";
    break;
case 4:
    cout<<"April ";
    break;
case 5:
    cout<<"May ";
    break;
case 6:
    cout<<"June ";
    break;
case 7:
    cout<<"July ";
    break;
case 8:
    cout<<"August ";
    break;
case 9:
    cout<<"September ";
    break;
case 10:
    cout<<"October ";
    break;
case 11:
    cout<<"November ";
    break;
case 12:
    cout<<"December ";
    break;
default:
    cout<<"(No Month) ";
}
cout<<day <<", "<<year<<endl;


    return 0;
}
