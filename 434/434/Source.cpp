#include<iostream>
using namespace std;
int row1[8];
int row2[8];
int main()
{
	int tc,row,sum1,sum2,min,max;
	cin >> tc;
	while (tc--)
	{
		cin >> row;

		sum1 = 0;
		sum2 = 0;
		for (int  i = 0; i < row; i++)
		{
			cin >> row1[i];

			sum1 += row1[i];
		}

		for (int i = 0; i < row; i++)
		{
			cin >> row2[i];
			sum2 += row2[i];
		}

		if (sum1 > sum2)
			min = sum1;
		else
			min = sum2;

		max = 0;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < row; j++)
			{
					if (row1[i] < row2[j])
						max += row1[i];
					else
						max += row2[j];
			}
		}

		int extra = max - min;
		cout <<"Matty needs at least "<< min << " blocks, and can add at most " << extra << " extra blocks.\n";
	}
}