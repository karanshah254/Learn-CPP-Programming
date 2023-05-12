#include <iostream>
using namespace std;

int main()
{
    int i, j;

    cout << "\n";

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j == 2 || j == 4)
            {
                cout << "0";
            }
            else
            {
                cout << "1";
            }
        }

        cout << "\n";
    }

    return 0;
}

/*

Print Below Pattern

10101
10101
10101
10101
10101

*/