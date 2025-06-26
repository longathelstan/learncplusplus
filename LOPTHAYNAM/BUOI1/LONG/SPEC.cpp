#include <bits/stdc++.h>
using namespace std;
const int limit = 1e6+8;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("SPEC.INP", "r", stdin);
    freopen("SPEC.OUT", "w", stdout);
    int n, a[limit], d[limit] = {0}, am[limit] = {0}, maxd = 0, maxam = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] < 0) {
            d[i] = 0;
            am[i] = am[i - 1] + 1;
            maxam = max(maxam, am[i]);
        }
        else if (a[i] > 0) {
            am[i] = 0;
            d[i] = d[i - 1] + 1;
            maxd = max(maxd, d[i]);
        } else {
            d[i] = 0;
            am[i] = 0;
        }
    }
    if (maxd > maxam) {
        cout << maxd;
    } else cout << maxam;

}
