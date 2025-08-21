#include <bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;

set<ll> s;

void build(ll n) {
    for (ll i = 2; i <= sqrt(n); i++) {
        while (n % i == 0) {
            s.insert(i);
            n /= i;
        }
    }
    cout << s.size() + 1;
}

int main() {
    io;
    ll n;
    cin >> n;
    build(n);
}

