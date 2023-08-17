#include <iostream>
using namespace std;

int main()
{
    int t;

    cout << "\nEnter Test CAses : ";
    cin >> t;

    while (t--)
    {
        int N;
        cin >> N;
        int total_games = N / 30;
        int remaining_time = N % 30;
        cout << total_games << " " << remaining_time << endl;
    }

    return 0 ;
}