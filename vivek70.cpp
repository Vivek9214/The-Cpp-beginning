#include<iostream>
using namespace std;

    int sum(int a, int b)  //Accpetable--
//  int sum(int, int)      //Acceptable --
//  int sum(int a,b)       //Not Acceptable --
{
    int c=a+b;
    return c;
}
int main()
{
    int num1, num2;
    void g(void);
    cout<<"Enter the value of A: ";
    cin>>num1;
    cout<<"Enter the vleue of B: ";
    cin>>num2;
    cout<<"The Sum is : "<<sum(num1, num2);
    g();        //value are tell after main 
    return 0;
}
void g()
{
    cout<<"\nHellow, Hii Vivek";
}