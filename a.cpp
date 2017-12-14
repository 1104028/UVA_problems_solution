#include <bits/stdc++.h>

using namespace std;

char s[100000];

int main() {
    scanf("%s", s);
    int a = 0, b = 0;
    int ans = 0;
    for (int i = 0; s[i]; i++) {
        if (s[i] == 'Q') {
            ans += b;
            a++;
        }
        else if (s[i] == 'A') {
            b += a;
        }
    }
    printf("%d", ans);
}
