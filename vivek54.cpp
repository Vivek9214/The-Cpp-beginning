#include<iostream>
using namespace std;
int main()
{
    char gender;
    cout<<"Enter the Gender: ";
    cin>>gender;
    
    switch(gender)
    {
        case 'm':
        cout<<"Male";
        break;
    
        case 'f':
        cout<<"Female";
        break;

    }
    return 0;
}