#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
#include<iostream>
using namespace std;
int a[3000], diff[3000];

int main()
{

	int n,i;
    while(scanf("%d",&n)==1)
	{
		for (i = 0; i < n; i++)
			cin >> a[i];


		for (i = 0; i < n - 1; i++)
		{
		   diff[i] = abs(a[i]-a[i+1]);
		   cout<<diff[i];
		}

		int count = 0;
         sort(diff,diff+i);
		for (i = 1; i < n; i++)
		{
		    cout<<diff[i];
			if (diff[i] == i)
			{
				count++;
			}

		}


		if (count == n - 1)
		{
			cout << "Jolly" << "\n";
		}
		else
			cout << "Not jolly" << "\n";
	}
}



