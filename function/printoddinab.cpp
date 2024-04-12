#include<iostream>
using namespace std;
void oddnum(int a,int b)
{
  for(int i=a;i<=b;i++)
  {
    if(i%2!=0)
    {
      cout<<i<<endl;
    }
  }
}

int main()
{
  int a,b;
  cout<<"enter a"<<endl;
  cin>>a;
  cout<<"enter b"<<endl;
  cin>>b;
  oddnum(a,b);
}