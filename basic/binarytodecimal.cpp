#include<iostream>
using namespace std;
int main()
{
  int a[4];
  cout<<"enter four digit binary"<<endl;
  for(int i=0;i<4;i++)
  {
    cin>>a[i];
  }
  int sum=0,x=1;
  for(int i=3;i>=0;i--)
  {
    sum+=a[i]*x;
    x=x*2;
  }
  cout<<"digital number is"<<endl;
  cout<<sum;

}