#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
int a[10][10];
int n;
int rowab(int b, int c)
{
	for (int i = 0; i < n; i++)
	{
		int t = a[b - 1][i];
		a[b - 1][i] = a[c - 1][i];
		a[c - 1][i] = t;
	}
}
int colab(int b, int c)
{
	for (int i = 0; i < n; i++)
	{
		int t = a[i][b - 1];
		a[i][b - 1] = a[i][c - 1];
		a[i][c - 1] = t;
	}
}
int increment()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = (a[i][j] + 1) % 10;
		}
	}

}
int decrement()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int x = (a[i][j] - 1) % 10;
			if (x < 0)
				a[i][j] = 10 + x;
		}
	}

}
int transpose()
{
	int t[10][10];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			t[i][j] = a[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = t[j][i];
		}
	}

}

int main()
{

	int tc, op, k, b, c;
	string s;
	cin >> tc;
	for (int k = 1; k <= tc; k++)
	{
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				scanf("%1d", &a[i][j]);
			}
		}

		cin >> op;
		for (int l = 1; l <= op; l++)
		{
			cin >> s;
			if (s == "row" || s == "col")
			{
				cin >> b >> c;
			}
			if (s == "row")
				rowab(b, c);
			else if (s == "col")
				colab(b, c);
			else if (s == "inc")
				increment();
			else if (s == "dec")
				decrement();
			else if (s == "transpose")
				transpose();
		}
		cout << "Case #" << k << "\n";

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << a[i][j];
			}
			cout << "\n";
		}
		cout << "\n";
	}

}

