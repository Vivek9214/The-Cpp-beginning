#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a, b, c, s, area;
    a=20.0; b=15.0; c=5.0; s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<area;
    return 0;

}