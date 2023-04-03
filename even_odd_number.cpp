#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int den = 2;

    cout << endl
         << "Enter Numerator Part : ";
    cin >> a;

    if (a % den == 0)
    {
        cout << "Number is even" << endl;
    }
    else
    {
        cout << "Number is odd" << endl
             << endl;
    }

    cout << endl
         << "Enter Another Number in Numerator : ";
    cin >> b;

    if (b % den == 0)
    {
        cout << "Second Number is even" << endl;
    }
    else
    {
        cout << "Another Number is odd" << endl
             << endl;
    }

    cout << ">>> Thank You <<<";

    return 0;
}