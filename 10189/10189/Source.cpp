#include<iostream>
using namespace std;

char a[110][110];
bool visited[110][110];
int testCase = 1;
bool doneW;
bool doneB;
int m,n;

void mimegame(int i, int j)
{

	if (i == m || j == m || i<0 || j<0)
		return;
	else
	{
		a[i][j] += ('1' - '0');
		mimegame(i, j + 1);
		mimegame(i, j - 1);
		mimegame(i + 1, j);
		mimegame(i - 1, j);
		mimegame(i + 1, j + 1);
		mimegame(i - 1, j - 1);
	}

}
int main()
{
	while (1)
	{
		cin >> m >> n;
		if (m == 0 && n==0)
			break;

		doneW = false;
		doneB = false;

		for (int i = 0; i<m; i++)
		{
			for (int j = 0; j<n; j++)
			{
				cin >> a[i][j];

			}
		}

		for(int i=0; i<m; i++)
		{
		for(int j=0; j<n; j++)
		{
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
		for (int i = 0; i<m; i++)
		{
			for (int j = 0; j<n; j++)
			{
				cout << a[i][j];
			}
			cout << "\n";
		}
		

		testCase++;
	}

}


