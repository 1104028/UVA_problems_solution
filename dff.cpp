#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
	int m, n;
	while(scanf("%u %u", &m, &n)!=EOF)
	{
		int sum = m + n;
		int x = 0, total = 0;
		if (sum % 10 == 0 || sum % 10 == 1)
		{
			while (sum)
			{
				int result = sum % 10;
				sum = sum / 10;

				total+= result* pow(2, x);
				x++;
			}
			cout << total << "\n";
		}
		else
			cout << sum << "\n";
	}
}
