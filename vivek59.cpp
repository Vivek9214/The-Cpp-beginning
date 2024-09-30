#include<iostream>
using namespace std;
int main()
{
    int phy, cha, bio, mat, com;
    float per;
    cout<<"Enter the marks of Physics subject: ";
    cin>>phy;
    cout<<"Enter the marks of Chemistry subject: ";
    cin>>cha;
    cout<<"Enter the marks of Biology Subject: ";
    cin>>bio;
    cout<<"Enter the marks of Mathmatics subject: ";
    cin>>mat;
    cout<<"Enter the marks of Computer subject: ";
    cin>>com;
    per=(phy+cha+bio+mat+com)/5;
    cout<<per<<endl;
    
    if(per>90)
    cout<<"Grade A"<<endl;

    else if(per>80)
    cout<<"Grade B"<<endl;
   
    else if(per>70)
    cout<<"Grade C"<<endl;
    
    else if(per>60)
    cout<<"Grade D"<<endl;
   
    else if(per>40)
    cout<<"Grade E"<<endl;
    
    else 
    cout<<"Grade F"<<endl;

    return 0;
}