#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;
const ll limit = 1e5+8;
int main() {
    io;
    ll n, mod, a[limit], ans = 0;
    unordered_map<ll, ll> mp;
    cin >> n >> mod;
    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
        ans += mp[a[i] % mod];
        mp[a[i] % mod]++;
    }
    cout << ans;

}

