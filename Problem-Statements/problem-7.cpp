
#include <iostream>
using namespace std;

int main()
{
    int t;

    cout << "Enter Limit : ";
    cin >> t;

    while (t--)
    {
        int N;

        cout << "\nEnter Number : ";
        cin >> N;

        cout << "\nDesired Output : ";
        cout << N + 10 << endl; // Print (Numeber + 10) as output
    }

    return 0;
}