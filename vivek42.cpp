#include<iostream>
using namespace std;
int main(){
    char gender;
    cout<<"Enter the Gender: ";
    cin>>gender;

    switch(gender)
    {
        case  'M' & 'm':
        cout<<"Male "<<endl;
        break;

        case  'F' & 'f':
        cout<<"Female"<<endl;
        break;

        return 0;

    }
    
}