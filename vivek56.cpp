#include<iostream>
using namespace std;
int main()
{
    int a, b;
    char mark;
    cout<<"Enter Number A : ";
    cin>>a;
    cout<<"Enter the Mark: ";
    cin>>mark;
    cout<<"Enter Number B: ";
    cin>>b;
    switch(mark)
    {
        case '+':
        cout<<"The Answer is :"<<a+b; break;

        case '-':
        cout<<"The Answer is :"<<a-b; break;

        case '*':
        cout<<"The Answer is :"<<a*b; break;

        case '/':
        cout<<"The Answer is :"<<a/b; break;

        default:
        cout<<"Invalid Mark"; break;
    }
    return 0;
}