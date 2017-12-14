#include<iostream>
using namespace std;
int a[110][110];
bool visited[110][110];
int h[3][3] = { 1, 0, 1, 1, 1, 1, 1, 0, 1 };
int l[3][3] = { 1, 0, 0, 1, 0, 0, 1, 1, 1 };
int t[3][3] = { 1, 1, 1, 0, 1, 0, 0, 1, 0 };
int u[3][3] = { 1, 0, 1, 1, 0, 1, 0, 1, 0 };
int temp[3][3];
int arrsize;
int finalcounth = 0, finalcountl = 0, finalcountt = 0, finalcountu = 0;
void zerode()
{
	int counth = 0, countl = 0, countt = 0, countu = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (temp[i][j] == h[i][j])
				counth++;
			if (temp[i][j] == l[i][j])
				countl++;
			if (temp[i][j] == t[i][j])
				countt++;
			if (temp[i][j] == u[i][j])
				countu++;
		}
	}
	if (counth == 9)
		finalcounth++;
	if (countl == 9)
		finalcountl++;
	if (countt == 9)
		finalcountt++;
	if (countu == 9)
		finalcountu++;
}
void ninetyde()
{
	int counth = 0, countl = 0, countt = 0, countu = 0;
	int xy[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			xy[i][j] = temp[i][j];
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (xy[3-j-1][i] == h[i][j])
				counth++;
			if (xy[3 - j - 1][i] == l[i][j])
				countl++;
			if (xy[3 - j - 1][i] == t[i][j])
				countt++;
			if (xy[3 - j - 1][i] == u[i][j])
				countu++;
		}
	}
	if (counth == 9)
		finalcounth++;
	if (countl == 9)
		finalcountl++;
	if (countt == 9)
		finalcountt++;
	if (countu == 9)
		finalcountu++;
}
void oneeightyde()
{
	int counth = 0, countl = 0, countt = 0, countu = 0;
	int xy[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			xy[i][j] = temp[i][j];
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (xy[3 - i - 1][3 - j - 1] == l[i][j])
				countl++;
			if (xy[3 - i - 1][3 - j - 1] == t[i][j])
				countt++;
			if (xy[3 - i - 1][3 - j - 1] == u[i][j])
				countu++;
		}
	}
	if (countl == 9)
		finalcountl++;
	if (countt == 9)
		finalcountt++;
	if (countu == 9)
		finalcountu++;
}
void twoseventyde()
{
	int counth = 0, countl = 0, countt = 0, countu = 0;
	int xy[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			xy[i][j] = temp[i][j];
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (xy[j][3 - i - 1] == h[i][j])
				counth++;
			if (xy[j][3 - i - 1] == l[i][j])
				countl++;
			if (xy[j][3 - i - 1] == t[i][j])
				countt++;
			if (xy[j][3 - i - 1] == u[i][j])
				countu++;
		}
	}
	if (counth == 9)
		finalcounth++;
	if (countl == 9)
		finalcountl++;
	if (countt == 9)
		finalcountt++;
	if (countu == 9)
		finalcountu++;
}
int main()
{
	int tc;
	cin >> tc;
	for (int ca = 1; ca <= tc; ca++)
	{
		cin >> arrsize;
		for (int i = 0; i < arrsize; i++)
		{
			for (int j = 0; j < arrsize; j++)
			{
				cin >> a[i][j];
			}
		}
		for (int i = 0; i < arrsize-2; i++)
		{
			for (int j = 0; j < arrsize - 2; j++)
			{
					for (int k = i; k < i + 3; k++)
					{
						for (int l = j; l < j + 3; l++)
						{
							temp[k - i][l - j] = a[k][l];
						}
					}
					zerode();
					ninetyde();
					oneeightyde();
					twoseventyde();
			}
		}

		cout << "#" <<ca<<" "<< finalcounth << " " << finalcountl << " " << finalcountt << " " << finalcountu << "\n";
		
	}
}