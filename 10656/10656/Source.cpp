#include<iostream>
using namespace std;
int a[1005];
int main()
{
	int n, c;
	while (1)
	{
		cin >> n;
		if (n == 0)
			break;

		c = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i] == 0)
				c++;
		}
		if (c == n)
			cout << "0\n";
		else
		{
			for (int i = 0; i < n; i++)
			{
				if (a[i]>0)
				{
					if (i != n - 1)
					{
						cout << a[i] << " ";
					}
					else
						cout << a[i];

				}
				else if (a[i] == 0)
					c++;
			}
			cout << "\n";
		}
		
	}
}