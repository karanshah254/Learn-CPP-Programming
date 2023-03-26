#include <iostream>

using namespace std;

int main()
{
    double pi = 3.14;
    int r;
    double area;

    cout << "Enter Radius : ";
    cin >> r; // take input from user .

    area = pi * r * r;

    cout << "The area of circle : " << area;
}