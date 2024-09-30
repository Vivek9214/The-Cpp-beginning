//WAP of pointer to pointer
#include<iostream>
using namespace std;

int main()
{
    int a, *p, *q;
    cout<<"Enter the value of A :";
    cin>>a;
    p = &a;
    q = p;

    cout<<a<<endl;
    cout<<*p<<endl<<*q<<endl;
    
    return 0;
}