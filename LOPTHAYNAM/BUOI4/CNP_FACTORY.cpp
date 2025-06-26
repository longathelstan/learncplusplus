#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;
const int limit = 2e5+8;

ll n, t;
ll a[limit];

bool check(ll i) {
    ll tong = 0;
    for (ll j = 1; j <= n; j++) {
        tong += (i / a[j]);
    }
    if (tong >= t) return true;
    return false;
}

int main() {
    io;
    cin >> n >> t;
    for (ll i = 1; i <= n; i++) cin >> a[i];
    ll l = 1, r = 1e18, res = 0;
    while (l <= r) {
        ll mid = (r + l) / 2;
        if (check(mid)) {
            res = mid;
            r = mid - 1;
        } else l = mid + 1;
    }
    cout << res;
}
