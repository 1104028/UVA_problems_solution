#include<iostream>
#include <stdio.h>
#include <string>
using namespace std;

int countv = 0;
string s[120];

void permute(string a, int l, int r)
{
	int i;
	if (l == r)
	{
		cout << "\n";
		cout << a;
		countv++;
		s[countv] = a;

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
	string str = "madam";
	int n = str.length();
	permute(str, 0, n - 1);

	cout << "\n"<<countv<<"\n";

	for (int i = 0; i < 120; i++)
		cout << s[i]<<"\n";
	return 0;
}
