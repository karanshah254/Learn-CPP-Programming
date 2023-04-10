#include <iostream>
#include <string>
using namespace std ;

int main()
{
     string months[5] = {"January" , "February" , "December" , "April"};

    months[2] ={"March"};

    cout << "Now new element is : " << months[2] << endl ;

    cout << "Final Array is : " << "{ " <<  months[0] << " " << months[1] << " " << months[2] << " " << months[3] << " " << months[4] << "}" ;

    return 0;
}