#include<iostream>
using namespace std;

int area(float r)
{
  float circle=3.14*r*r;
  return circle;
}

int main()
{
  float r;
  cout<<"enter radius of circle"<<endl;
  cin>>r;
   int v=area(r);
  cout<<v;
}