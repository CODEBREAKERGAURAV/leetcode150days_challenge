#include<iostream>
using namespace std;
int main()
{
  int m,n;
  cout<<"number of row"<<endl;
  cin>>m;
  cout<<"number of column"<<endl;
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
      if(i%2==0)
      {
    for(int j=0;j<n;j++)
    {
      
        cout<<a[i][j];
    }
      }
      else{
        for(int j=n-1;j>=0;j--)
        {
          cout<<a[i][j];
        }
      }
  }

}