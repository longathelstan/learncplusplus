#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll y, k, n;
    vector<ll> v;
    cin >> y >> k >> n;
    for (ll i = 1; i <= n / k; i++) {
        ll tmp = k * i;
        if (tmp > y) v.push_back(tmp);
    }
    if (v.size() != NULL) {
        for (ll x : v) cout << x - y << " ";
    } else cout << -1;
}
