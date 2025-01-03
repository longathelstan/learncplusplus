#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int limit = 1e6+8;

ll n, k, x, y, f[limit] = {0}, maxx = 0, kq = 0;
pair<ll, ll> a[limit];

void sub1(ll n, ll k) {
    unordered_map<ll, ll> mp;
    for (ll i = 1; i <= n; i++) {
        cin >> x >> y;
        mp[x] += y;
        maxx = max(maxx, x);
    }
    for (ll i = 1; i <= maxx; i++) {
        f[i] = f[i - 1] + (mp.count(i) ? mp[i] : 0);
    }
    for (ll i = 1; i <= maxx; i++) {
        ll start = max(1LL, i - k);
        ll endd = min(maxx, i + k);
        kq = max(kq, f[endd] - f[start - 1]);
    }
    cout << kq;
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
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;

    if (n <= 1e5) sub1(n, k);
    else sub2(n, k);
}
