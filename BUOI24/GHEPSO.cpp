#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int limit = 101;

int firstchuso(ll n) {
    while (n >= 10) {
        n /= 10;
    }
    return n;
}

int main() {
    int n;
    ll a[limit];
    pair<int, ll> f[limit];
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];

    for (int i = 1; i <= n; i++) {
        f[i].first = firstchuso(a[i]);
        f[i].second = a[i];
    }
    sort(f + 1, f + n + 1, [](pair<int, ll> x, pair<int, ll> y) {
         if (x.first == y.first) return x.second > y.second;
         return x.first > y.first;
    });

    for(int i = 1; i <= n; i++) {
        cout << f[i].second;
    }
}
