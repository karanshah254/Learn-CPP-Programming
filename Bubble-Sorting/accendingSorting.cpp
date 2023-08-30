#include <iostream>
using namespace std;
void selectionSort(int a[], int n)
{
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
            if (a[j] < a[min])
                min = j;
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}
int main()
{
    int a[] = {69, 20, 10, -50, -8, 74, 55, 50, 0, 100};
    int n = sizeof(a) / sizeof(a[0]);
    int i;

    cout << "Given array is: " << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    selectionSort(a, n);

    printf("\nSorted array in accending is: \n");
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}