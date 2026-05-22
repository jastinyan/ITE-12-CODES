#include <iostream>
using namespace std;
int main()

//Year end bonus

{
float year, salary, Bonus, Total_pay;

cout<<"              XYZ Company Year End Bonus           " <<endl;
cout<<endl;
cout<<"Enter your year of service: "; cin>>year;
cout<<"Enter your salary: "; cin>>salary;

if (year==1)
    {
    Bonus=salary*.10;
    Total_pay=Bonus+salary;
    cout<<"Bonus: " <<Bonus <<endl;
    cout<<"Year End Total Pay: " <<Total_pay <<endl;
    }
  else
if (year>=2&&year<=5)
    {
    Bonus=salary*.20;
    Total_pay=Bonus+salary;
    cout<<"Bonus: " <<Bonus <<endl;
    cout<<"Year End Total Pay: " <<Total_pay <<endl;
    }
   else
if (year>=5&&year<=10)
    {
    Bonus=salary*.50;
    Total_pay=Bonus+salary;
    cout<<"Bonus: " <<Bonus <<endl;
    cout<<"Year End Total Pay: " <<Total_pay <<endl;
    }
   else
if (year>=11)
    {
    Bonus=salary*.75;
    Total_pay=Bonus+salary;
    cout<<"Bonus: " <<Bonus <<endl;
    cout<<"Year End Total Pay: " <<Total_pay <<endl;
    }

return 0;
}
