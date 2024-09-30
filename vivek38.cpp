#include<iostream>
using namespace std;
int main(){
int a;

cout<<"Enter the value of A: ";
cin>>a;

if(a%5==0 && a%11==0)
cout<<"Yes";
else 
cout<<"No";
return 0;
}