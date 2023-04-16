
/*

Q - Check whether a number is prime or not .

*/

#include <iostream>
using namespace std;
int prime_no(int a);
int main()
{
    cout << "USer will enter number to check if it is prime or not" << endl;

    int value;

    value = prime_no(13);
}

int prime_no(int a)
{
    int i;
    int flag = 0;

    for (int i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << a << " is prime number" << endl;
    }
    else
    {
        cout << a << " is not a prime number" << endl;
    }
}