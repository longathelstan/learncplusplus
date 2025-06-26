#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int limit = 1e5+1;

int main() {
    freopen("LUCKY.INP", "r", stdin);
    freopen("LUCKY.OUT", "w", stdout);
    int n, q;
    ll a[limit];
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    cin >> q;
    while (q--) {
        ll x;
        cin >> x;
        ll t = upper_bound(a + 1, a + n + 1, x) - a;
        ll awlongdeptrai = lower_bound(a + 1, a + n + 1, x) - a;
        cout << t - awlongdeptrai << endl;
    }
}
