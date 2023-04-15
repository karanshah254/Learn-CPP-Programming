#include <iostream>
using namespace std ;
int main()
{
    int a,b,c;

    cout << "Enter 3 Numbers a,b,c : " << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    if(a>b)
    {
        if(a>c)
        {
            cout << "a is bigger" ;
        }   
        else
        {
            cout << "c is bigger";
        }
    }
    else if(b>a)
    {
        if(b>c)
        {
            cout << "b is bigger" ;
        }
        else 
        {
            cout << "c is bigger" ;
        }
    }
}