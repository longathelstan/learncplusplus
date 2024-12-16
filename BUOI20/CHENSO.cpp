#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int limit = 1e5+1;

int main() {
    freopen("CHENSO.INP", "r", stdin);
    freopen("CHENSO.OUT", "w", stdout);
    int n, q;
    ll a[limit];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    cin >> q;
    while(q--) {
        ll x;
        cin >> x;
        ll t = lower_bound(a + 1, a + n + 1, x) - a;
        cout << t << endl;
    }
}
