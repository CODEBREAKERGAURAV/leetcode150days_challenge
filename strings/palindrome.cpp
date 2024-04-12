#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  string s;
  cin>>s;
  string k=s;
  //reverse(k.begin(),k.end());
  if(k==s)
  {
    cout<<"palindrome";
  }
  else{
    cout<<"not";
  }
}