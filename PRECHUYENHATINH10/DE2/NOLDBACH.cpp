#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
#define file freopen("NOLDBACH.INP", "r", stdin); freopen("NOLDBACH.OUT", "w", stdout);
#define ll long long
using namespace std;

vector<bool> is_prime;
vector<ll> v;

void sang(ll n) {
    is_prime.assign(n+1, true);
    is_prime[0] = is_prime[1] = false;
    for (ll i = 2; i * i <= n; ++i) {
        if (is_prime[i]) {
            for (ll j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }

    for (ll i = 2; i <= n; ++i) {
        if (is_prime[i])
            v.push_back(i);
    }
}

void solve() {
    ll n, k;
    cin >> n >> k;
    sang(n);
    ll tmp = 0;
    for (size_t i = 0; i + 1 < v.size(); ++i) {
        ll s = v[i] + v[i+1] + 1;
        if (s <= n && is_prime[s])
            ++tmp;
    }
    cout << (tmp >= k ? "YES" : "NO");
}

int main() {
    io;
    file;
    solve();
}
