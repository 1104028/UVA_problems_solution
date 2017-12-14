#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
	int a[1100], n,h,b,w,rent,cost;
	int  minv;
	while (scanf("%d%d%d%d",&n,&b,&h,&w)!=EOF)
	{
		minv = 100000;
		for (int j = 0; j < h;j++)
		{
			cin >> rent;
			int countt = 0;
			for (int i = 0; i < w; i++)
			{
				cin >> a[i];
				countt++;

				if (a[i] < n)
					countt--;
			}
			if (countt == w)
			{
				cost = rent*n;
				if (minv>=cost)
					minv = cost;
			}

		}
		cout<<minv;
		if (minv <= b)
			cout << minv << "\n";
		else
			cout << "stay home\n";
	}
}
