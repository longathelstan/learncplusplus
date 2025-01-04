#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll limit = 1e6+8;
bool prime[limit];
void sang() {
    fill(prime, prime + limit, true);
    prime[0] = prime[1] = false;
    for (ll i = 2; i <= sqrt(limit); i++) {
        if (prime[i]) for (ll j = i * i; j <= limit; j += i) prime[j] = false;
    }
}

int main() {
    freopen("TDC.INP", "r", stdin);
    freopen("TDC.OUT", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    sang();
    ll n, a[limit], f[limit] = {0}, q;
    cin >> n >> q;
    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
        if (prime[a[i]]) f[i] = f[i - 1] + 1;
        else f[i] = f[i - 1];
    }
    while(q--) {
        ll l, r;
        cin >> l >> r;
        cout << f[r] - f[l - 1] << "\n";
    }
}
