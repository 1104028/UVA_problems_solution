#include<iostream>
#include<stdio.h>
#include <iomanip>
#include <math.h>
using namespace std;
double a[1001];
int main()
{
	int n;
	double sum,result1,result2,value;
	while (1)
	{
		cin >> n;
		if (n == 0)
			break;

		sum = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			sum += a[i];
		}
	   
		value = ((sum/n) * 100 / 100);


		result1 = 0;
		result2 = 0;
		for (int i = 0; i < n; ++i)
		{
			double dif = (double)(long)((a[i] - value) * 100.0) / 100.0;
			if (dif>0)
				result1 += dif;
			else
				result2 += dif;
		}
		double resp = (-result2 > result1) ? -result2 : result1;
		resp = (resp<0) ? -resp : resp;
		printf("$%.2lf\n", resp);
	}
}