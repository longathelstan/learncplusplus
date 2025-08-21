#include <bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;

const ll limit = 1e6 + 8;
ll c[limit];

int main() {
    io;
    freopen("TANK.INP", "r", stdin);
    freopen("TANK.OUT", "w", stdout);

    ll n;
    ll m;
    cin >> n >> m;
    for (ll i = 1; i <= n; ++i) cin >> c[i];

    ll res = -1;
    ll l = 1, r = n;
    while (l <= r) {
        ll mid = (l + r) / 2;
        ll sum = 0;
        bool hanhiuoi33 = true;
        for (ll i = 1; i <= mid; ++i) sum += c[i];
        if (sum < m) hanhiuoi33 = false;
        for (ll i = mid + 1; i <= n && hanhiuoi33; ++i) {
            sum += c[i] - c[i - mid];
            if (sum < m) hanhiuoi33 = false;
        }
        if (hanhiuoi33) {
            res = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << res << '\n';
}

