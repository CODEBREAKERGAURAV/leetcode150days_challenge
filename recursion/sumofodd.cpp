#include<iostream>
using namespace std;

int oddsum(int a,int b,int sum)
{
  if(a>b)
  {
    cout<<sum;
  }
  else return oddsum(a+2,b,sum+a);

}
int main()
{
  oddsum(1,9,0);
}
