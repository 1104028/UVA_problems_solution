#include<iostream>
using namespace std;
int w[1000][1000];
int q[1000][1000];

int MIN(int x, int y)
{
	if (x <= y)
		return x;
	else
		return y;
}
int main()
{
	int t, col, row;
	cin >> t;
	while (t-- > 0)
	{
		cin >> col >> row;
		for (int i = 0; i < col; i++)
		{
			for (int j = 0; j < row; j++)
			{
				cin >> w[i][j];
				q[i][j] = w[i][j];
			}
		}

		for (int i = 0; i < col; i++)
		{
			for (int j = 0; j < row; j++)
			{
				for (int k = 0; k < row; k++)s
					q[i][j] = MIN(q[i][j], q[i][k] + q[k][j]);
			}
		}

		for (int i = 0; i < col; i++)
		{
			for (int j = 0; j < row; j++)
			{
				cout << q[i][j]<<" ";
			}
			cout << "\n";
		}


	}
}