#include<bits/stdc++.h>
using namespace std;

int a[110][110];
bool visited[110][110];
int countv;
int m,n;

void oilDeposit(int i, int j)
{

    if(i==m || j==n || i<0 || j<0)
        return;
    if(visited[i][j]==true)
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
        for(int j=0; j<n; j++)
        {
            if(a[i][j]==1 && visited[i][j]==false)
            {

                oilDeposit(i,j);
                countv++;
            }
        }
    }
    cout<<countv<<"\n";
}

int main()
{
    char s;

    while(1)
    {
        scanf("%d %d",&m,&n);
        if(m==0)
            break;

        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>s;
                if(s=='*')
                    a[i][j]=0;
                else if(s=='@')
                    a[i][j]=1;

                visited[i][j]=false;

            }
        }
        result();
    }

}

