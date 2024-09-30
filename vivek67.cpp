#include<iostream>
using namespace std;

int main()
{
    int num1, num2;
    char op;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

           switch(op)
     {
              case '+':
           cout << num1 << " + " << num2 << " = " << num1 + num2;
           break;
           case '-':
           cout << num1 << " - " << num2 << " = " << num1 - num2;
           break;
           case '*':
           cout << num1 << " * " << num2 << " = " << num1 * num2;
           break;
           case '/':
           cout << num1 << " / " << num2 << " = " << (double)num1 / (double)num2;
           break;
           default:
           cout << "Are yaar galt password dala he :)";
           break;
    }    return 0;
}
