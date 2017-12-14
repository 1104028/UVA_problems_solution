#include <iostream>
#include<string>
using namespace std;

int main()
{
	int tc, n;
	double	a,b,c;
	cin >> tc;
	int x = tc;
	double result;
	while (tc--)
	{
		cin >> n;
		result = 0;
		for (int i = 0; i < n; i++)
		{
				cin >> a >> b >> c;

				double first = a / b;
				double second = first*c;
				double third =  second*b;

				result += third;
		}

		cout << (int)result << "\n";
	}
}