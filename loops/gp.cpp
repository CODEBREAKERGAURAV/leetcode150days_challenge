#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"enter number"<<endl;
  cin>>n;
  int sequence=3;
  for(int i=1;i<=n;i++)
  {
    cout<<sequence<<endl;
    sequence=sequence*4;
    

  }
}