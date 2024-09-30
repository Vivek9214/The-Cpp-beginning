//WAP for discount on purchase
#include<iostream> 
using namespace std;
int main()
{
    int pa, dis=0, a=0;
    cout<<"Enter the value of Parchese : ";
    cin>>pa;
    
    if(pa<=5000)
    cout<<"Discount 400";
    
    else if(pa>5000 && pa <=10000)
    cout<<"Discount 800";
    
    else if(pa>10000 && pa <= 20000)
    cout<<"Discount 1000";
    
    else 
    a=(pa-2000);
    dis=(a/100*3+2000);
    
    cout<<endl<<"Net Amount After Discount : "<<pa-dis;
    cout<<endl<<"Total discount : "<<dis;
    
    return 0;
}