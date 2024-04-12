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
  cout<<"waveform is"<<endl;
  for(int j=0;j<3;j++)
  {
    if(j%2==0)
    {
      for(int i=2;i>=0;i--)
      {
        cout<<v[i][j];
      }
    }
    else
    {
       for(int i=0;i<3;i++)
       {
        cout<<v[i][j];
       }
    }
  }
}