#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int limit = 1e6+1;

int main() {
    freopen("TONGB.INP", "r", stdin);
    freopen("TONGB.OUT", "w", stdout);
    int n, q, k, l, r;
    ll a[limit], f[limit] = {0};
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        f[i] = f[i - 1] + a[i];
    }
    cin >> q;
    for (int i = 1; i <= q; i++) {
        cin >> l >> r;
        cout << f[r] - f[l - 1] << endl;
    }
}
