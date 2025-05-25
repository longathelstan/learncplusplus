#include <bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false); cin.tie(0);
#define file freopen("THREEGCD.INP", "r", stdin); freopen("THREEGCD.OUT", "w", stdout);
using namespace std;

ll m, n, maxx = 0;

ll gcd(ll a, ll b, ll c) {
    return __gcd(a, __gcd(b, c));
}

void sub1() {
    for (int i = m; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int z = j + 1; z <= n; z++) {
                maxx = max(gcd(i, j, z), maxx);
            }
        }
    }
    cout << maxx;
}

void sub2() {
    for (ll d = n; d >= 1; d--) {
        ll a = (m + d - 1) / d * d;
        ll b = n / d * d;
        if ((b - a) / d + 1 >= 3) {cout << d; return;}
    }
}

int main() {
    io;
    file;
    cin >> m >> n;
    if (n <= 100) sub2();
    else sub2();
}
