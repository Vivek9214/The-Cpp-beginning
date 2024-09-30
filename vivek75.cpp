#include <iostream>
#include <string>
using namespace std;
class binary
{
    string s;

public:
    // These are Data memebers
    void read(void);
    void chk_bin(void);
    void one_compliment(void);
    void display(void);
};

void binary :: read(void)  //This is a sub class
{
    cout << "Enter a binary number: " << endl;
    cin >> s;
};

void binary :: chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1') // This was a check binary number :)
        {
            cout << "Incorrect binary format" << endl;       
            exit(404);
        }
    }
}
void binary ::one_compliment(void)
{
    for (int i = 0; i < s.length(); i++)
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    cout << endl;
}
void binary ::display(void)
{
    cout << "Display you binary number: " << endl;
    for (int i = 0; i < s.length(); i++)
    cout << s.at(i);
}
int main()
{
    // OOPS  - Classes and Ojects
    // C++ --> initiallly called --> c with classes by stroustroup
    // class --> etention of structures ( in C)
    // strutures had limitations
    //   - members are public
    //   - No emthods
    // class   --> sturctures + more
    // classes --> can have methods and projerties
    // classes --> can makes few members as private & few as public
    // structures in C++ are typedefed
    // you can declare objects right along with class declarion like this:
    //     class Employee{
    //         Class definition
    //     } harry, rohan, lovish;
    // vivek.salary = 8 makes no sense if salary is private
    // Nesting of memer functions
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.one_compliment();
    b.display();

    return 0;
}