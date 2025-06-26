#include <bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;

int main() {
    io;
    ll y, k, n;
    cin >> y >> k >> n;

    vector<ll> v;
    ll r = (k - (y % k)) % k;
    ll start = y + r;

    for (ll t = start; t <= n; t += k) {
        ll x = t - y;
        if (x >= 1) v.push_back(x);
    }

    if (v.empty()) cout << -1;
    else {
        for (ll x : v) cout << x << " ";
    }
}

