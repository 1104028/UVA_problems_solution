#include<iostream>

using namespace std;

int main()
{
	int tc,x,y;
	cin >> tc;
	int countt = 0,countn=0,f=0;
	int z= tc;
	while (tc--)
	{
		cin >> x >> y;

		if (x >= 0 && y >= 0 || x > 0 && y < 0 )
			countt++;
		else if (x <= 0 && y <= 0 || x < 0 && y > 0)
			countn++;

	}
	if ((countt == (z- 1) && countn == 1)|| countt==z || countn==z)
	{
		cout << "Yes";
	}
	else if ((countt == 1 && countn == (z - 1)))
		cout << "Yes";
	else
		cout << "No";
}
