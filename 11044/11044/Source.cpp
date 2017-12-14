#include<iostream>
using namespace std;
int a[10000][10000];

int main()
{
	int tc,countv,n,m;
	cin >> tc;
	while (tc--)
	{
		cin >> n >> m;
		countv = 0;
		for (int i = 0; i < n; i = i + 3)
		{
			for (int j = 0; j < m; j=j+3)
			{
				if (i+1<n && i+2<n && j+1<m && j+2<m)
				countv++;
			}
		}

		cout << countv << "\n";
	}
}