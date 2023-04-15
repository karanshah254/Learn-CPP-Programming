#include <iostream>
using namespace std;

int main()
{
    int age;
    int valid_age = 18;

    cout << "Enter USer Age : ";
    cin >> age;

    if (age >= valid_age)
    {
        cout << "User is eligible for voting .";
    }
    else
    {
        cout << "User is not eiligible for voting .";
    }

    return 0;
}