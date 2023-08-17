/*

In Chefland, each chicken has
X legs and each duck has Y legs.

Chef's farm can have exactly one type of bird. '
But it can have many birds of that type.
Given that the birds on the farm have a total of Z legs:


    Print CHICKEN, if the farm can have only chickens but not ducks.
    Print DUCK, if the farm can have only ducks but not chickens.
    Print ANY, if the farm can have either chickens or ducks.
    Print NONE, if the farm can have neither chickens nor ducks.

    Input:
    2 3 5

    Output:
    NONE

    EXPLANATION:
    - > For X = 2 , Y =3 , Z = 5
    - > There are 5 legs on the farm. Each chicken has 2 legs and each duck has 3 legs.
        Thus, the farm can have neither chickens nor ducks.

*/

#include <iostream>
using namespace std;

int main()
{
    int t;

    cout << "\nEnter Limit : ";
    cin >> t;

    while (t--)
    {
        int x, y, z;

        cout << "\n\nEnter Number of legs of chicken , duck and total legs in field : ";
        cin >> x >> y >> z;

        if ((z % x == 0) && (z % y == 0))
        {
            cout << "\nANY";
        }
        else if (z % x == 0)
        {
            cout << "\nCHICKEN";
        }
        else if (z % y == 0)
        {
            cout << "\nDUCK";
        }
        else
        {
            cout << "\nNONE";
        }
    }

    return 0;
}
