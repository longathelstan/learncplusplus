#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;
const ll limit = 1e6+8;
bool prime[limit];
ll N[limit] = {0};
void sang() {
    fill(prime, prime + limit, true);
    prime[0] = prime[1] = false;
    for (ll i = 2; i <= sqrt(limit); i++) {
        if (prime[i]) for (ll j = i * i; j <= limit; j += i) prime[j] = false;
    }
}

int tachSo(ll n) {
    ll tong = 0;
    while (n != 0) {
        ll digit = n % 10;
        tong += digit;
        n /= 10;
    }
    return tong;
}

void solve() {
    for (ll i = 1; i < limit; i++) {
        if (prime[i] && prime[tachSo(i)]) N[i] = N[i - 1] + 1;
        else N[i] = N[i - 1];
    }
}

int main() {
    io;
    sang();
    solve();
    ll l, r;
    cin >> l >> r;
    if (l > 1e6 || r > 1e6 || l < 2 || r < 2) {
        cout << -1;
        return 0;
    }
    cout << N[r] - N[l - 1];
}

