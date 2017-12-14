#include<iostream>
using namespace std;
int a[101][101];
int main()
{
	int  sum, tc;

	cin >> tc;
	for (int i = 0; i < tc; i++)
	{
		for (int j = 0; j < tc; j++)
		{
			cin >> a[i][j];
		}
	}
	sum = 0;
	int temp = -127;
	for (int k = 2; k <= tc; k++)
	{
		for (int i = 0; i < tc - k + 1; i++)
		{
			for (int j = 0; j < tc - k + 1; j++)
			{
				for (int l = i; l <i+k; l++)
				{
					for (int m = j; m < j + 2; m++)
					{
						sum += a[l][m];
					}
				}
				if (sum >= temp)
				{
					temp = sum;
					sum = 0;
				}
				else
					sum = 0;

			}
		}
	}

	cout << temp<<"\n";
}