#include <iostream>
using namespace std;

int main()
{
    int Age;
    int Vage = 18;

    cout << "Enter Valid Age of USer : ";
    cin >> Age;

    if (Age < Vage)
    {
        cout << "Not old enough to vote  ." << endl;
        cout << "Wait for " << (Vage - Age) << " years .";
    }
    else
    {
        cout << "Old enough to vote! .";
    }
    return 0;
}
