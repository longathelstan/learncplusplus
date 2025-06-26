#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sub1(ll a, ll b, ll n) {
    for (ll d = n; d > 0; d--) {
        if (d % a == 0 && d % b == 0) {
            cout << d;
            return;
        }
    }
    cout << -1;
}

ll lcm(ll x, ll y) {
    return x / __gcd(x, y) * y;
}

void sub2(ll a, ll b, ll n) {
    ll m = lcm(a, b);
    ll tmp = (n / m) * m;
    if (tmp == 0) cout << -1;
    else cout << tmp;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    freopen("FIND.INP", "r", stdin);
    freopen("FIND.OUT", "w", stdout);

    ll a, b, n;
    cin >> a >> b >> n;

    if (n <= 1e6)
        sub1(a, b, n);
    else
        sub2(a, b, n);

    return 0;
}
