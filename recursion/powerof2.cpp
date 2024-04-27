#include<iostream>
using namespace std;

void power2(int n)
{
  if(n==1)
  {
    cout<<"power of 2";
    return;
  }
  else if(n%2!=0)
  {
    cout<<"not power";
    return;
  } 
  else return power2(n/2);
}
int main()
{
  power2(17);
}