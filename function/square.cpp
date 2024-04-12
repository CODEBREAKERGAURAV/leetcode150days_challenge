#include<iostream>
using namespace std;
int square(int n)
{
  int num=n*n;
  return num;
}

int main()
{
  int n;
  cout<<"enter the number"<<endl;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    int v=square(i);
    cout<<v<<endl;
  }
   
}