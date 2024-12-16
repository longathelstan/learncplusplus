#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int limit = 1e5+1;

int main() {
    freopen("DEMSO.INP", "r", stdin);
    freopen("DEMSO.OUT", "w", stdout);
    int n, q;
    ll a[limit];
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    cin >> q;
    sort(a + 1, a + n + 1);
    while(q--) {
        ll x;
        cin >> x;
        ll t1 = lower_bound(a + 1, a + n + 1, x) - a;
        ll t2 = upper_bound(a + 1, a + n + 1, x) - a;
        cout << n - t2 + 1 << " " << t1 - 1 << endl;
    }
}
