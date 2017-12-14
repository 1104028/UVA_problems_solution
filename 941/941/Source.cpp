#include<iostream>
#include <stdio.h>
#include <string>
using namespace std;

int countv;
int num;
int permute(string a, int l, int r)
{
	int i;
	int x=0;
	if (x == 1)
		return;
	if (l == r)
	{
		if (countv == num)
		{
			cout << a;
			cout << "\n";
			x = 1;
		}
		countv++;
	}
	else
	{
		for (i = l; i <= r; i++)
		{
			swap((a[l]), (a[i]));
			permute(a, l + 1, r);
		}
	}
}

int main()
{
	string str;
	int tc;
	cin >> tc;
	while (tc--)
	{
		cin >> str;
		cin >> num;
		int n = str.length();
		countv = 0;
		permute(str, 0, n - 1);
	}
	
	return 0;
}
