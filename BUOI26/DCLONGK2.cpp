#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int limit = 1e6+8;
int main() {
    freopen("DCLONGK2.INP", "r", stdin);
    freopen("DCLONGK2.OUT", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n, k, a[limit], dodai = -1;
    unordered_map<ll, ll> d;
    d[0] = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    ll tong = 0;
    for (int i = 1; i <= n; i++) {
        tong += a[i];
        if (d.find(tong - k) != d.end()) {
            dodai = max(dodai, i - d[tong - k]);
        }
        if (d.find(tong) == d.end()) d[tong] = i;
    }
    cout << dodai;
}
