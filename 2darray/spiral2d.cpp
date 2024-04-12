#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int minr,maxr,minc,maxc;
  vector<vector<int> >v(4,vector<int>(4));
  minr=0,maxr=3;
  minc=0,maxc=3;
  int tne=16;
  int count=0;
  cout<<"Enter element"<<endl;
  for(int i=0;i<4;i++)
  {
    for(int j=0;j<4;j++)
    {
      cin>>v[i][j];
    }
  }
  while(minr<=maxr && minc<=maxc)
  {
     for(int j=minc;j<=maxc && count<tne;j++)
     {
      cout<<v[minr][j]<<" ";
      count++;
     }
     minr++;
     for(int j=minr;j<=maxr && count<tne;j++)
     {
      cout<<v[j][maxc]<<" ";
      count++;
     }
     maxc--;
     for(int j=maxc;j>=minc && count<tne;j--)
     {
      cout<<v[maxr][j]<<" ";
      count++;
     }
     maxr--;
     for(int j=maxr;j>=minr && count<tne;j--)
     {
      cout<<v[j][minc]<<" ";
      count++;
     }
     minc++;
     

     
  }
}