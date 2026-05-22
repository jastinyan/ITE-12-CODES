#include <iostream>
using namespace std;
int main()

{
    //Student equivalent grades.
    string name;
    float midterm_grade, minor_B, final_exam_rate;
    float final_grade;

    cout<<"Student name: ";     cin>>name;
    cout<<"Midterm grade: ";    cin>>midterm_grade;
    cout<<"Minor B: ";          cin>>minor_B;
    cout<<"Final Exam rate: ";  cin>>final_exam_rate;
    cout<<endl;

final_grade=((midterm_grade*.30)+ (minor_B*.10)+ (final_exam_rate*.60));
    cout<<"Final Grade: " <<final_grade <<endl;

    if (final_grade>=98&&final_grade<=100)
        cout<<"Equivalent Grade: 4.00" <<endl;
        else
    if (final_grade>=95&&final_grade<=97)
        cout<<"Equivalent Grade: 3.75" <<endl;
        else
    if (final_grade>=92&&final_grade<=94)
        cout<<"Equivalent Grade: 3.50" <<endl;
        else
    if (final_grade>=89&&final_grade<=91)
        cout<<"Equivalent Grade: 3.25" <<endl;
        else
    if (final_grade>=86&&final_grade<=88)
        cout<<"Equivalent Grade: 3.00" <<endl;
        else
    if (final_grade>=83&&final_grade<=85)
        cout<<"Equivalent Grade: 2.75" <<endl;
        else
    if (final_grade>=80&&final_grade<=82)
        cout<<"Equivalent Grade: 2.50" <<endl;
        else
    if (final_grade>=77&&final_grade<=79)
        cout<<"Equivalent Grade: 2.25" <<endl;
        else
    if (final_grade>=74&&final_grade<=76)
        cout<<"Equivalent Grade: 2.00" <<endl;
        else
    if (final_grade>=71&&final_grade<=73)
        cout<<"Equivalent Grade: 1.75" <<endl;
        else
    if (final_grade>=68&&final_grade<=70)
        cout<<"Equivalent Grade: 1.50" <<endl;
        else
    if (final_grade>=64&&final_grade<=67)
        cout<<"Equivalent Grade: 1.25" <<endl;
        else
    if (final_grade>=60&&final_grade<=63)
        cout<<"Equivalent Grade: 1.00" <<endl;
        else
    if (final_grade<60)
        cout<<"Equivalent Grade: 0.00" <<endl;


    return 0;
}
