#include <iostream>
using namespace std;
int main()

{
    string answer1, answer2,answer3;
    float side1, side2, side3, perimeter, area, base, height;


    cout<<"Do you want to compute the perimeter and area of a triangle? ";
    cin>>answer1; cout<<endl;

    if (answer1=="yes"||answer1=="Yes"||answer1=="YES")
       {cout<<"Do you want the perimeter of the triangle? ";
        cin>>answer2;
        cout<<endl;}

      if (answer2=="yes"||answer2=="Yes"||answer2=="YES")
            {cout<<"Enter the measurement of the three sides" <<endl;
             cout<<"Side 1: ";    cin>>side1;
             cout<<"Side 2: ";    cin>>side2;
             cout<<"Base side: "; cin>>side3;
             cout<<endl;

             perimeter=side1+side2+side3;
             cout<<"The perimeter of the triangle: " <<perimeter <<endl;
             cout<<endl;

             cout<<"Do you want the area of the triangle? ";
             cin>>answer3;
             cout<<endl;}

        if (answer3=="yes"||answer3=="Yes"||answer3=="YES")
            {cout<<"Enter the measurements of base and height" <<endl;
             cout<<"Base: ";    cin>>base;
             cout<<"Height: ";  cin>>height;
             cout<<endl;
             area=(base*height)*.5;
             cout<<"The area of the triangle: " <<area <<endl;}
             cout<<endl;


             cout<<"Thank you for visiting" <<endl;

    return 0;
}
