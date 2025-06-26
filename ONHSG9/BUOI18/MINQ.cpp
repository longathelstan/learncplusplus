#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int limit = 1e5+1;

int main() {
    int n, q;
    ll a[limit];
    cin >> n >> q;
    for (int i = 1; i <= n; i++) cin >> a[i];
    while (q--) {
        int l, r;
        ll k;
        cin >> l >> r >> k;
        auto t = lower_bound(a + l + 1, a + r + 1, k);
        if (t == a + r + 1) cout << -1 << endl;
        else cout << *t << endl;
    }
}
