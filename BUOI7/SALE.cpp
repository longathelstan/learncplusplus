#include <bits/stdc++.h>
using namespace std;
const int limit = 1e5+1;
#define ll long long
int main() {
    freopen("SALE.INP", "r", stdin);
    freopen("SALE.OUT", "w", stdout);
    int n;
    ll a[limit];
    ll t, tong = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    cin >> t;
    sort(a + 1, a + n + 1);
    if (n % 2 == 0) {
        for (int i = 1; i <= n / 2; i++) {
            tong += a[i];
        }
        if (tong <= t) cout << "Yes";
        else cout << "No";
    } else {
        for (int i = 1; i <= n / 2 + 1; i++) {
            tong += a[i];
        }
        if (tong <= t) cout << "Yes";
        else cout << "No";
    }
}
