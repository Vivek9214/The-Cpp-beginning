#include<iostream>
using namespace std;
int main()
{
    /*Loop in C++:
    There are three type of loops in C++;
        1. For loop
        2. While loop
        3. Do-while Loop
    */
    //for(initializtion; condition; updation)
    /*
          loop body(C++ Code);
    */
    // for(int i = 0; i<=100; i++)
    // {
    //     /*code*/
    //     cout<<i<<endl;
    // }
    
    //while loop in c++:
   //while(condition)
   //Printin 1 to 40 using while loop:
//    int i=1;
//     while(i<=40)
//     {

//         cout<<i<<endl;
//         i++;
//     }

// do{
//     cout<<i<<endl;
//     i++;
// }while(i<=40);
int i;
for(i=1; i<=100; i++)
{
   
    if(i%2==0)
    cout<<i<<endl;

    if(i%3==0)
    cout<<i<<endl;
    
}


return 0;


}
