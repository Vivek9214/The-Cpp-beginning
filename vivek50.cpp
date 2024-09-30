#include<iostream>
using namespace std;
int main()
{
    int day;
    cout<<"Enter the day Number : ";
    cin>>day;
    switch(day){
        case 1: 
        cout<<"Monday";
        
        case 2:
        cout<<"Tuesday";

        case 3:
        cout<<"Wednesday";

        case 4:
        cout<<"Thrusday";

        case 5:
        cout<<"Friday";

        case 6:
        cout<<"Starday";
        break;

        case 7:
        cout<<"Sunday";
        break;

        default:
        cout<<"Invalid Number";
        break;
    }
    return 0;
}
