#include <iostream>
using namespace std;
int main()
{
    int num[5] = {10, 20, 30, 40, 50};

    for (int i : num)
    {
        cout << i << endl;
    }

    return 0;
    
}