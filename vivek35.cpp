#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the value of A: ";
    cin>>a;
    if(a==0)
    cout<<"Neither even nor odd";
    else if(a%2==0)
    cout<<"Even";
    else
    cout<<"odd";
    return 0;
}