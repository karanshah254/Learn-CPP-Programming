/*

Print Below Pattern

11111
2222
333
44
5

*/

#include <iostream>
using namespace std;

int main()
{
    int i, j;
    int k = 1;

    for (int i = 5; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << k;
        }

        k++;

        cout << "\n";
    }
}