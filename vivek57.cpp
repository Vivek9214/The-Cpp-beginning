#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the Number: ";
    cin>>num;

    switch(num)
    {
        case 1:
        cout<<"You have Entered One"; break;

        case 2:
        cout<<"You have Entered Two"; break;

        case 3:
        cout<<"You have Entered Three"; break;

        case 4:
        cout<<"You have Entered Four"; break;

        case 5:
        cout<<"You have Entered Five"; break;

        case 6:
        cout<<"You have Entered Six"; break;

        case 7:
        cout<<"You have Enterd Seven"; break;

        case 8:
        cout<<"You have Entered Eight"; break;

        case 9:
        cout<<"You have Entered Nine"; break;

        case 10:
        cout<<"You have Entered Ten"; break;

        default :
        cout<<"Invalid Number"; break;
    } 
    return 0;
}