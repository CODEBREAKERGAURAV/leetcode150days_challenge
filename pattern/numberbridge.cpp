#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"enter the number"<<endl;
  cin>>n;
  for(int i=1;i<=2*n-1;i++)
  {
    cout<<"*";
  }
  cout<<endl;
  for(int i=1;i<=n-1;i++)
  {
    for(int j=1;j<=n-i;j++)
    {
      cout<<"*";
    }
    for(int k=1;k<2*i;k++)
    {
      cout<<" ";
    }
    for(int l=n-i;l>=1;l--)
    {
      cout<<"*";
    }
    cout<<endl;
  }
}