#include<iostream>
using namespace std;
int a[100][100];
int result[200];
int m, y, z;
int b[100][100];
void changecolumnbit(int value)
{
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= m; j++)
			b[i][j] = a[i][j];
	}

	for (int i = 1; i <= m; i++)
	{
		int x = a[i][value];
		if (a[i][value] == 0)
		{
			b[i][value] = 1;
		}
		else
			b[i][value] = 0;

		int sum1 = 0;
		for (int j = 1; j <= m; j++)
		{
			sum1 += b[j][value];
		}

		if (sum1 % 2 == 0)
		{
			int sum3 = 0;
			for (int j = 1; j <= m; j++)
			{
				sum3 += b[i][j];
			}
			if (sum3 % 2 == 0)
			{
				result[value] = sum3;
				result[m + i] = sum1;
				y = i;
				z = value;
				break;
			}
			else
			{
				b[i][value] = x;
			}
		}
		else
		{
			b[i][value] = x;
		}

	}
}

void changerowbit(int value)
{


	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= m; j++)
			b[i][j] = a[i][j];
	}

	for (int i = 1; i <= m; i++)
	{
		int x = a[value][i];
		if (a[value][i] == 0)
		{
			b[value][i] = 1;
		}
		else
			b[value][i] = 0;

		int sum1 = 0;
		for (int j = 1; j <= m; j++)
		{
			sum1 += b[value][j];
		}

		if (sum1 % 2 == 0)
		{
			int sum3 = 0;
			for (int j = 1; j <= m; j++)
			{
				sum3 += b[j][i];
			}
			if (sum3 % 2 == 0)
			{
				result[value] = sum3;
				result[m + i] = sum1;

				y = value;
				z = i;
				break;
			}
			else
			{
				b[value][i] = x;
			}
		}
		else
		{
			b[value][i] = x;
		}

	}
}

int main()
{
	int t, sum;
	while (t)
	{
		cin >> m;
		if (m == 0)
			break;

		for (int i = 1; i <= m; i++)
		{
			for (int j = 1; j <= m; j++)
				cin >> a[i][j];
		}

		for (int i = 1; i <= m; i++)
		{
			sum = 0;
			for (int j = 1; j <= m; j++)
			{
				sum += a[i][j];
				result[i] = sum;
			}
		}

		for (int i = 1; i <= m; i++)
		{
			sum = 0;
			for (int j = 1; j <= m; j++)
			{
				sum += a[j][i];
				result[i + m] = sum;
			}
		}
		int count = 0, cloumn;
		for (int i = 1; i <= 2 * m; i++)
		{
			if (result[i] % 2 != 0)
			{
				if (i > m)
				{
					cloumn = i - m;
					changecolumnbit(cloumn);
					break;
				}
				else
				{
					changerowbit(i);
					break;
				}

			}
			else
				count++;
		}
		int count1 = 0;
		for (int i = 1; i <= 2 * m; i++)
		{
			if (result[i] % 2 == 0)
				count1++;
		}
		if (count == 2 * m)
		{
			cout << "OK" << "\n";
		}
		else if (count1 == 2 * m)
		{
			cout << "Change bit (" << y << "," << z << ")" << "\n";
		}
		else
			cout << "Corrupt" << "\n";
	}
}
