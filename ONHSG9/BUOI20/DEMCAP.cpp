#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int limit = 1e5+1;

int main() {
    freopen("DEMCAP.INP", "r", stdin);
    freopen("DEMCAP.OUT", "w", stdout);
    int n, dem = 0;
    ll a[limit], k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++) {
        ll t = k - a[i];
        ll t1 = lower_bound(a + i + 1, a + n + 1, t) - a;
        ll t2 = upper_bound(a + i + 1, a + n + 1, t) - a;

        dem += (t2 - t1);
    }
    cout << dem;
}
