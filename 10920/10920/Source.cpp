#include<iostream>
#include<math.h>
using namespace std;
long long int m[5000][5000];
int main()
{
	int  b,c;
	while (1)
	{
		cin >> c >> b;
		if (c == 0 && b == 0)
			break;

		int x = (c + 1) / 2;
		int y = (c + 1) / 2;
        
		int p = sqrt(b);

		if (p % 2 == 0)
		{
			p--;
		}

		x += (p - 1) / 2;
		y += (p - 1) / 2;

		b = b - (p*p);

		if (b>0)
		{
			p++;
			if (b <= p)
			{
				x -= b - 1;
				y++;
			}
			else if (b <= p * 2)
			{
				x -= p -1;
				y -= b - p - 1;
			}
			else if (b <= p * 3)
			{
				x -= p * 3 - b - 1;
				y -= p - 1;
			}
			else
			{
				x++;
				y -= p * 4 - b - 1;
			}
		}

		cout << "Line = " << y << ", " << "column = " << x << "." << "\n";

	}
}