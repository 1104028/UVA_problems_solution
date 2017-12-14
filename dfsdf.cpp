#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    string s="the sky is blue";
    int l=s.length();
    string y;
    int len,count=1,sum;
    for(int i=0; i<l; i++)
    {
        if(s[i]==' ')
        {
            count++;
        }
    }
    len= l + (count)*2;
    int v=0;

    for(int j=0; j<=l; j++)
    {
        if(s[j]==' ')
        {
            y[v]='a';
            v++;
            y[v]='y';
            v++;
            y[v]=' ';
            v++;

        }
        else if(j==l)
        {
            y[v]='a';
            v++;
            y[v]='y';
        }
        else
        {
            y[v]=s[j];
            v++;
        }
    }


    int temp=0,end;
    for(int i=0; i<=len; i++)
    {
        if(y[i]==' ' || i==len)
        {
            end= i;
            sum = end -1-2;
            char si= y[temp];
            int x=temp;
            while(x<sum)
            {
                y[x]= y[x+1];
                x++;
            }
            y[sum]=si;
            temp=i+1;
        }
    }
       for(int k=0; k<len; k++)
        cout<<y[k];

}
