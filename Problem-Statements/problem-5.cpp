
/*

Q - Display Maximum and minimum element from an array .

*/

#include <iostream>
using namespace std;

int main()

{
    int array[50];
    int n, i;
    int min, max;

    cout << "Enter End range : ";
    cin >> n;

    cout << "Enter " << n << " elements" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (array[i] > array[0])
        {
            min = array[0];
        }
        else
        {
            min = array[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (array[i] < array[0])
        {
            max = array[0];
        }
        else
        {
            max = array[i];
        }
    }

    cout << "\n";

    cout << "Maximum element is " << max << endl;

    cout << "Minimum element is " << min << endl;
}