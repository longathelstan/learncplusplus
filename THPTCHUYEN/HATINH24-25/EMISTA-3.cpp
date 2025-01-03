#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int limit = 1e6+1;

ll n, k, x, y, f[limit] = {0}, maxx = 0, kq = 0;
pair<ll, ll> a[limit];

void sub1(ll n, ll k) {
    for (int i = 1; i <= n; i++) {
        cin >> x >> y;
        a[i].first = x;
        a[i].second = y;
    }
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++) {

    }
}

void sub2(ll n, ll k) {
    ll d[limit] = {0};
    for (ll i = 1; i <= n; i++) {
        cin >> x >> y;
        d[x] += y;
        maxx = max(maxx, x);
    }
    for (ll i = 1; i <= maxx; i++) {
        f[i] = f[i - 1] + d[i];
    }
    for (ll i = 1; i <= maxx; i++) {
        ll start = max(1LL, i - k);
        ll endd = min(maxx, i + k);
        kq = max(kq, f[endd] - f[start - 1]);
    }
    cout << kq;
}

int main() {
    freopen("EMISTA.INP", "r", stdin);
    freopen("EMISTA.OUT", "w", stdout);
    cin >> n >> k;

    if (n >= 1e5) sub2(n, k);
    else sub1(n, k);
}
