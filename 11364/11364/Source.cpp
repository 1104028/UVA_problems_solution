#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int a[110];
int main() {
	int t;
	int i, j,num,result;
	cin >> t;
	while (t--)
	{
		cin >> num;

		for (int i = 0; i < num; i++)
		{
			cin >> a[i];
		}

		for (int i = 0; i <= num; i++)
		{
			sort(a, a+i);
		}

			result = a[num - 1] - a[0];

			cout << result*2 << "\n";
	}
}