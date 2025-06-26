#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int limit = 1e6+8;

ll n, a[limit], kq = 0;

void sub1() {
    for (int i = 1; i <= n; i++) {
        kq = 0;
        for (int j = 1; j <= n; j++) {
            kq += abs(a[i] - a[j]);
        }
        cout << kq << " ";
    }
}

void sub2() {
    ll f[limit] = {0};
    for (int i = 1; i <= n; i++) {
        f[i] = f[i - 1] + a[i];
    }
    for (int i = 1; i <= n; i++) {
        cout << i * a[i] - f[i] + f[n] - f[i] - a[i] * (n - i) << " ";
    }
}

int main() {
    freopen("DANKIEN1.INP", "r", stdin);
    freopen("DANKIEN1.OUT", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    if (n <= 1e3) sub1();
    else sub2();
}
