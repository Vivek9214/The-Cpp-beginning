#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter the value of A: ";
    cin>>a;
    cout<<"Enter the value of B: ";
    cin>>b;
    
    if(a>b)
    cout<<a;
    else if(a==b)
    cout<<"Both value of are equal";
    else 
    cout<<b;
    
    return 0;
}