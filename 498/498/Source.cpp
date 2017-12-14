#include<iostream>
#include<math.h>
using namespace std;


long bigmod(long x,long y,long z)
{
	if (y == 0)
		return 1;
	 if (y % 2 == 0)
		return (((bigmod(x, y / 2, z))*(bigmod(x, y / 2, z)))%z);
		return ((bigmod(x, y-1, z))*(x%z) % z);
		
}
int main()
{
	long long int b, p, m;
	while (cin >> b >> p >> m)
	{
		int x = bigmod(b, p, m);
		cout << x<<"\n";
	}
}