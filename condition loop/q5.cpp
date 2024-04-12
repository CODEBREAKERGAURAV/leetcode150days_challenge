#include<iostream>
using namespace std;
int main ()
{
  char c1,c2;
  cout<<"enter the first character"<<endl;
  cin>>c1;
  cout<<"enter the second number"<<endl;
  cin>>c2;
  c1=(int)c1;
  c2=(int)c2;
  int diff=c1-c2;
  cout<<diff;
}