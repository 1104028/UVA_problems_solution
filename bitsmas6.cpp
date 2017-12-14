#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    string s="the sky is blue";
    int l=s.length();
    string y;
    int len,count=0,sum;

    for(int i=0; i<l; i++)
    {
        if(s[i]==' ')
        {
            count++;
        }
    }
    len= l + (count+1)*2;
    int v=0;

    for(int i=0; i<len; i++)
    {
        if(s[i]==' ')
        {
            y[v]='a';
            v++;
            y[v]='y';
            v++;
            y[v]=' ';
            v++;

        }
        else if(s[i]=='\0')
        {
            y[v]='a';
            v++;
            y[v]='y';
            v++;
        }
        else
        {
            y[v]=s[i];
            v++;
        }
    }


    int temp=0,end;
    for(int i=0; i<len; i++)
    {
        if(y[i]==' ' || y[i]=='\0')
        {
            end= i;
            sum = end -1-2;
            char si= y[temp];
            while(temp<sum)
            {
                y[temp]= y[temp+1];
                temp++;
            }
            y[sum]=si;
            temp=i+1;
        }
    }

    for(int i=0; i<len; i++)
        cout<<y[i];

}
