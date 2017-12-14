#include<iostream>
using namespace std;
int d[100];
int main()
{
	int n, m, c,device,operation;
	int a[100],sum;
	int b = 1;
	while (b)
	{
		cin >> n >> m >> c;
		sum = 0;
		if (n == 0 && m == 0 && c == 0)
			break;
		for (int i = 0; i < n; i++)
		{
			cin >> device;
			a[i] = device;
		}

		for (int j = 0; j < m; j++)
		{
			cin >> operation;
			d[j] = operation;
		}
		for (int i = 0; i < n; i++)
		{
			if (d[i + n]>d[i])
				sum = sum + a[i];
			else if (d[i + n] == 0)
				sum = sum + a[i];
		}
		if (sum > c)
		{
			cout << "Sequence " << b<<"\n";
			cout << "Fuse was blown."<<"\n\n";
		}
		else
		{
			cout << "Sequence " << b << "\n";
			cout << "Fuse was not blown."<<"\n";
			cout << "Maximal power consumption was "<<sum<<" amperes."<<"\n\n";
		}
		b++;
	}
	

}