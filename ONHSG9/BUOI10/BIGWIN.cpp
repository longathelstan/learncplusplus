#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int limit = 1e5+1;
ll n, k, a[limit], tong = 0, luu, ans, t;
int main() {
    freopen("BIGWIN.INP", "r", stdin);
    freopen("BIGWIN.OUT", "w", stdout);
    cin >> t;
    for (int j = 1; j <= t; j++) {
        tong = 0;
        cin >> n >> k;
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= k; i++) tong += a[i];
        luu = k;
        ans = tong;
        for (int i = k + 1; i <= n; i++) {
        tong += a[i];
        tong -= a[i - k];
        if (tong > ans) {
            ans = tong;
            luu = i;
        }
        }

        cout << ans << endl;
        for (int i = luu - k + 1; i <= luu; i++) {
        cout << a[i] << " ";
        }
        cout << endl;
    }
}
