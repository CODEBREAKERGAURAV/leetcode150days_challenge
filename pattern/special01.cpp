#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"enter number"<<endl;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n-i;j++)
    {
      cout<<" ";
    }
    for(int k=64+i;k>=65;k--)
    {
      cout<<(char)k;
    }
    if(i>=2)
    {
      for(int k=66;k<=65+i;k++)
    {
      cout<<(char)k;
    }
    }
    cout<<endl;
  }
}