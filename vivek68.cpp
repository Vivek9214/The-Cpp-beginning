#include<iostream>
using namespace std;

    struct emloyee
    {
        int eld;
        char favChar;
        float salary;
    };

    int main()
    {
    struct emloyee vivek;
    vivek.eld = 1;
    vivek.favChar = 'c';
    vivek.salary = 12000.33;
    cout<<vivek.eld<<endl;
    cout<<vivek.favChar<<endl;
    cout<<vivek.salary;
    return 0;
    }