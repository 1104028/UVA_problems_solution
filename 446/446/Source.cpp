#include <iostream>
#include<stdio.h>

using namespace std;

int n;
int a[100005], b[100005];

int main(void) {

	cin >> n;
	long long s = 0;
	for (int i = 0; i < n; ++i) cin >> a[i], s += a[i];
	for (int i = 0; i < n; ++i) cin >> b[i];
	Array::Sort(b,0,n);
	if (s <= b[n - 1] + b[n - 2]) cout << "YES" << endl;
	else cout << "NO" << endl;
}