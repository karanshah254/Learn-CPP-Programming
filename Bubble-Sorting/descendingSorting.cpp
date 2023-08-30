#include <iostream>
#include <algorithm>
using namespace std;
const int ARRAY_SIZE = 10;
int main()
{

    int arr[ARRAY_SIZE] = {3, 7, 1, 5, 2, 8, 4, 6, 9, 0};
    cout << "\n";

    cout << "Original array: ";

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    sort(arr, arr + ARRAY_SIZE, greater<int>());

    cout << "\n";

    cout << "Sorted array: ";

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}