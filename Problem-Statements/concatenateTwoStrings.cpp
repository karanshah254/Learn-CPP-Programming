#include <iostream>
using namespace std;

int main()
{
    int l;

    cout << "\nEnter Limit (l) : ";
    cin >> l;

    while (l--)
    {
        string s, x;

        cout << "\n\nEnter String : ";
        cin >> s;

        x = s;

        x = x + s;

        cout << "\nCocatenated Strings are : " << x;
    }

    return 0;
}

/*

Input : ab -------> Output : abab 

*/