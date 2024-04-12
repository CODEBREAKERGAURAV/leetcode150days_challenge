#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<vector<int> > v(5,vector<int>(3));
  cout<<"enter elements"<<endl;
  for(int i=0;i<5;i++)
  {
    for(int j=0;j<3;j++)
    {
      cin>>v[i][j];
    }
  }
  int sum=0,maxsum=0,index=0,i,j;
  for(i=0;i<5;i++)
  {
    for(j=0;j<3;j++)
    {
      sum+=v[i][j];
      if(sum>maxsum)
    {
      maxsum=sum;
      index=i+1;
    }
    }
    
    sum=0;
  }
  cout<<"sum is"<<maxsum<<endl;
  cout<<"row is is"<<index;

}