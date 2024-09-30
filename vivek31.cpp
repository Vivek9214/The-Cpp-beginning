#include<iostream>
using namespace std;
int main(){
    int ts, s, m, h, t;
    ts=3678; 
    t=ts;
    h=t/3600;
    t=t%3600;
    m=t/60;
    s=t%60;
    cout<<t<<endl<<h<<endl<<m<<endl<<s;
    return 0;
    
 }