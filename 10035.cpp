#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b;
    int count, result;
    while(scanf("%llu %llu", &a, &b))
    {
        if(a==0 && b==0)
            break;
        result=0;
        count=0;
        while(a||b)
        {
            result=((a%10)+(b%10)+result)/10;
            a/=10;
            b/=10;
            count+=result;
        }
        if(count==0)
            printf("No carry operation.\n");
        else if(count==1)
            printf("1 carry operation.\n");
        else
            printf("%d carry operations.\n", count);
    }
}
