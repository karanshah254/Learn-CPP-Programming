
#include <iostream>
using namespace std;

int main()
{
    int t;

    cout << "Enter Test Cases : ";
    cin >> t;

    while (t--)
    {
        cout << "Enter Valid Numbers : " << endl;
        int A, B, C, D, E;

        cin >> A >> B;

        cin >> C >> D >> E;

        cout << A << " " << B << " " << C << " " << D << " " << E << endl;
    }
    return 0;
}

/*

Input :

3
1 2
3 4 5
11 22
33 44 55
1 23
456 789 101112

Output :

1 2 3 4 5
11 22 33 44 55
1 23 456 789 101112

*/
