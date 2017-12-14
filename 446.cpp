#include <bits/stdc++.h>
using namespace std;
typedef long long               ll;
const int mod = 1e9+7;
#ifndef M_PI
const double M_PI = acos(-1.0);
#endif

int main(){
	int n;
	cin>>n;
	int alive = 0;
	int l[n];
	int smallest_kill = n;
	for(int i=0; i<n; ++i){
		scanf("%d", &l[i]);
	}
	for(int i=n-1; i>=0; --i){
		if(i < smallest_kill){
			++alive;
		}
		smallest_kill = min(smallest_kill, i-l[i]);
	}
	cout<<alive<<endl;
	return 0;
}
