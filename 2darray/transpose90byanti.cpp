#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<vector<int> >v(3,vector<int>(3));
  cout<<"enter element"<<endl;
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      cin>>v[i][j];
    }
  }
   for(int i=0;i<3;i++)
  {
    for(int j=i;j<3;j++)
    {
      int temp=v[i][j];
      v[i][j]=v[j][i];
      v[j][i]=temp;
    }
  }
   for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      if(i==0)
      {
        int temp=v[0][j];
        v[0][j]=v[2][j];
        v[2][j]=temp;
      }
    }
  }
  cout<<"result is"<<endl;
   for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      cout<<v[i][j];
    }
  }
}