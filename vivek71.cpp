#include<iostream>
using namespace std;
int main()
{
    int a[6];
    int *b;
    b=a;
    cout<<"Enter the value you want : ";
    for (int i=0; i<=4; i++)
    {
        cin>>*(b+i);
        
    }
    for( int i=0; i<=4; i++)
    {
        cout<<*(b+i)<<" ";
    }
    

    return 0;
}