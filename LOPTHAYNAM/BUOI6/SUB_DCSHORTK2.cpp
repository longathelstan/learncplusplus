#include <bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
const int limit = 1e6+8;
int main() {
    io;
    ll n, k, dodai = limit;
    ll a[limit];
    unordered_map<ll, ll> d;
    d[0] = 0;
    cin >> n >> k;
    for (ll i = 1; i <= n; i++) cin >> a[i];
    ll tong = 0;
    for (ll i = 1; i <= n; i++) {
        tong += a[i];
        if (d.find(tong - k) != d.end()) {
            dodai = min(dodai, i - d[tong - k]);
        }
        d[tong] = i;
    }
    if (dodai == limit) cout << -1;
    else cout << dodai;
}

