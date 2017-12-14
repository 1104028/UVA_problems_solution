#include<iostream>
#include<stdio.h>

using namespace std;
char a[110][110];
bool visited[110][110];
int t,n,countv;

void battleship(int i, int j)
{
	if (i == n || j == n || i < 0 || j < 0)
		return;
	if (visited[i][j])
		return;
	if (a[i][j] == '.')
		return;

	visited[i][j] = true;

	battleship(i - 1, j);
	battleship(i + 1, j);
	battleship(i, j - 1);
	battleship(i, j + 1);


}
int main()
{
	cin >> t;
	for (int k = 1; k <= t; k++)
	{
		cin >> n;
		if (n > 100)
			break;
		char s;
		countv = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> s;
				a[i][j] = s;
				visited[i][j] = false;
			}
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (a[i][j] == 'x' && visited[i][j] == false)
				{
					battleship(i, j);
					countv++;
				}
			}
		}

		cout <<"Case "<<k<<": "<< countv<<"\n";
	}
}