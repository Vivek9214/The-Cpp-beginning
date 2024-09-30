//WAP to check character is upper or lower  
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character: ";
    cin>>ch;
    if(isupper(ch))
    cout<<"Upper letter";
    else if (islower(ch))
    cout<<"Lower letter";
    else
    cout<<"Invalid letter";
    
    return 0;
}