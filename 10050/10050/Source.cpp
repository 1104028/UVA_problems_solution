#include<iostream>
using namespace std;
int a[110];
int b[110];
int main()
{
	int n, party, c, days, v;
	cin >> c;
	for (int ca = 0; ca < c; ca++)
	{
		cin >> n;

		cin >> party;
		for (int i = 0; i < party; i++)
		{
			cin >> a[i];
		}
		v = n / 7;
		int k;
		for (int i = 1; i <= n; i++)
		{
			for (k = 1; k <= v; k++)
			{
				int x = 7 * k;
				int y = 7 * k - 1;
				if (i != y)
				{
					for (int j = 0; j < party; j++)
					{
						if (i%a[j] == 0)
						{
							b[i] = i;
						}

					}
				}
			}
		}

		for (int i = 1; i <= n; i++)
		{
			cout << b[i] << " ";
		}

	}
}
