#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int limit = 1e5 + 1;

int main() {
    freopen("TRUNGTHU.INP", "r", stdin);
    freopen("TRUNGTHU.OUT", "w", stdout);
    ll n, x;
    ll a[limit], maxx = -1e9+1;
    cin >> n >> x;
    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    for (ll i = 1; i <= n; i++) {
        ll s = x - a[i];
        auto t = lower_bound(a + 1, a + n + 1, s) - a;
        t--;

        if (t >= 0 && t != i) {
            ll sum = a[i] + a[t];
            if (sum <= x) {
                maxx = max(maxx, sum);
            }
        }

    }

    cout << maxx;
}
