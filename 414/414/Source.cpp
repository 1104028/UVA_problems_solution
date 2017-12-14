#include<iostream>
#include<string>
using namespace std;

int main()
{
	int line;
	string li;
	int b[13], count, output;
	while (1)
	{
		cin >> line;
		cin.ignore();
		if (line == 0)
			break;


		for (int i = 0; i < line; i++)
		{
			getline(cin, li);
			count = 0;
			for (int j = 0; j < 25; j++)
			{
				if (li[j] == 'X')
					count++;
			}
			b[i] = count;
		}
		for (int l = 0; l < line; l++)
		{
			for (int m = 0; m < line - 1; m++)
			{
				if (b[m]>b[m + 1])
				{
					int t = b[m];
					b[m] = b[m + 1];
					b[m + 1] = t;
				}
			}
		}
		output = 0;
		for (int k = 0; k < line - 1; k++)
		{
			output += b[line - 1] - b[k];
		}
		cout << output << "\n";
	}
}