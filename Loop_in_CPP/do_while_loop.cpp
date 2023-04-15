#include <iostream>
using namespace std;

int main()
{
    int a = 1, n;

    cout << "Enter Range : ";
    cin >> n;

    do
    {
        cout << a << endl;
        a = a + 1;
    } while (a <= n);

    return 0;
}
