#include<iostream>
using namespace std;
int main()
{
  int m,n;
  cout<<"enter number of row\n";
  cin>>m;
  cout<<"enter number of coloum\n";
  cin>>n;
  int a[m][n];
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      cin>>a[i][j];
    }
  }
  int max_element=a[0][0];
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(a[i][j]>max_element)
      {
        max_element=a[i][j];
      }
    }
  }
  cout<<max_element;
}