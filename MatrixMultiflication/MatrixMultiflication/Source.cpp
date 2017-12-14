#include <stdio.h>
#include<iostream>
using namespace std;
#define N 3
int mat1[N][N];

int mat2[N][N];

int res[N][N];

void multiply()
{
	int i, j, k;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			for (k = 0; k < N; k++)
				res[i][j] += mat1[i][k] * mat2[k][j];
		}
	}
}

int main()
{

	int i, j;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> mat1[i][j];
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> mat2[i][j];
		}
	}
	multiply();

	printf("Result matrix is \n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
			printf("%d ", res[i][j]);
		printf("\n");
	}

	return 0;
}