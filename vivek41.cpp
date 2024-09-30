#include<iostream>
using namespace std;
int main(){
    int day;
    cout<<"Enter the Day number: ";
    cin>>day;
    
    if(day==1)
    cout<<"Monday";
    
    else if(day==2)
    cout<<"Tuesday";
    
    else if(day==3)
    cout<<"Wednesday";
    
    else if(day==4)
    cout<<"Thrusday";
     
    else if(day==5)
    cout<<"Friday";
     
    else if(day==6)
    cout<<"Satuday";
     
    else if(day==7)
    cout<<"Sunday";
    
    else 
    cout<<"Invalid Number";
 
 return 0;
 
}