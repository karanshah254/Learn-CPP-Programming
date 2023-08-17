/*

Chef started watching a movie that runs for a total of X minutes.
Chef has decided to watch the first Y minutes (Y is even) of the movie at twice the usual speed.
How long will Chef spend watching the movie in total?


Input : X = 100 , Y = 20

Output : Time Taken = 90

Explanation :

 Y min has been watched in twice speed
 so Y becomes Y/2

 so total time to watch movie is :

 time = X - Y + (Y/2)

*/

#include <iostream>
using namespace std;

int main()
{
    int t;

    cout << "\nEnter Limti : ";
    cin >> t;

    while (t--)
    {
        int X, Y;

        cout << "\nEnter Total Movie Time & Watch Time in minutes : ";
        cin >> X >> Y;

        int watchTime;

        watchTime = X - Y + (Y / 2);

        cout << "\nMovie had been watched in "
             << watchTime << " minutes" << endl;
    }
}