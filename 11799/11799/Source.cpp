#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int tc, a[11000],n;
	int x = 1;
	cin >> tc;
	while (tc--)
	{
		cin >> n;

		int max = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i]>max)
				max = a[i];
			else
				max = max;
		}

		cout << "Case " << x << ": " << max << "\n";

		x++;
	}
}