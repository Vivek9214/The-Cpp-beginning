#include <iostream>
using namespace std;
int main()
{
    int month;
    cout << "Enter the Month Number: ";
    cin >> month;
    if (month == 1)
        cout << "January 31";
    else if (month == 2)
        cout << "February 28";
    else if (month == 3)
        cout << "March 31";
    else if (month == 4)
        cout << "April 30";
    else if (month == 5)
        cout << "May 31";
    else if (month == 6)
        cout << "June 30";
    else if (month == 7)
        cout << "July 31";
    else if (month == 8)
        cout << "August 31";
    else if (month == 9)
        cout << "September 30";
    else if (month == 10)
        cout << "October 31";
    else if (month == 11)
        cout << "November 30";
    else if (month == 12)
        cout << "December 31";
    else
        cout << "Invalid Number";

    return 0;
}