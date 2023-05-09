#include <iostream>
using namespace std;

int main()
{
    int t;

    cout << "Enter Test Cases : ";
    cin >> t;

    while (t--)
    {
        int n;

        cout << "Enter numbers : ";
        cin >> n;

        cout << n + 1 << endl;
    }
}