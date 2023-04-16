
/*

Q - Print fibonacci series for first N numbers ?

Answer : 0 1 1 2 3 5 8 13 ......

*/

#include <iostream>
using namespace std;

int main()
{
    int n, t1, t2, new_term;

    t1 = 0;
    t2 = 1;

    cout << "Enter End Range : ";
    cin >> n;

    cout << t1 << " " << t2;

    for (int i = 3; i <= n; i++)
    {
        new_term = t1 + t2;
        t1 = t2;
        t2 = new_term;

        cout << " " << new_term;
    }
}