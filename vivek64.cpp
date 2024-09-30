
#include<iostream>
using namespace std;
int main()
{
     int i, sum, n;
     cout<<"Enter the value of N: ";
     cin>>n;
     sum=0;
     i=1;
     while(i<=n)
     {
        sum=sum+i;
        if(i<=n)
        {
            cout<<sum<<endl;
            i++;
        }
     }

    return 0;
 }
