#include<iostream>
#include<vector>
using namespace std;
int main()
{
  // vector<vector<int> >v(3,vector<int>(3));
  // cout<<"enter elements"<<endl;
  // for(int i=0;i<3;i++)
  // {
  //   for(int j=0;j<3;j++)
  //   {
  //     cin>>v[i][j];
  //   }
  // }
  // for(int i=0;i<3;i++)
  // {
  //   for(int j=0;j<3;j++)
  //   {
  //     if(i==j || i+j==2)
  //     {
  //       cout<<v[i][j]<<" ";
  //     }
  //     else
  //     {
  //       cout<<" ";
  //     }
  //   }
  //   cout<<endl;
  // }

int a[][2] = {{1,2},{3,4}};

int i, j;

for (i = 0; i < 2; i++)

for (j = 0; j < 2; j++)

cout << a[i][j];

return 0;

}
