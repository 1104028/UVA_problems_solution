#include<iostream>
#include<string>

using namespace std;
char a[500][500];
char b[500][500];
int s1, s2;
int count = 0;

int check()
{
	int ans = 0;
	for (int i = 0; i < s1; i++)
	{
		for (int j = 0; j < s1; j++)
		{
			if (i + s2 <= s1 && j + s2 <= s1)
			{
				int cnt = 0;
				for (int k = 0; k < s2; k++) {
					for (int l = 0; l < s2; l++) {
						if (a[i + k][j + l] == b[k][l])
							cnt++;
					}
				}
				if (cnt == s2*s2)
					ans++;
			}
		}

	}
	return ans;
}

void rotation(int m)
{
	char temp[2][2];

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
			temp[i][j] = b[m-j-1][i];
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
			b[i][j] = temp[i][j];
	}
	
}
int main()
{
	while (1)
	{
		cin >> s1 >> s2;
		if (s1 == 0 && s2 == 0)
			break;

		for (int i = 0; i < s1; i++)
		{
			for (int j = 0; j < s1; j++)
			{
				cin >> a[i][j];
			}
		}

		for (int i = 0; i < s2; i++)
		{
			for (int j = 0; j < s2; j++)
			{
				cin >> b[i][j];
			}
		}

		for (int i = 0; i < 4; i++)
		{
			int p = check();
			rotation(s2);
			if (i)
			putchar(' ');
			cout << p;
		}
		puts("");
	}
}