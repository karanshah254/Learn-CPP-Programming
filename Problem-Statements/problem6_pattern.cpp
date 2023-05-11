
/*

*
**
***
****
*****

*/

#include <iostream>
using namespace std;

int main()
{
    int i, j;
    int n;

    cout << "Enter Rows : ";
    cin >> n;

    cout << "\n";
    for (int i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    cout << "\n";
}