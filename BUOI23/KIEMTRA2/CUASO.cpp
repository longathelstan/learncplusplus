#include <bits/stdc++.h>
using namespace std;
const int limit = 1e6+8;

int main() {
    freopen("CUASO.INP", "r", stdin);
    freopen("CUASO.OUT", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n, a[limit], d[limit] = {0}, maxai = -1e6-8;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        d[a[i]]++;
        maxai = max(maxai, a[i]);
    }
    int nig1 = -1, nig2 = -1;
    for (int i = 1; i <= maxai; i++) {
        if (d[i] >= 2) {
            nig1 = max(nig1, i);
        }
    }
    for (int i = 1; i <= maxai; i++) {
        if (d[i] >= 2 && i != nig1) {
            nig2 = max(nig2, i);
        }
    }
    if (nig1 != -1 && nig2 != -1) cout << (nig1 + nig2) * 2;
    else cout << -1;
}
