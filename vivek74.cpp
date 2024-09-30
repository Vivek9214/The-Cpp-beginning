#include<iostream>
using namespace std;

class vivek
{
private:
    int a, b, c;
public:
    int d, e;
    void setData(int a1, int b1, int c1); //Declration
    void getData()
    {
        cout<<"The value of a is : "<< a <<endl;
        cout<<"The value of b is : "<< b <<endl;
        cout<<"The value of c is : "<< c <<endl;
        cout<<"The value of d is : "<< d <<endl;
        cout<<"The value of e is : "<< e <<endl;        
    }
};

void vivek::setData(int a1, int b1, int c1)
{
    a=a1;
    b=b1;
    c=c1;
}
int main()
{
    vivek hellow;
    hellow.d=24;
    hellow.e=89;
    hellow.setData(21,12,41);
    hellow.getData();
    return 0;
}