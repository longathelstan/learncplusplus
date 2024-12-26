#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int limit = 1e5 + 8;
int main() {
    freopen("SODAYCON.INP", "r", stdin);
    freopen("SODAYCON.OUT", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    ll n, m, k, a[limit], f[limit] = {0};

    cin >> n >> m >> k;
    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
        f[i] = f[i - 1] + a[i];
    }

    ll dem = 0;
    ll l = 1;
    for (ll r = 1; r <= n; r++) {
        while (l <= r && f[r] - f[l - 1] > k) {
            l++;
        }

        ll mid = l;
        while (mid <= r && f[r] - f[mid - 1] >= m) {
            dem++;
            mid++;
        }
    }

    cout << dem;
}
