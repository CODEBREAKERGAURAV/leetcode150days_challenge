#include<iostream>
using namespace std;
int main()
{
  for(int i=1;i<=5;i++)
  {
    if(i%2==0)
    {
      for(int j=1;j<=i;j++)
      { 
        int a=64+j;
        cout<<(char)a;
      }
    }
    else
    {
      for(int j=1;j<=i;j++)
      {
        cout<<j;
      }
    }
    cout<<endl;
  }
}