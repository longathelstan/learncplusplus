#include <bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
const int limit = 1e5+8;

ll n, m;
ll a[limit];

bool check(ll t) {
    ll dem = 0;
    for (int i = 1; i <= m; i++) {
        dem += (a[i] + t - 1) / t;
        if (dem > n) return false;
    }
    return true;
}

int main () {
    io;
    cin >> n >> m;
    for (int i = 1; i <= m; i++) cin >> a[i];

    ll l = 1, r = 1e18, res = -1;
    while (l <= r) {
        ll mid = (l + r) / 2;
        if (check(mid)) {
            res = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << res;
}

