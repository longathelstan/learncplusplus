#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    freopen("TINHTONG.INP", "r", stdin);
    freopen("TINHTONG.OUT", "w", stdout);
    ll t, l, r;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> l >> r;
        ll sosohang = (r - l) / 1 + 1;
        cout << (l + r) * sosohang / 2 << endl;
    }
}
