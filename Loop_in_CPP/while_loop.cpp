#include <iostream>
using namespace std;
int main()
{
    int a;
    int n;
    a = 1;

    cout << "Welcome to Loop" << endl
         << endl;

    cout << "Enter End Limit : ";
    cin >> n;

    while (a <= n)
    {
        cout << a << endl;

        a = a + 1;
    }

    return 0;
}