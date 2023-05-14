/*

Print Below Pattern

1
22
333
4444
55555

*/

#include <iostream>
using namespace std;

int main()
{
    int i, j;
    int k = 1;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << k;
        }
        k++;

        cout << "\n";
    }

    return 0;
}