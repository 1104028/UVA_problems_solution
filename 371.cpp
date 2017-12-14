#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,hseq,max,count;
    while(scanf("%lld %lld",&a,&b))
    {
        if(a==0 &&b==0)
            break;
        if(a>b)
            {
                int x=a;
                a=b;
                b=x;
            }
        d=a;
        hseq=max=0;
        for(; a<=b; a++)
        {
            c=a;
            count=0;
            while(1)
            {
                if(c%2==0)
                    c/=2;
                else c=3*c+1;
                count++;
                if(c==1)break;
            }
            if(count>max)
            {
                max=count;
                hseq=a;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",d,b,hseq,max);
    }
    return 0;
}
