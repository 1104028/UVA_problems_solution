#include <stdio.h>
#include<string.h>
int main()
{
 unsigned long int dnum;
int  rem,parity,l,i,j,num,t;
int s[1000];
while(1)
{
scanf("%lu", &dnum);
if(dnum==0)
    break;
num=dnum;
parity=0;
i=0;
l=0;
while(dnum>0)
 {
 rem = dnum%2;
 l=l+1;
 s[i]=rem;
 if(rem==1)
 parity=parity+1;
 dnum = dnum / 2 ;
 i++;
 }
printf("The parity of ");
for(i=l-1;i>=0;i--)
    printf("%d",s[i]);
printf(" is %d (mod 2).\n",parity);
}
return 0;
}
