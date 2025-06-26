#include <bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
const int limit = 1e5+8;
int main() {
    io;
    ll n, m, a[limit], res = 0;
    unordered_map<ll, ll> d;
    cin >> n >> m;
    for (ll i = 1; i <= n; i++) {
        ll x;
        cin >> x;
        d[x]++;
    }

    for (ll i = 1; i <= m; i++) {
        ll x;
        cin >> x;
        res += d[x];
    }
    cout << res;
}
