#include<iostream>
#include<vector>
using namespace std;
int main()
{
   vector<vector<int> >v1(3,vector<int>(3));
   cout<<"enter vector1"<<endl;
   for(int i=0;i<3;i++)
   {
    for(int j=0;j<3;j++)
    {
      cin>>v1[i][j];
    }
   }
   vector<vector<int> >v2(3,vector<int>(3));
    cout<<"enter vector2"<<endl;
   for(int i=0;i<3;i++)
   {
    for(int j=0;j<3;j++)
    {
      cin>>v2[i][j];
    }
   }
    vector<vector<int> >v(3,vector<int>(3));
    for(int i=0;i<3;i++)
   {
    for(int j=0;j<3;j++)
    {
      v[i][j]=v1[i][j]+v2[i][j];
    }
    cout<<endl;
   }
     cout<<"sum is"<<endl;
      for(int i=0;i<3;i++)
   {
    for(int j=0;j<3;j++)
    {
      
      cout<<v[i][j]<<" ";
    }
    cout<<endl;
   }


}