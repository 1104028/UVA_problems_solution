#include<stdio.h>
int a[110];
int main()
{
	int n,sum,bricks,moves,c=1;
	while (1)
	{
		scanf("%d",&n);
		if (n == 0)
			break;

		sum = 0;
		moves = 0;
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
			sum += a[i];
		}
		bricks = sum / n;

		for (int i = 0; i<n; i++)
		{
			if (a[i]>bricks)
				moves = moves + (a[i] - bricks);
		}
		printf("Set #%d\nThe minimum number of moves is %d.\n\n", c, moves);
		c++;
	}
}