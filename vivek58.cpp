#include<iostream>
using namespace std;
int main()
{
    int pas;
    cout<<"Enter the Number: ";
    cin>>pas;

    switch(pas)
    {
        case 1010:
        cout<<"Password are correct "; break;

        default :
        cout<<"Invalid Password"; break;
    }
    return 0;
}