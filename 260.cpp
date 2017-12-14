#include<bits/stdc++.h>
using namespace std;

int a[110][110];
bool visited[110][110];
int testCase=1;
bool doneW;
bool doneB;
int m;

void resultB(int i, int j)
{

    if(i==m || j==m || i<0 || j<0)
        return;
    if(visited[i][j])
        return ;
    if(a[i][j]==0)
        return;
    if(m-1==j && doneB==false)
    {
        cout<<testCase<<" "<<"B";
        doneB=true;
        return;
    }

    visited[i][j]=true;
    resultB(i,j+1);
    resultB(i,j-1);
    resultB(i+1,j);
    resultB(i-1,j);
    resultB(i+1,j+1);
    resultB(i-1,j-1);
}

void resultW(int i, int j)
{

    if(i==m || j==m || i<0 || j<0)
        return;
    if(visited[i][j]==true)
        return;
    if(a[i][j]==1)
        return;
    if(m-1==i && doneW==false)
    {
        cout<<testCase<<" "<<"W";
        doneW=true;
        return;
    }

    visited[i][j]=true;
    resultW(i,j+1);
    resultW(i,j-1);
    resultW(i+1,j);
    resultW(i-1,j);
    resultW(i+1,j+1);
    resultW(i-1,j-1);


}

int main()
{
    while(1)
    {
        scanf("%d",&m);
        if(m==0)
            break;

        doneW=false;
        doneB=false;

        for(int i=0; i<m; i++)
        {
            for(int j=0; j<m; j++)
            {
                char s;
                cin>>s;
                if(s=='b')
                    a[i][j]=0;
                else if(s=='w')
                    a[i][j]=1;

                visited[i][j]=false;

            }
        }
        /*for(int i=0; i<m; i++)
        {
            for(int j=0; j<m; j++)
            {
                cout<<a[i][j];
            }
            cout<<"\n";
        }*/


        for(int j=0; j<m; j++)
        {
            int i=0;
            if(a[i][j]==0 && visited[i][j]==false)
                resultB(0,j);

        }

        for(int i=0; i<m; i++)
        {
            int j=0;
            if(a[i][j]==1 && visited[i][j]==false)
                resultW(i,0);

        }
        testCase++;
    }

}


