/*

There are N cards and X are face ups and remaining are face-down

If X > N - X then we flip N - X cards
If X < N - X then we flip X cards
if X = N - X then we flip either X or N - X .

*/

#include <iostream>
using namespace std;

int main()
{
    int N;
    int X;

    cout << "\nEnter Total Cards (N) & face-Ups cards (X) : ";
    cin >> N >> X;

    int option1 = X;
    int option2 = N - X;

    cout << "\nMinimum Cards to flip is " << min(option1, option2) << endl;

    return 0;
}