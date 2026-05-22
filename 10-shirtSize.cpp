#include <iostream>
using namespace std;
int main()

{
    //Shirt size and discount.

    int shirt_size;
    float price, discount, total_price;


    cout<<"1 for XL" <<endl;
    cout<<"2 for L"  <<endl;
    cout<<endl;

    cout<<"Shirt Size: ";
    cin>>shirt_size;
    cout<<"Price: ";
    cin>>price;
    cout<<endl;

    switch (shirt_size)

{
    case 1:
            cout<<"Size: XL"                   <<endl;
        if (price>500)
        {
            cout<<"Discount: 100"              <<endl;
            total_price=price-100;
            cout<<"Total Price: " <<total_price<<endl;
        }
        else
            cout<<"Total Price: " <<price      <<endl;
break;

    case 2:
            cout<<"Size: L"                    <<endl;
        if (price>400)
        {
            cout<<"Discount:50"                <<endl;
            total_price=price-50;
            cout<<"Total Price: "<<total_price <<endl;
        }
       else
            cout<<"Total Price: " <<price      <<endl;
break;

default:
            cout<<"UNAVAILABLE SHIRT SIZE"     <<endl;
}

    return 0;


}
