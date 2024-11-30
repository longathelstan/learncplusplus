#include <bits/stdc++.h>
using namespace std;
const int limit = 1e5+1;
int main() {
    freopen("RELIGHT.INP", "r", stdin);
    freopen("RELIGHT.OUT", "w", stdout);
    int n, k, b;
    int pos;
    int tong = 0;
    int a[limit] = {0}, ans = 0;
    cin >> n >> k >> b;
    for (int i = 1; i <= b; i++) {
        cin >> pos;
        a[pos] = 1;
    }
    for (int i = 1; i <= k; i++) {
        tong += a[i];
    }
    ans = tong;
    int d = 1;
    for (int i = k + 1; i <= n; i++, d++) {
        tong += a[i];
        tong -= a[d];
        ans = min(ans, tong);
    }
    cout << abs(ans);
}

