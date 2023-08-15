/*

Turn Celcius to fahrenheit

F = (9/5) * C + 32

*/

#include <iostream>
using namespace std;

int main()
{
    int i;

    float cel, fahr;

    cout << "\nPress 1 for C to F \nPress 2 for F to C \nEnter Valid Input : ";
    cin >> i;

    if (i == 1)
    {
        cout << "\nEnter Tempreture in Celcuis : ";
        cin >> cel;

        fahr = ((9 * cel) / 5) + 32;

        cout << "\nTempreture after converting " << cel << " Celcius into Fahrenheit is : " << fahr << " F";
    }

    else if (i == 2)
    {
        cout << "\nEnter Tempreture in Fahrenheit : ";
        cin >> fahr;

        cel = (5 * (fahr - 32)/9);

        cout << "\nTempreture after converting " << fahr << " Fahrenheit into Celcius is : " << cel << " C";
    }

    else
    {
        cout << "\nInvalid Input" ;
    }

    return 0;
}
