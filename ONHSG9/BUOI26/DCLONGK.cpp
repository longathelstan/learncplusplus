#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int limit = 1e5+8;

void sub1(const ll a[limit], int n, ll k) {
    ll f[limit] = {0};
    int dodai = -1;
    for (int i = 1; i <= n; i++) {
        f[i] = f[i - 1] + a[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            ll sum = f[j] - f[i - 1];
            if (sum == k) dodai = max(dodai, j - i + 1);
        }
    }
    cout << dodai;
}

void sub2(const ll a[limit], int n, ll k) {
    ll tong = 0;
    int l = 1, dodai = -1;
    for (int r = 1; r <= n; r++) {
        tong += a[r];
        while (tong >= k) {
            if (tong == k) dodai = max(dodai, r - l + 1);
            tong -= a[l];
            l++;
        }
    }
    cout << dodai;
}

void sub3(const ll a[limit], int n, ll k) {
    ll f[limit] = {0};
    int dodai = -1;
    for (int i = 1; i <= n; i++) {
        f[i] = f[i - 1] + a[i];
    }
    for (int i = 1; i <= n; i++) {
        if (f[i] >= k) {
            int t = lower_bound(f, f + n + 1, f[i] - k) - f;
            if (f[t] == f[i] - k) dodai = max(dodai, i - t);
        }
    }
    cout << dodai;
}
int main() {
    freopen("DCLONGK.INP", "r", stdin);
    freopen("DCLONGK.OUT", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    ll k, a[limit];
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sub3(a, n, k);
//    if (n <= 1e3) sub1(a, n, k);
//    else sub2(a, n, k);
}
