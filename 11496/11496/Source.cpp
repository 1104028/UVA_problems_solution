#include<iostream>
using namespace std;
int a[10001];
int main()
{
	int n;
	while (1)
	{
		cin >> n;
		if (n == 0)
			break;

		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		a[n] = a[0];
        
		bool goup=false, godown=false;
		int ans = 0;
		if (a[n - 1]<a[0])
			goup = true;
		else
			godown = true;

		for (int i = 1; i <=n; i++)
		{
			if (a[i - 1] < a[i] && godown)
			{
				ans++;
				godown = false, goup = true;
			}
			else if (a[i - 1]>a[i] && goup)
			{
				ans++;
				goup = false, godown = true;
			}
		}

		cout << ans << "\n";
	}
}