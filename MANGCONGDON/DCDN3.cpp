#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int limit = 1e6+1;

int main() {
    freopen("DCDN3.INP", "r", stdin);
    freopen("DCDN3.OUT", "w", stdout);
    int n, k;
    ll a[limit], f[limit] = {0}, mintong = 1e9+1;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        f[i] = f[i - 1] + a[i];
    }
    for (int i = k; i <= n; i++) {
        ll tong = f[i] - f[i - k];
        mintong = min(mintong, tong);
    }
    cout << mintong << endl;
}
