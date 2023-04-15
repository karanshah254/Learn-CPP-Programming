#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int no;

    // Check the number is divisible by user choice number .

    cout << "Enter Number in numerator part : ";
    cin >> a;

    cout << "Enter number in denominator part : ";
    cin >> no;

    if (a % no == 0)
    {
        cout << "Surely divisible...." << endl;
    }
    else
    {
        cout << "Not divisible...." << endl;
    }

    cout << "Enter Another Number in Numerator Part : ";
    cin >> b;

    if (b % no == 0)
    {
        cout << "It is divisible...." << endl;
    }
    else
    {
        cout << "Not Divisible" << endl;
    }

    cout << "****Thank You****" << endl;

    return 0;
}