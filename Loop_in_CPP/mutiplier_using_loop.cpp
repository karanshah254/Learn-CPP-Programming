#include <iostream>
using namespace std;

int main()
{
    int i, n;

    cout << "Print multiplication table of user choice number" << endl;

    cout << "Enter Number : ";
    cin >> n;
    cout << endl;

    for (int i = 1; i <= 10; i++)
    {
        cout << "\t" << n << " X " << i << " = " << n * i << endl;
    }

    return 0;
}
