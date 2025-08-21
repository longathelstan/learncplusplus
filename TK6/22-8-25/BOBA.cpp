#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;
    vector<ll> a(n + 1);
    vector<ll> b(2001, 0);

    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
        b[a[i]]++;
    }

    ll d = 0;
    for (ll i = 1; i <= 1000; i++) {
        for (ll j = i; j <= 1000; j++) {
            ll s = i + j;
            if (s <= 1000) {
                if (i == j)
                    d += b[i] * (b[i] - 1) / 2 * b[s];
                else
                    d += b[i] * b[j] * b[s];
            }
        }
    }

    cout << d;
    return 0;
}

