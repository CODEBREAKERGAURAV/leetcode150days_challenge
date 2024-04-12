#include<iostream>
#include<string>
using namespace std;

void skipchar(string str,string original)
{
  if(original.size()==0)
  {
    cout<<str;
    return;
  }
  char ch=original[0];
  if(ch=='a') return skipchar(str,original.substr(1));
  else return skipchar(str+ch,original.substr(1));

}
int main()
{
  string p="gaurav yadav";
  string s="";
  skipchar(s,p);
}

