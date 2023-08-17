
#include <iostream>
using namespace std;

int main()
{
    int A = 30;
    int B = 45;
    int C = 36;

    cout << "\nMaximum is : " << max(A, B) << endl;

    cout << "\nMinimum is : " << min(A, B) << endl;

    cout << "\nAbsolute VAlue : " << abs(A - C) << endl; // Returns Absolute Value

    cout << "\nAbsolute VAlue : " << abs(C - A) << endl; // Returns Absolute Value

    int D = 6;
    int E = 9;

    cout << "\nAnswer : " << A % D << endl;  // returns remainder 

    cout << "\nAnswer : " << A % E << endl; // returns remainder 

    return 0;
}