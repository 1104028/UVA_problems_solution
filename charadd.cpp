#include<iostream>
using namespace std;

char a[110][110];
int testCase = 1;
int m,n;

void mimegame(int c, int b)
{
	if (b+1<=n && a[c][b+1]!='*')
    {
        a[c][b+1]+=('1'-'0');
    }
    if (b-1>=0 && a[c][b-1]!='*')
    {
        a[c][b-1]+=('1'-'0');
    }
    if (c+1<=m && a[c+1][b]!='*')
    {
        a[c+1][b]+=('1'-'0');
    }
    if (c-1>=0 && a[c-1][b]!='*' )
    {
        a[c-1][b]+=('1'-'0');
    }
    if (c+1<=m && b+1<=n && a[c+1][b+1]!='*')
    {
        a[c+1][b+1]+=('1'-'0');
    }
    if (c-1>=0 && b-1>=0 && a[c-1][b-1]!='*')
    {
        a[c-1][b-1]+=('1'-'0');
    }
    if (c-1>=0 &&b+1<=n && a[c-1][b+1]!='*')
    {
        a[c-1][b+1]+=('1'-'0');
    }
    if (b-1>=0 && c+1<=m && a[c+1][b-1]!='*')
    {
        a[c+1][b-1]+=('1'-'0');
    }
}
int main()
{
	while (1)
	{
		cin >> m >> n;
		if (m == 0 && n==0)
			break;

        if(testCase!=1) cout<<endl;
		for (int i = 0; i<m; i++)
		{
			for (int j = 0; j<n; j++)
			{
				cin >> a[i][j];
				if (a[i][j] == '.')
				a[i][j] = '0';

			}
		}

		for (int i = 0; i<m; i++)
		{
			for (int j = 0; j<n; j++)
			{
				if (a[i][j] == '*')
					mimegame(i, j);
			}
		}
		cout<<"Field #"<<testCase<<":"<<"\n";
		for (int i = 0; i<m; i++)
		{
			for (int j = 0; j<n; j++)
			{
				cout << a[i][j];
			}
			cout << "\n";
		}
		//cout<<"\n";
		testCase++;
	}

}


