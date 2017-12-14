#include<stdio.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

int a[25][25];
bool visited[25][25];
int countv;
int m,n,t;

void oilDeposit(int i, int j)
{

    if(i==m || j==m || i<0 || j<0)
        return;
    if(visited[i][j])
        return;
    if(a[i][j]==0)
        return;

    visited[i][j]=true;
    oilDeposit(i,j+1);
    oilDeposit(i,j-1);
    oilDeposit(i+1,j);
    oilDeposit(i-1,j);
    oilDeposit(i+1,j+1);
    oilDeposit(i+1,j-1);
    oilDeposit(i-1,j+1);
    oilDeposit(i-1,j-1);


}

void result()
{
    countv=0;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(a[i][j]==1 && visited[i][j]==false)
            {

                oilDeposit(i,j);
                countv++;
            }
        }
    }
    printf("Image number %d contains %d war eagles.\n",t,countv);
         t++;
}

int main()
{
    t=1;
    while(1)
    {
        scanf("%d",&m);
        if(m==0 || m>25)
            break;
        char s;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<m; j++)
            {
                scanf("%c",&s);
                if(s=='0')
                    a[i][j]=0;
                else if(s=='1')
                    a[i][j]=1;

                visited[i][j]=false;

            }
        }
        result();
    }

}


