#include<iostream>
using namespace std;
int a[3000], diff[3000];

int main()
{

	int n;
	cin >> n;
	while (n)
	{
		for (int i = 0; i < n; i++)
			cin >> a[i];


		for (int i = 0; i < n - 1; i++)
		{
		   diff[i] = abs(a[i]-a[i+1]);
		}

		int count = 0;
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = 0; j < n - 1; j++)
			{
				if (diff[j] > diff[j + 1])
				{
					int t = diff[j];
					diff[j] = diff[j + 1];
					diff[j + 1] = t;
				}
			}
		}

		for (int i = 1; i < n; i++)
		{
			if (diff[i] == i)
			{
				count++;
			}

			else
				break;

		}


		if (count == n - 1)
		{
			cout << "Jolly" << "\n";
		}
		else
			cout << "Not jolly" << "\n";
	}
}
