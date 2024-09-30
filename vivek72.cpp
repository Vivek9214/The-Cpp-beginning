#include<iostream>
using namespace std;
int main()
{
  int a[50][50],i,j,n,m;
  cout<<"Enter the Row: ";
  cin>>n;
  cout<<"Enter columns : ";
  cin>>m;
  cout<<"Enter "<<n*m<<" Data"<<endl;

  for(i=0; i<n; i++)
  {
    for (j = 0; j < m; j++)
    {
      /* code */
      cin>>a[i][j];
    }
  }
  for(i=0; i<n; i++)
  {
    for(j=0; j<m; j++)
    cout<<a[i][j]<<" ";
  }
  cout<<endl;

  return 0;
}