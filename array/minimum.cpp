#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"enter number of element"<<endl;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int min=a[0];
  for(int i=0;i<n;i++)
  {
    if(a[i]<min)
    {
      min=a[i];
    }
  }
  cout<<min;
}