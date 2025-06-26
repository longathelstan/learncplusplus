#include <bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false); cin.tie(0);
const int limit = 1e5+8;
using namespace std;

ll solve(ll a, ll b) {
    return a / __gcd(a, b) * b;
}

int main() {
    ll n, k, a[limit];
    cin >> n >> k;
    ll tmp = 1;
    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
        tmp = lcm(tmp, a[i]);
    }
    if (k % tmp == 0) cout << k;
    else cout << tmp * (k / tmp + 1);
}
