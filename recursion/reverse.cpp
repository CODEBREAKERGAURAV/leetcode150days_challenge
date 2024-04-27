#include<iostream>
using namespace std;

void revnum(int n,int ans)
{
  if(n==0)
  {
    cout<<ans;
    return;
  }
 int  v=n%10;
  ans=ans*10+v;
  revnum(n/10,ans);
  

}


int main()
{
  int n;
  cout<<"Enter number";
  cin>>n;
  int ans=0;
  revnum(n,ans);
  return 0;
}