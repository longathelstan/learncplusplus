#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int limit = 1e6+8;
ll n, a[limit], f[limit] = {0}, l, r, dem = 0;

void sub1() {
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            if (abs(f[j] - f[i - 1]) >= l && abs(f[j] - f[i - 1]) <= r) dem++;
        }
    }
    cout << dem;
}

void sub2() {
    sort(f, f + n + 1);
    for (ll i = 0; i <= n; i++) {
        ll t1 = lower_bound(f + i + 1, f + n + 1, f[i] + l) - f;
        ll t2 = upper_bound(f + i + 1, f + n + 1, f[i] + r) - f;
        dem += (t2 - t1);
    }
    cout << dem;
}

int main() {
    freopen("BSUM.INP", "r", stdin);
    freopen("BSUM.OUT", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> l >> r;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        f[i] = f[i - 1] + a[i];
    }
    if (n <= 1e3) sub1();
    else sub2();
}
