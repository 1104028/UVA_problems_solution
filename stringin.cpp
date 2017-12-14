#include<iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

void permute(string a, int l, int r)
{
   int i;
   if (l == r)
    cout<<"\n"<<a;
   else
   {
       for (i = l; i <= r; i++)
       {
          swap((a[l]), (a[i]));
          permute(a, l+1, r);
          swap((a[l]), (a[i]));
       }
   }
}

int main()
{
    string str = "12";
    int n = str.length();
    permute(str, 0, n-1);
    return 0;
}
