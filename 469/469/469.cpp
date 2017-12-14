#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int a[100][100];
bool visited[100][100];
int countv;
int m, n, t;

void oilDeposit(int i, int j)
{

	if (i<0 || j<0)
		return;
	if (visited[i][j])
		return;
	if (a[i][j] == NULL)
		return;
	if (a[i][j] == 0)
		return;

	visited[i][j] = true;
	countv++;
	
	oilDeposit(i, j + 1);
	oilDeposit(i, j - 1);
	oilDeposit(i + 1, j);
	oilDeposit(i - 1, j);
	oilDeposit(i + 1, j + 1);
	oilDeposit(i + 1, j - 1);
	oilDeposit(i - 1, j + 1);
	oilDeposit(i - 1, j - 1);


}

int main()
{
	scanf("%d", &m);
		char s;
		for (int i = 1; i<=9; i++)
		{
			for (int j = 1; j<=9; j++)
			{
				cin >> s;
				if (s == 'L')
					a[i][j] = 0;
				else if (s == 'W')
					a[i][j] = 1;

				visited[i][j] = false;

			}
		}
		for (int i = 1; i<=9; i++)
		{
			for (int j = 1; j<=9; j++)
			{
				cout << a[i][j];

			}
			cout << "\n";
		}
		int a,b ;
		cin >> a;
		cin >> b;
		countv = 0;
		oilDeposit(a, b);
		cout << countv<<"\n";
		return 0;
}




