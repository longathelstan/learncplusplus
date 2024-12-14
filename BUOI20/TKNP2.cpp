#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int limit = 5e5+1;

int main() {
    freopen("TKNP2.INP", "r", stdin);
    freopen("TKNP2.OUT", "w", stdout);
    int n, q;
    ll a[limit], x;
    cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    while(q--) {
        cin >> x;

        ll t = lower_bound(a + 1, a + n + 1, x) - a;
        if (t == n + 1) cout << -1 << endl;
        else cout << a[t] << endl;
    }
}
