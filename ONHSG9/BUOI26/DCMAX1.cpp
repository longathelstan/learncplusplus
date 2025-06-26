#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int limit = 1e6+8;

int main() {
    freopen("DCMAX1.INP", "r", stdin);
    freopen("DCMAX1.OUT", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n, a[limit], f[limit] = {0}, minf[limit] = {0}, tong = LLONG_MIN;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        f[i] = f[i - 1] + a[i];
        minf[i] = min(minf[i - 1], f[i]);
    }
    for (int i = 1; i <= n; i++) {
        tong = max(tong, f[i] - minf[i - 1]);
    }
    cout << tong;
}
