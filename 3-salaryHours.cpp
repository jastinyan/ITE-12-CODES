#include <iostream>
using namespace std;
int main()

{
float salary, total_salary, hours_worked, hourly_rate, bonus;

    cout<< "Enter your hours worked during the week: ";
        cin>>hours_worked;
    cout<< "Enter your hourly rate: ";
        cin>>hourly_rate;
    cout<<endl;


salary=hours_worked*hourly_rate;
    cout<<"Basic Salary: " <<salary <<endl;



    if (hours_worked>45)
        { total_salary=salary+500;
         cout<<"Bonus: 500" <<endl;
         cout<<"Total Salary: " <<total_salary <<endl;}
      else
    if (hours_worked>40&&hours_worked<=45)
        {total_salary=salary+250;
         cout<<"Bonus: 250" <<endl;
         cout<<"Total Salary: " <<total_salary <<endl;}
      else
    if (hours_worked>35&&hours_worked<=40)
        {total_salary=salary+150;
         cout<<"Bonus: 150" <<endl;
         cout<<"Total Salary: " <<total_salary <<endl;}


return 0;
}
