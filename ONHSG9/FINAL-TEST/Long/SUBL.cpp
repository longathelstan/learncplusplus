#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll limit = 1e6+8;
ll n, m, a[limit], f[limit] = {0};
void sub1() {
    ll dodai = limit;
    for (ll i = 1; i <= n; i++) {
        for (ll j = 1; j <= n; j++) {
            if (f[j] - f[i - 1] == m) {
                dodai = min(dodai, j - i + 1);
            }
        }
    }
    if (dodai == limit) cout << -1;
    else cout << dodai;
}
void sub2() {
    ll dodai = limit;
    ll tong = 0;
    ll l = 1;
    for (ll r = 1; r <= n; r++) {
        tong += a[r];
        while (tong >= m) {
            if (tong == m) dodai = min(dodai, r - l + 1);
            tong -= a[l];
            l++;
        }
    }
    if (dodai == limit) cout << -1;
    else cout << dodai;
}
int main() {
    freopen("SUBL.INP", "r", stdin);
    freopen("SUBL.OUT", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
        f[i] = f[i - 1] + a[i];
    }
    if (n <= 1e3) sub1();
    else sub2();
}
