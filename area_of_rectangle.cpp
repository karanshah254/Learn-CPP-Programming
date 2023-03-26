#include <iostream>
using namespace std;

int main()
{
    int length, width;
    int area;

    cout << "Enter Length : ";
    cin >> length;

    cout << "Enter width : ";
    cin >> width;

    area = length * width;

    cout << "The area of rectangle --> " << area;

    /*
    Output :
    Enter Length : 15
    Enter width : 15
    The area of rectangle --> 225
    */
}