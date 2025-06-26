#include <bits/stdc++.h>
#define io ios::sync_with_stdio(0); cin.tie(0);
#define file freopen("CAPCHIA.INP", "r", stdin); freopen("CAPCHIA.OUT", "w", stdout);
#define ll long long
using namespace std;

const int limit = 1e6+8;

int main() {
    io;
    file;
    ll n, a[limit], d[limit] = {0}, MaxA = -1e9-8;
    cin >> n;
    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
        d[a[i]]++;
        MaxA = max(MaxA, a[i]);
    }
    ll dem = 0;
    for (ll i = 1; i <= MaxA; i++) {
        if (d[i] == 0) continue;
        dem += d[i] * (d[i] - 1) / 2;
        for (ll j = i * 2; j <= MaxA; j += i) {
            if (d[j]) dem += d[i] * d[j];
        }
    }
    cout << dem;
}
