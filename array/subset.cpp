#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int>real(5);
  cout<<"Enter element of vector"<<endl;
  for(int i=0;i<5;i++)
  {
    cin>>real[i];
  }
  vector<int>given;
  cout<<"enter the array"<<endl;
  for(int i=0;i<given.size();i++)
  {
  int v;
  cin>>v;
  given.push_back(v);
  }
  

}
