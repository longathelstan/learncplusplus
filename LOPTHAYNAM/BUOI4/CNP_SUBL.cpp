#include <bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
const int limit = 1e6+8;
ll n, m, a[limit];

bool check(ll x) {
    ll tong = 0;
    for (int i = 1; i <= x; i++) {
        tong += a[i];
    }
    if (tong < m) return false;
    for (int i = x + 1, j = 1; i <= n; i++, j++) {
        tong = tong + a[i] - a[j];
        if (tong < m) return false;
    }
    return true;
}

void sub1() {
    for (int i = 1; i <= n; i++) {
        if (check(i)) {
            cout << i;
            return;
        }
    }
    cout << -1;
}

void sub2() {
    int d = 1, c = n, ans = -1;
    while (d <= c) {
        int mid = (d + c) / 2;
        if (check(mid)) {
            ans = mid;
            c = mid - 1;
        } else d = mid + 1;
    }
    cout << ans;
}

int main() {
    io;
    cin >> n >> m;
    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
    }
    ll ans = 0;
    if (n <= 1e3) sub1();
    else sub2();
}

