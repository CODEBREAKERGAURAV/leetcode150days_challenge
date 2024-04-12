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
  int minr=0,maxr=m-1;
  int minc=0,maxc=n-1;
  int tne=m*n;
   int  count=0;
  while(minr<=maxr && minc<=maxc)
  {
    for(int j=minc;j<=maxc && count<tne;j++)
    {
      cout<<a[minr][j]<<" ";
      count++;
    }
    minr++;
    for(int i=minr;i<=maxr && count< tne;i++)
    {
      cout<<a[i][maxc]<<" ";
      count++;
    }
    maxc--;
    for(int j=maxc;j>=minc && count<tne;j--)
    {
      cout<<a[maxr][j]<<" ";
      count++;
    }
    maxr--;
    for(int i=maxr;i>=minr && count<tne;i--)
    {
      cout<<a[i][minc]<<" ";
      count++;
    }
    minc++;

  }
  
}

