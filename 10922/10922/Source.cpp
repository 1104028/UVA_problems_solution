#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	long long int  sum=0;
	while (1)
	{
		cin >> s;
		if (s == "0")
			break;
		int l = s.length();
		sum = 0;
		for (int i = 0; i < l; i++)
		{
			sum += (s[i] - '0');
		}

		int x = sum % 9;
		
		int r = 1,q;
		while (sum != 9 && sum>9)
		{
			q = 0;

			while (sum)
			{
				q += sum % 10;
				sum = sum/ 10;
			}
			sum = q;
			r++;
		}

		if (x == 0)
		{
			cout << s << " is a multiple of 9 and has 9-degree " << r << ".\n";
		}
		else
			cout << s << " is not a multiple of 9."<<"\n";
	}
}