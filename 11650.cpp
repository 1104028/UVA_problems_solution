#include<stdio.h>
int main()
{
int a,b,c,d,e,j;
while(scanf("%d",&d)==1)
{
for(j=1;j<=d;j++)
 {
 scanf("%d:%d",&a,&b);
 if(a==12 && b==0)
    printf("%d:0%d\n",a,b);
 else if(a==12 && 60-b>=10)
    printf("%d:%d\n",a-1,60-b);
 else if(a==12 && 60-b<10)
    printf("%d:0%d\n",a-1,60-b);
 else
 {
     c=12-a;
     e=60-b;
     if(e==60)
        e=0;
     if(b>0)
        c=c-1;
        if(c==0)
            c=12;
     if(c<10 && e<10)
     printf("0%d:0%d\n",c,e);
     else if(c<10 && e>10)
           printf("0%d:%d\n",c,e);
     else if(c>=10 && e<10)
           printf("%d:0%d\n",c,e);
     else
            printf("%d:%d\n",c,e);
 }
 }
}
return 0;
}
