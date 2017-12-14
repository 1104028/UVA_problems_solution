#include <iostream>
#include <cstdio>
using namespace std;
int a[10];
int main()
{
   int t,digit;
   cin>>t;

   while(t-->0)
   {
     cin>>digit;
     int sum,mod;
     for(int i=1;i<=digit;i++)
     {
         sum=i;
      while(sum>0)
      {
        mod=sum%10;
        sum=sum/10;
        a[mod]=a[mod]+1;
      }
     }
     for(int i=0;i<10;i++)
     {
        cout<<a[i]<<" ";
        a[i]=0;
     }
   cout<<"\n";
   }
}

