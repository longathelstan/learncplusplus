#include <bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
const int limit = 1e5+8;
int main() {
    ll n, k, a[limit], res = 0;
    unordered_map<ll, ll> d;
    cin >> n >> k;
    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (ll i = 1; i < n; i++) {
        ll s = k - a[i];
        for (ll j = i + 1; j <= n; j++) {
            res += d[s - a[j]];
        }
        d[a[i]]++;
    }
    cout << res;
}
