 #include<iostream>
 using namespace std;
 int main()
 {
   int n;
   cin>>n;
   int a[n][n];
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<n;j++)
    {
      cin>>a[i][j];
    }
   }
   for(int i=0;i<n;i++)
   {
    for(int j=i+1;j<n;j++)
    {
      int temp=a[i][j];
      a[i][j]=a[j][i];
      a[j][i]=temp;
    }
   }
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<n;j++)
    {
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
   }
   for(int k=0;k<n;k++)
   {
    int i=0;
    int j=n-1;
    while(i<=j)
    {
      int temp=a[k][j];
      a[k][j]=a[k][i];
      a[k][i]=temp;
      i++;
      j--;
    }
   }
   cout<<"90 degree rotate is"<<endl;
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<n;j++)
    {
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
   }
 }