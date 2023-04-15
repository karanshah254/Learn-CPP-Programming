#include <iostream>
using namespace std;

int main()
{
    string name[5] = {"K", "A", "R", "A", "N"};
    int i;

    for (int i = 0; i < 5; i++)
    {
        cout << "At " << i << " position value given = " << name[i] << endl;
    }

    return 0;
}