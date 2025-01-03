#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int limit = 1e4+8;
bool awl(ll n, ll d) {
    vector<ll> v;
    for (ll i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            v.push_back(i);
            if (i != n / i) {
                v.push_back(n / i);
            }
        }
    }
    if (v.size() < 4) return false;
    sort(v.begin(), v.end());
    for (ll i = 1; i < v.size(); i++) {
        if (v[i] - v[i - 1] < d) return false;
    }
    return true;
}

int main() {
    ll t, d;
    cin >> t;
    while(t--) {
        cin >> d;
        for (ll i = 1; i <= limit; i++) {
            if (awl(i, d)) {
                cout << i << "\n";
                break;
            }
        }
    }
}

