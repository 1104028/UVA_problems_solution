#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int tc, a[1100], n;
	int x = 1;
	while (1)
	{
		cin >> n;
		if (n == 0)
			break;

		int count0 = 0,count1=0;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i] == 0)
				count0++;
			else if (a[i]>0)
				count1++;
		}
		int balance = count1 - count0;
		cout << "Case " << x << ": " << balance << "\n";

		x++;
	}
}