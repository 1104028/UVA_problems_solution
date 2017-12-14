#include<stdio.h>
#include<string.h>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    char a[16];
    int t,s,sum1,sum2;
    int sum3;
    cin>>t;

    for(int j=0; j<t; j++)
    {
        sum1=0;
        sum2=0;
        for(int i=0; i<=15; i++)
        {
            cin>>a[i];

            if(i%2==0)
            {

                s=(a[i]-48)*2;
                sum2+=s/10;
                sum2+=s%10;



            }
            else
            {
                sum1+=a[i]-48;

            }


        }
        sum3=sum1+sum2;
        if(sum3%10==0)
            printf("Valid\n");
        else
            printf("Invalid\n");
    }
}

