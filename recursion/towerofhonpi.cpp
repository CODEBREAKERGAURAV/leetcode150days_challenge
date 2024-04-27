#include<iostream>
using namespace std;

void honoi(int n,char s,char h,char d)
{ 
  if(n==0) return ;
  honoi(n-1,s,d,h);
  cout<<s<<" ->"<<d<<endl;
  honoi(n-1,h,s,d);

}
int main()
{
  honoi(3,'A','B','C');
}