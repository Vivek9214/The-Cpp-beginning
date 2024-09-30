#include<iostream>
using namespace std;
int main(){
    int a, sq;
    cout<<"Enter the value of A";
    cin>>a;

    sq=a*a;
    if(a%10==5)
    cout<<sq;

    else 
    cout<<"Remainder is not 5";
    
    return 0;
    
}