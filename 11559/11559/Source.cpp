#include<cstdio>
#include<cmath>
#include<cstring>
#include<iostream>
using namespace std;

int main()
{
	int n, b, h, w, p, cost, i, j, temp, a;
	while (scanf("%d%d%d%d", &n, &b, &h, &w) == 4)
	{
		cost = b + 100;
		for (i = 0; i<h; i++)
		{
			scanf("%d", &p);
			temp = 0;
			for (j = 0; j<w; j++)
			{
				scanf("%d", &a);
				if (a >= n)
				{
					temp = p*n;
					if (cost>temp)
					{
						cost = temp;
					}
				}
			}
		}
		if (cost<b)
		{
			printf("%d\n", cost);
		}
		else
		{
			printf("stay home\n");
		}
	}
}