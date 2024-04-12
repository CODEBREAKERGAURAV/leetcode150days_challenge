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
  int product=1;
  for(int i=0;i<n;i++)
  {
    product=product*a[i];
  }
  cout<<product;

}