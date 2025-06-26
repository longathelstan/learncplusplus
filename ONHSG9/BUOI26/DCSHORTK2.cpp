#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int limit = 1e5+8;
int main() {
//    freopen("DCSHORTK2.INP", "r", stdin);
//    freopen("DCSHORTK2.OUT", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n, k, a[limit], dodai = LLONG_MAX;
    unordered_map<ll, ll> d;
    d[0] = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    ll tong = 0;
    for (int i = 1; i <= n; i++) {
        tong += a[i];
        if (d.find(tong - k) != d.end()) {
            dodai = min(dodai, i - d[tong - k]);
        }
        // đánh luôn => i mới > i cũ => i - d[tong - k] ngằn hơn
        d[tong] = i;

    }
    if (dodai == LLONG_MAX) dodai = -1;
    cout << dodai;
}

