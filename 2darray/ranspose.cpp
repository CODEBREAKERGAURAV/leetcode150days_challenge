#include<iostream>
using namespace std;
int main()
{
  int m,n;
  cout<<"enter number of row\n";
  cin>>m;
  cout<<"enter number of column\n";
  cin>>n;
  int a[m][n];
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      cin>>a[i][j];
    }
  }
  for(int i=0;i<m;i++)
  {
    for(int j=i;j<n;j++)
    {
      int temp=a[i][j];
      a[i][j]=a[j][i];
      a[j][i]=temp;
    }
  }
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }

}