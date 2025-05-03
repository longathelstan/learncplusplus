#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;
const ll limit = 1e5+8;
int main() {
    io;
    ll n, k, a[limit], ans = 0;
    unordered_map<ll, ll> mp;
    cin >> n >> k;
    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] % k != 0) continue;
        ll tmp = a[i] / k;

        for (auto &[key, freq] : mp) {
            if (__gcd(key, tmp) == 1)
                ans += freq;
        }

        mp[tmp]++;
    }
    cout << ans;

}


