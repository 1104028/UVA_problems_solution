#include<iostream>
#include<string>
using namespace std;


int main()
{
	int n;
	string line, s;
	while (1)
	{
		cin >> n;
		if (n == 0)
			break;

		cin >> line;
		s = line;
		int l = line.length();
		int sum = l / n;
		int x = 0, countt = 0;
		for (int i = 0; i < l; i++)
		{
			countt++;

			if ((countt%sum) == 0)
			{
				int y = i;
				int z = x;
				while (y >= z)
				{
					s[x] = line[y];
					x++;
					y--;
				}
				x = countt;
			}
		}
		for (int i = 0; i<l; i++)
			cout << s[i];

		cout << "\n";
	}
}

