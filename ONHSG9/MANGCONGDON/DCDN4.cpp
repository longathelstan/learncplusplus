#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int limit = 1e6+1;

int main() {
    freopen("DCDN4.INP", "r", stdin);
    freopen("DCDN4.OUT", "w", stdout);
    int n, k;
    ll a[limit], f[limit] = {0}, maxtong = -1e9+1;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        f[i] = f[i - 1] + a[i];
    }
    for (int i = k; i <= n; i++) {
        ll tong = f[i] - f[i - k];
        maxtong = max(maxtong, tong);
    }
    cout << maxtong << endl;
}
