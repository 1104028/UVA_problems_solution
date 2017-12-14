#include<iostream>
using namespace std;
char original[10][10];
char result[10][10];
char temp[10][10];
int n;
int preserved()
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (original[i][j] == result[i][j])
			{
				count++;
			}
		}
	}
	if (count == n*n)
		return 1;
	else
		return 0;
}

int only90()
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			temp[i][j] = original[n - j-1][i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (temp[i][j] == result[i][j])
				count++;
		}
	}

	if (count == n * n)
		return 1;
	else
		return 0;

}
int one180()
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			temp[i][j] = original[n-i-1][n - j - 1];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (temp[i][j] == result[i][j])
				count++;
		}
	}

	if (count == n * n)
		return 1;
	else
		return 0;
}
int two270()
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			temp[i][j] = original[j][n - i - 1];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (temp[i][j] == result[i][j])
				count++;
		}
	}

	if (count == n * n)
		return 1;
	else
		return 0;
}
int reflectversically()
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			temp[i][j] = original[n-i-1][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (temp[i][j] == result[i][j])
				count++;
		}
	}

	if (count == n * n)
		return 1;
	else
		return 0;
}
int main()
{
	int tc;
	cin >> tc;

	while (tc--)
	{
		cin >> n;

		for (int i = 0; i < n; i++)
		{
			for (int c = 0; c < n; c++)
				cin >> original[i][c];
			for (int c = 0; c < n; c++)
				cin >> result[i][c];
		}
		int pre = preserved();
		int ni90 = only90();
		int o180 = one180();
		cout << o180;
		int t270 = two270();
		int ver = reflectversically();
		if (ni90 == 1 && ver == 1)
		{
			cout << "Pattern 6 was reflected vertically and rotated 90 degrees.\n";
		}
		else if (o180 == 1 && ver == 1)
		{
			cout << "Pattern 6 was reflected vertically and rotated 180 degrees.\n";
		}
		else if (t270 == 1 && ver == 1)
		{
			cout << "Pattern 6 was reflected vertically and rotated 270 degrees.\n";
		}
		else if (pre == 1)
		{
		 cout << "Pattern 3 was preserved.\n";
		}
		else if (ni90 == 1)
		{
			cout << "Pattern 1 was rotated 90 degrees.\n";
		}
		else if (o180 == 1)
		{
			cout << "Pattern 7 was rotated 180 degrees.\n";
		}
		else if (t270 == 1)
		{
			cout << "Pattern 2 was rotated 270 degrees.\n";
		}
		else if (ver == 1)
		{
			cout << "Pattern 4 was reflected vertically.\n";
		}
		else
			cout << "Pattern 5 was improperly transformed.\n";
	}
}
