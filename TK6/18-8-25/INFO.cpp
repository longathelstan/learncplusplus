#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;
const int limit = 1e6+8;
int main() {
    io;
    freopen("INFO.INP", "r", stdin);
    freopen("INFO.OUT", "w", stdout);
    ll n, a[limit];
    cin >> n;
    for (ll i = 1; i <= n - 1; i++) cin >> a[i];
    ll tong = 0, ans = a[1];
    for (ll i = 1; i <= n - 1; i++) {
        ans = min(ans, a[i]);
        tong += ans;
    }
    cout << tong;
}
