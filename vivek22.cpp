#include<iostream>
using namespace std;
int main(){
    int n, m, d1, d2, d3;
    n=123; m=n;
    d1=n%10; n=n/10;
    d2=n%10; n=n/10;
    d3=n%10; n=n/10;
    
    cout<<d1<<endl<<d2<<endl<<d3;
    return 0;
}