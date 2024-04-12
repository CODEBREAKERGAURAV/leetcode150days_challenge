#include<iostream>
using namespace std;
int main()
{
  int m,n,k;
  cin>>m;
  cin>>n;
  cin>>k;
  int a1[m][n];
  int a2[n][k];
  int mul[m][k];
  cout<<"enter element of a1"<<endl;
  for(int i=0;i<m;i++)
  {

    for(int j=0;j<n;j++)
    {
      cin>>a1[i][j];
    }
  }
  cout<<"enter element of a2"<<endl;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<k;j++)
    {
      cin>>a2[i][j];
    }
  }
  cout<<"array multiplier"<<endl;
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<k;j++)
    {
      mul[i][j]=0;
      for(int p=0;p<n;p++)
      {
        mul[i][j] += a1[i][p] * a2[p][j];

      }
    }
  }
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<k;j++)
    {
      cout<<mul[i][j]<<" ";
    }
    cout<<endl;
  }
}
