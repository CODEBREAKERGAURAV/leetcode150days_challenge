#include<iostream>
using namespace std;
int main()
{
  int n,count=0;
  cout<<"enter number of elements"<<endl;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(int i=0;i<n;i++)
  {
    for(int j=i;j<n;j++)
    {
      if(a[i]==a[j])
      {
        count++;
      }
    }
    if(count==1)
    {
      cout<<"unique found";
      break;
    }
    else{
      cout<<"not found";
      break;
    }
  }
  

  


}