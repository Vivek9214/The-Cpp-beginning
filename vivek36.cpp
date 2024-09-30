#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Enter the value of A: ";
    cin>>a;
    cout<<"Enter the value of B: ";
    cin>>b;
    cout<<"Enter the value of C: ";
    cin>>c;
    
    if(a>b && a>c)
    cout<<a;
    else if(b>a && b>c)
    cout<<b;
    else 
    cout<<c;
return 0;
}