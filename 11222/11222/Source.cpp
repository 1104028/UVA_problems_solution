#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main() {
	int t, Case = 0;
	int i, j;
	scanf("%d", &t);
	while (t--) {
		printf("Case #%d:\n", ++Case);
		int A[3], B[3][1000];
		int mark[10001] = {};
		for (i = 0; i < 3; i++)
		{
			cin >> A[i];
			for (j = 0; j < A[i]; j++)
			{
				cin >> B[i][j];
				mark[B[i][j]]++;
			}
			sort(B[i], B[i] + A[i]);
		}

		int max = 0,temp;

		int solve[3];

		for (int i = 0; i < 3; i++)
		{
			temp = 0;
			for (int j = 0; j < A[i]; j++)
			{
				if (mark[B[i][j]] == 1)
					temp++;
			}

			if (temp>max)
				max = temp;

			solve[i] = temp;
		}

		for (int i = 0; i < 3; i++)
		{
			if (solve[i] == max)
			{
				cout << i + 1 << " " << solve[i];
				for (int j = 0; j < A[i]; j++)
				{
					if (mark[B[i][j]] == 1)
						cout << " " << B[i][j];
				}
			}
			cout << "\n";
		}
	}
}