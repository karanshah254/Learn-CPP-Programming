/*
Q - Sum of array elements

Pseudocode :

Enter elements :
1 2 3 4 5

sum = 15

*/

#include <iostream>
using namespace std;

int main()
{
    int array[50], i;
    int n;
    int sum = 0;

    cout << "\n";
    cout << "Enter how many elements you want to enter to find the sum : ";
    cin >> n;

    cout << "Enter " << n << " Numbers :" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + array[i];
    }

    cout << "Sum of any " << n << " numbers is : " << sum << endl;

    return 0;
}