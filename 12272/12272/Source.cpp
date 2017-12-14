#include<iostream>
using namespace std;

int main()
{
	int tc,l,w,h;
	int x = 1;
	cin >> tc;

	while (tc--)
	{
		cin >> l >> w >> h;

		if (l > 20 || w > 20 || h > 20)
			cout << "Case "<<x<<": bad\n";
		else
			cout << "Case " << x << ": good\n";
		x++;
	}
}