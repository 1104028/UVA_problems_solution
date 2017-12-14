#include <iostream>
#include<stdio.h>
using namespace std;

int main() {
	int n, i, j;
	while (scanf("%d", &n) == 1) {
		int y = 0;
		for (i = 0; i < 4; i++) {
			y = (y << 8) | ((n >> (8 * i)) & 255);
			int x=(y << 8);
			int z=((n >> (8 * i)) & 255);
			cout<<x<<" "<<z<<" "<<y<<"\n";
		}
		printf("%d converts to %d\n", n, y);
	}
	return 0;
}
