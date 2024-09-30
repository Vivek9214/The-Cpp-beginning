//WAP to particing employes salary according to their working hour
#include<iostream>
#include<string>
using namespace std;
int main(){
     char employe [11];
     float salary, da=0, hra=0, gs;
     cout<<"Enter the name of employe: ";
     cin>>employe;
     cout<<"Enter the employe's is salary: ";
     cin>>salary;
     if(salary<=10000)
     {
        da=(salary /100 * 30); hra=(salary / 100 * 10);
        cout<<"da: "<<da<<endl;
        cout<<"hour: "<<hra<<endl;
     }
     else if(salary > 10000 && salary <= 15000)
       {da=(salary / 100*40); hra=(salary/100*15);
       cout<<"da : "<<da<<endl;
       cout<<"Hour : "<<hra<<endl;
       }
    else if(salary > 15000 && salary <= 20000)
    {
        da=(salary / 100*50); hra=(salary/100*20);
        cout<<"da : "<<da<<endl;
        cout<<"Hour : "<<hra<<endl;
    }
    else 
       da=(salary / 100 * 60); hra=(salary/100 * 25);
       cout<<"da : "<<da<<endl;
       cout<<"Hour : "<<hra<<endl;

    gs=da+hra+salary/2;
    cout<<"Employe gross salary is : "<<gs;
    return 0;
}