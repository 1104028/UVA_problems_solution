#include<iostream>
using namespace std;
int a[9][9];
int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		for (int i = 1; i <= 9; i++)
		{
			if (i % 2 != 0)
			{
				for (int j = 1; j <= i; j++)
				{
					if (j % 2 != 0)
					{
						cin >> a[i][j];
					}
				}
			}
		}

		for (int j = 1; j <= 7; j++)
		{
			if (j % 2 != 0)
			{
				int t = a[7][j];
				int x = a[9][j];
				int y = a[9][j + 2];
				if (x + y == t)
				{
					a[8][j] = x;
					a[8][j + 1] = y;
					a[9][j + 1] = 0;
				}
				else
				{
						x = x + 1;
						y = y + 1;
						if (x + y == t)
						{
							a[8][j] = x;
							a[8][j + 1] = y;
							a[9][j + 1] = 1;
						}

				}
			}
		}

		for (int i = 7; i >= 0; i--)
		{
			for (int j = 1; j <= i; j++)
			{
				a[i][j] = a[i + 1][j] + a[i + 1][j + 1];
			}
		}

		for (int i = 1; i <= 9; i++)
		{
			for (int j = 1; j <= i; j++)
			{
				cout << a[i][j] << " ";
			}
			cout << "\n";
		}
		cout << "\n";
	}
}
