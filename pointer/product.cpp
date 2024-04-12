#include<iostream>
using namespace std;
int product(int* a,int* b)
{
  int multiply=(*a)*(*b);
  return multiply;
}

int main()
{
  int a,b;
  cout<<"enter number1"<<endl;
  cin>>a;
  cout<<"enter number2"<<endl;
  cin>>b;
  int v=product(&a,&b);
  cout<<v;

}