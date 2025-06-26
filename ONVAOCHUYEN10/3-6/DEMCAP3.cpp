#include <bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;

int main() {
    io;
    ll n, k, res = 0;
    unordered_map<ll, ll> d;
    cin >> n >> k;
    for (ll i = 1; i <= n; i++) {
        ll x;
        cin >> x;
        res += d[x - k];
        d[x]++;
    }
    cout << res;
}
