#include <bits/stdc++.h>

using namespace std;

const int mod = 1000000007;

long long lt(long long a, long long b) {
    long long r = 1;
    while (b) {
        if (b % 2 == 1) r = r * a % mod;
        b /= 2;
        a = a * a % mod;
    }
    return r;
}

int main() {
    long long n, m, k;
    cin >> n >> m >> k;
    if (k == -1 && (n&1) != (m&1)) {
        cout << 0; return 0;
    }

    long long a = lt(2, (n-1) % (mod-1) * ((m-1) % (mod-1)) % (mod-1));

    cout << a;
}
