#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int limit = 1e4+1;
int main() {
    ll n, k, x, maxx = 0, kq = 0;
    ll y, d[limit] = {0}, f[limit] = {0};
    pair<ll, ll> a[limit];
    cin >> n >> k;
    for (ll i = 1; i <= n; i++) {
        cin >> x >> y;
        maxx = max(maxx, x);
        a[i].first = x;
        a[i].second = y;
    }
    for (ll i = 1; i <= n; i++) {
        d[a[i].first] = a[i].second;
    }
    for (ll i = 1; i <= maxx; i++) {
        f[i] = f[i - 1] + d[i];
//        cout << i << " " << d[i] << endl;
    }
    for (ll i = 1; i <= maxx; i++) {
//        kq = max(kq, (f[i] - f[max(0, i - k - 1)]) + (f[min(maxx, i + k + 1)] - f[i]));
        ll start = max(0LL, i - k - 1LL);
        ll end = min(maxx, i + k + 1LL);
        kq = max(kq, (f[i] - f[start]) + (f[end] - f[i]));
    }
    cout << kq;
}
