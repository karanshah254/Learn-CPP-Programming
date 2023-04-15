#include <iostream>
using namespace std;

/*
Example :-

Enter Students Marks out of 100 : 65
You Are Passed ! Go Ahead and Conquer the Territory !

*/

int main()
{
    int marks;
    int pass_marks = 33;

    cout << "Enter Students Marks out of 100 : ";
    cin >> marks;

    if (marks > pass_marks)
    {
        cout << "You Are Passed ... Go Ahead and Conquer the Territory !";
    }
    else if (marks == pass_marks)
    {
        cout << "You are passed ... but work hard next time !";
    }
    else
    {
        cout << "You are failed in finals ... You have to reappear for the exams !";
    }

    return 0;
}
