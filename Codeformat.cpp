#pragma comment(linker, "/stack:20000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#define _CRT_SECURE_NO_WARNINGS
# include <iostream>
# include <cmath>
# include <algorithm>
# include <stdio.h>
# include <cstdint>
# include <cstring>
# include <string>
# include <cstdlib>
# include <vector>
# include <bitset>
# include <map>
# include <queue>
# include <ctime>
# include <stack>
# include <set>
# include <list>
# include <random>
# include <deque>
# include <functional>
# include <iomanip>
# include <sstream>
# include <fstream>
# include <complex>
# include <numeric>
# include <immintrin.h>
# include <cassert>
# include <array>
# include <tuple>

using namespace std;

// Let's define unordered map
# ifdef __GNUC__
# if __cplusplus > 199711L
# include <unordered_set>
# include <unordered_map>
# else
# include <tr1/unordered_map>
# include <tr1/unordered_set>
using namespace tr1;
# endif
# else
# include <unordered_map>
# include <unordered_set>
# endif


#ifdef LOCAL
#define CURTIME() cerr << clock() * 1.0 / CLOCKS_PER_SEC << endl
#else
#define CURTIME()
#endif

#define mp make_pair
typedef long long ll;
typedef unsigned int uint;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef int itn;


#define FI(n) for(int i=0;i<(n);++i)
#define FJ(n) for(int j=0;j<(n);++j)
#define FK(n) for(int k=0;k<(n);++k)
#define FL(n) for(int l=0;l<(n);++l)
#define FQ(n) for(int q=0;q<(n);++q)
#define FOR(i,a,b) for(int i = (a), __e = (int) (b); i < __e; ++i)
#define all(a) std::begin(a), std::end(a)
#define reunique(v) v.resize(std::unique(v.begin(), v.end()) - v.begin())

#define sqr(x) ((x) * (x))
#define sqrt(x) sqrt(1.0 * (x))
#define pow(x, n) pow(1.0 * (x), n)

#define COMPARE(obj) [&](const std::decay_t<decltype(obj)>& a, const std::decay_t<decltype(obj)>& b)
#define COMPARE_BY(obj, field) [&](const std::decay_t<decltype(obj)>& a, const std::decay_t<decltype(obj)>& b) { return a.field < b.field; }

#define checkbit(n, b) (((n) >> (b)) & 1)
#define setbit(n, b) ((n) | (static_cast<std::decay_t<decltype(n)>>(1) << (b)))
#define removebit(n, b) ((n) & ~(static_cast<std::decay_t<decltype(n)>>(1) << (b)))
#define flipbit(n, b) ((n) ^ (static_cast<std::decay_t<decltype(n)>>(1) << (b)))
inline int countBits(uint v){v=v-((v>>1)&0x55555555);v=(v&0x33333333)+((v>>2)&0x33333333);return((v+(v>>4)&0xF0F0F0F)*0x1010101)>>24;}
inline int countBits(ull v){uint t=v>>32;uint p=(v & ((1ULL << 32) - 1)); return countBits(t) + countBits(p); }
inline int countBits(ll v){return countBits((ull)v); }
inline int countBits(int v){return countBits((uint)v); }
unsigned int reverseBits(uint x){ x = (((x & 0xaaaaaaaa) >> 1) | ((x & 0x55555555) << 1)); x = (((x & 0xcccccccc) >> 2) | ((x & 0x33333333) << 2)); x = (((x & 0xf0f0f0f0) >> 4) | ((x & 0x0f0f0f0f) << 4)); x = (((x & 0xff00ff00) >> 8) | ((x & 0x00ff00ff) << 8)); return((x >> 16) | (x << 16)); }
template<class T> inline int sign(T x){ return x > 0 ? 1 : x < 0 ? -1 : 0; }
inline bool isPowerOfTwo(int x){ return (x != 0 && (x&(x - 1)) == 0); }
constexpr ll power(ll x, int p) { return p == 0 ? 1 : (x * power(x, p - 1)); }

#define FREIN(FILE) freopen(FILE, "rt", stdin)
#define FREOUT(FILE) freopen(FILE, "wt", stdout)
#ifdef LOCAL
#define BEGIN_PROFILE(idx, name) int profileIdx = idx; profileName[profileIdx] = name; totalTime[profileIdx] -= rdtsc() / 1e3;
#define END_PROFILE totalTime[profileIdx] += rdtsc() / 1e3; totalCount[profileIdx]++;
#else
#define BEGIN_PROFILE(idx, name)
#define END_PROFILE
#endif

template<class T> inline void normmod(T &x, T m) { x %= m; if (x < 0) x += m; }
template<class T1, class T2> inline T2 summodfast(T1 x, T1 y, T2 m) { T2 res = x + y; if (res >= m) res -= m; return res; }
template<class T1, class T2, class T3> inline void addmodfast(T1 &x, T2 y, T3 m) { x += y; if (x >= m) x -= m; }
template<class T1, class T2, class T3> inline void submodfast(T1 &x, T2 y, T3 m) { x -= y; if (x < 0) x += m; }
#if INTPTR_MAX == INT32_MAX or !defined(__SIZEOF_INT128__)
inline ll mulmod(ll x, ll n, ll m){ ll r = 0; normmod(x, m); normmod(n, m); while (n) { if (n & 1) r += x; x += x; if (r >= m) r -= m; if (x >= m) x -= m; n /= 2; } return r; }
#else
using int128 = __int128;
inline ll mulmod(ll x, ll n, ll m){ return __int128(x) * n % m; }
#endif
inline ll powmod(ll x, ll n, ll m){ ll r = 1; normmod(x, m); while (n){ if (n & 1)r = (r*x) % m; x = (x*x) % m; n /= 2; }return r; }
inline ll powmulmod(ll x, ll n, ll m) { ll res = 1; normmod(x, m); while (n){ if (n & 1)res = mulmod(res, x, m); x = mulmod(x, x, m); n /= 2; } return res; }
template<class T> inline T gcd(T a, T b) { while (b) { a %= b; T t = a; a = b; b = t; } return a; }
inline ll lcm(ll a, ll b){ return a / gcd(a, b) * b; }
template<class T> inline T gcd(T a, T b, T c){ return gcd(gcd(a, b), c); }
ll gcdex(ll a, ll b, ll& x, ll& y) {
    if (!a) { x = 0; y = 1; return b; }
    ll y1; ll d = gcdex(b % a, a, y, y1); x = y1 - (b / a) * y;
    return d;
}
template<class T> bool isPrime(T x) { if (x <= 4 || x % 2 == 0 || x % 3 == 0) return x == 2 || x == 3;
    for (T i = 5; i * i <= x; i += 6) if (x % i == 0 || x % (i + 2) == 0) return 0; return 1; }
bool millerRabin(long long n) {
    if (n <= 1000) return isPrime(n);
    long long s = n - 1; int t = 0; while (s % 2 == 0) s /= 2, ++t;
    for (int a : {2, 325, 9375, 28178, 450775, 9780504, 1795265022}) { if (!(a %= n)) return true;
        long long f = powmulmod(a, s, n); if (f == 1 || f == n - 1) continue;
        for (int i = 1; i < t; ++i) if ((f = mulmod(f, f, n)) == n - 1) goto nextp;
        return false; nextp:;
    } return true;
}

// Useful constants

//int some_primes[7] = {24443, 100271, 1000003, 1000333, 5000321, 98765431, 1000000123};
#define T9          1000000000
#define T18         1000000000000000000LL
#define INF         1011111111
#define LLINF       1000111000111000111LL
#define mod         1000000007
#define EPS         (double)1e-10
#define PI          3.14159265358979323846264
#define link        asaxlajrewqwe
#define rank        wahayawehasdakw
//*************************************************************************************

int32_t solve();
int32_t main(int argc, char** argv) {
    ios_base::sync_with_stdio(0);cin.tie(0);
#ifdef LOCAL
//            FREIN("input.txt");
//            FREOUT("out.txt");
#endif
    return solve();
}


int solve() {
    bool ok = true;
    int n;
    cin >> n;
    int x = 3;
    int a = 1;
    int b = 2;
    FI(n) {
        int t;
        cin >> t;
        if (t == x) {
            cout << "NO" << endl;
            exit(0);
        }
        if (t == a) {
            swap(b, x);
        } else {
            swap(a, x);
        }
    }
    cout << "YES" << endl;

    return 0;
}
