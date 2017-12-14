#include<iostream>
using namespace std;
long a[110][110];
int n;
int symmetric()
{
	int t[110][110];
	int count = 0;
	for (int i = 0; i <n; i++)
	{
		for (int j = 0; j <n; j++)
		{
			t[i][j] = a[n-i-1][n-j-1];
		}
	}
	for (int i = 0; i <n; i++)
	{
		for (int j = 0; j <n; j++)
		{
			if (a[i][j] == t[i][j])
				count++;
		}
	}
	if (count == n*n)
		return 1;
	else
		return 0;

}
int main()
{

	int tc, ok,k;
	char tmp;
	cin >> tc;
	for (k = 1; k <= tc; k++)
	{
		ok = 1;
		cin >> tmp >> tmp>> n;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> a[i][j];
				if (a[i][j] < 0) {
					ok = 0;
				}
			}
		}

		int result = symmetric();

		if (result == 1 && ok!=0)
			cout << "Test #" << k << ": " << "Symmetric.\n";
		else
			cout << "Test #" << k << ": " << "Non-symmetric.\n";

	}
}
