#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll limit = 1e5+8;
ll n, l, r, a[limit], f[limit] = {0};
int dem = 0;
void sub1() {
    for (ll i = 1; i <= n; i++) {
        for (ll j = i; j <= n; j++) {
            if (abs(f[j] - f[i - 1]) >= l && abs(f[j] - f[i - 1]) <= r) dem++;
        }
    }
}
void sub2() {
    sort(f, f + n + 1);
    for (ll i = 0; i <= n; i++) {
        ll t1 = lower_bound(f + i + 1, f + n + 1, f[i] + l) - f;
        ll t2 = upper_bound(f + i + 1, f + n + 1, f[i] + r) - f;
        dem += (t2 - t1);
    }
}
int main() {
    cin >> n >> l >> r;
    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
        f[i] = f[i - 1] + a[i];
    }
    sub2();
    cout << dem;
}
