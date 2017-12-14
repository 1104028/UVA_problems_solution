#include<iostream>
#include<string>
using namespace std;
int main()
{
	int l, i, j, b, k;
	string n;
	while (cin >> n)
	{
		l = n.length();
		b = -1;
		for (i = 0; i<l; i++)
		{
			if (n[i] == ' ')
			{
				for (j = i - 1; j>b; j--)
				{
					cout << n[j];
				}
				cout << " ";
				b = i;
			}
			else if (i == l - 1)
			{
				for (k = l - 1; k > b; k--)
					cout << n[k];
			}

		}
		//cout << "\n";

	}
	return 0;
}