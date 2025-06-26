#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main() {
    io;
    ll n, k, ans = 0;
    unordered_map<ll, ll> mp;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        ll x;
        cin >> x;
        ans += mp[k - pow(x, 2)];
        mp[x]++;
    }
    cout << ans;
}
