#include <iostream>
using namespace std;
int main()

{
    float Grade;
    float major_exam, ave_LQuiz, ave_ShQuiz, LQ1, LQ2, SQ1, SQ2, SQ3;


    cout << "Major Exam: "; cin >> major_exam;
    cout << endl;

    cout << "Long Quiz 1: "; cin >> LQ1;
    cout << "Long Quiz 2: "; cin >> LQ2;

ave_LQuiz = (LQ1 + LQ2) / 2;
    cout << "Ave of the long quizzes: "; cout << ave_LQuiz << endl;
    cout << endl;

    cout << "Short Quiz 1: "; cin >> SQ1;
    cout << "Short Quiz 2: "; cin >> SQ2;
    cout << "Short Quiz 3: "; cin >> SQ3;

ave_ShQuiz = (SQ1 + SQ2 + SQ3) / 3;
    cout << "Ave of the short quizzes: "; cout << ave_ShQuiz << endl;
    cout << endl;


Grade = ((major_exam * 0.40)+ (ave_LQuiz * 0.30) + (ave_ShQuiz * 0.30));
    cout << "GRADE: "; cout << Grade << endl;

    if (Grade > 75)
        cout << "You PASSED!";
    else
        cout << "You FAILED";

    return 0;
}
