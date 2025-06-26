// demso-chuyenhatinh21-22

#include <bits/stdc++.h>
using namespace std;

const int limit = 1e5+1;

int main() {
    freopen("COUNT.INP", "r", stdin);
    freopen("COUNT.OUT", "w", stdout);
    int n, x, q, l, r;
    int a[limit], f[limit] = {0};
    cin >> n >> x >> q;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] < x && a[i] >= 0) f[i] = f[i - 1] + 1;
        else f[i] = f[i - 1];
    }
    for (int i = 1; i <= q; i++) {
        cin >> l >> r;
        cout << f[r] - f[l - 1] << endl;
    }
}
