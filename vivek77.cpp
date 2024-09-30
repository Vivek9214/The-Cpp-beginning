 //write a c++ prgram to calculate the factorial of a given number using recursion.
 #include<iostream>
 using namespace std;
 int main()
 {
    long int fact = 1;
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    while(num>=1)
    {
        fact = fact * num;
        cout<<fact<<endl;
        num--;
        cout<<num<<endl;
    }
    cout << "Factorial of given number is : " << fact ;
    return 0;
 }