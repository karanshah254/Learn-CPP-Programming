#include <iostream>
using namespace std;

int main()
{
    int x, y;
    double sum, product, diff, div;
    x = 15;
    y = 20;

    sum = x + y;
    diff = x - y;
    product = x * y;
    div = y / x;

    cout << "The Sum, Difference, Product, Quotient : " << endl
         << sum << endl
         << diff << endl
         << product << endl
         << div;
    // cout is similar to printf in C Programming .
    // endl is similar to \n to insert new line .

    /*
    The Sum, Difference, Product, Quotient :
    35
    -5
    300
    1
    */
}