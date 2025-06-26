#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int limit = 1e6+8;

void sub1(const ll a[limit], int n, ll k) {
    ll f[limit] = {0};
    int dem = 0;
    for (int i = 1; i <= n; i++) {
        f[i] = f[i - 1] + a[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            ll sum = f[j] - f[i - 1];
            if (sum == k) dem++;
        }
    }
    cout << dem;
}

void sub2(const ll a[limit], int n, ll k) {
    ll tong = 0;
    int dem = 0;
    int l = 1;
    for (int r = 1; r <= n; r++) {
        tong += a[r];
        while (tong >= k) {
            if (tong == k) dem++;
            tong -= a[l];
            l++;
        }
    }
    cout << dem;
}

int main() {
    freopen("SUMSI.INP", "r", stdin);
    freopen("SUMSI.OUT", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    ll k, a[limit];
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    if (n <= 1e3) sub1(a, n, k);
    else sub2(a, n, k);
}
