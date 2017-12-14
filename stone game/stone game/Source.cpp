#include<iostream>
using namespace std;

int main()
{
	int t,n1,n2;

	cin >> t;
	int sum,res;
	while (t-- > 0)
	{
		cin >> n1;
		sum = 0;
		res = n1;
		while (n1-- > 0)
		{
			cin >> n2;
		    sum = sum + n2;
		}
		int result = sum / res;
		int finalre = result%2;

		if (finalre!= 0)
			cout << "ALICE" << "\n";
		else
			cout << "BOB" << "\n";

	}
}