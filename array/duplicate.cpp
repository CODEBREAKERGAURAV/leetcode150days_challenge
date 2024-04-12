#include<iostream>
using namespace std;
int main()
{
  int a[]={2,5,6,2};
  for(int i=0;i<4;i++)
  {
    for(int j=i+1;j<4;j++)
    {
      if(a[i]==a[j])
      {
        cout<<"Duplicate exist";
        break;
      }
    }
  }
}