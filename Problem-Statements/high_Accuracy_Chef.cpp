#include <iostream>
using namespace std;

int main()
{
    int t;

    cout << "\n\nENter Time Limit : ";
    cin >> t;

    while (t--)
    {
        int X;

        cout << "\nEnter Received MArks : ";
        cin >> X;

        if (X % 3 == 0)
        {
            cout << "\nHas 0 Incorrect answers";
        }
        else if ((X + 1) % 3 == 0)
        {
            cout << "\nHas 1 Incorrect answers";
        }
        else
        {
            cout << "\nHas 2 incorrect answers";
        }
    }

    return 0;
}

/*

Chef is giving exam
For each correct answer he gets +3 marks
For each wrong answer his marks got deducted by 1 .

Take input as marks out of 100 obtained and print how many answer he get wrong

*/