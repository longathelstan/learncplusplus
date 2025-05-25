#include <bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false); cin.tie(0);
#define file freopen("SUBARRK.INP", "r", stdin); freopen("SUBARRK.OUT", "w", stdout);
using namespace std;
const int limit = 1e5+8;
ll n, k, a[limit], f[limit] = {0}, res = -1e18;

void sub1() {
    for (ll i = 1; i <= n - k; i++) {
        for (ll j = i + k; j <= n; j++) {
            res = max(res, f[j] - f[i - 1]);
        }
    }
    cout << res;
}

void sub2() {
    ll minf = 1e18, sum = -1e18;
    for (int i = k; i <= n; i++) {
        minf = min(minf, f[i - k]);
        sum = max(sum, f[i] - minf);
    }
    cout << sum;
}

int main() {
    io;
    file;
    cin >> n >> k;
    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
        f[i] = f[i - 1] + a[i];
    }

    sub2();
}
