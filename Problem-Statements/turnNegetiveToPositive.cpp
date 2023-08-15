
#include <iostream>
using namespace std;

int main()
{
    int t;

    cout << "\nEnter limit of t : ";
    cin >> t;

    while (t--)
    {
        int N;

        cout << "\nEnter Number of user wish : ";
        cin >> N;

        cout << "\nOutput is : " << 0 - N << endl;
    }

    return 0;
}

/*

Input : 1, 2, -5, -52

Output : -1, -2, 5, 52

*/