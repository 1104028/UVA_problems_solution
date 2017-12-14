#include<iostream>
using namespace std;

int main()
{
	long long int i;
	int tc,num;
	cin >> tc;
	while (tc--)
	{
		cin >> num;
		i = (((((num * 567) / 9) + 7492) * 235) / 47) - 498;

		long int value = i / 10;
		value = value % 10;
		if (value < 0)
			value = value*(-1);

		cout <<value<<"\n";
	}
}