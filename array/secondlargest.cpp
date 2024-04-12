#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"enter the umber of element"<<endl;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int max=a[0];
  for(int i=0;i<n;i++)
  {
    if(a[i]>max)
    {
      max=a[i];
    }

  }
  int max2=a[0];
  for(int i=0;i<n;i++)
  {
    if(a[i]>max2 && a[i]!=max)
    {
      max2=a[i];
    }
    
  }
  cout<<"maximum element is"<<max<<endl;
  cout<<"second maximum is"<<max2<<endl;

}