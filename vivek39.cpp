//Writee a program in c++ to check whether a number is positive, negative or zero.
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the value of A : ";
    cin>>a;
    if(a>0)
    cout<<"Positive";
    else if(a==0)
    cout<<"Zero";
    else 
    cout<<"Negative";

    return 0;
}