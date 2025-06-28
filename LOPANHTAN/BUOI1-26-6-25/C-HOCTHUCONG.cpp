#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
const int limit = 1e6+8;
int main() {
    io;
    int n, d[limit] = {0}, maxa = 0, res = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        maxa = max(maxa, x); d[x]++;
    }
    for (int i = 1; i <= maxa; i++) {
        if (d[i] < 3) continue;
        res += d[i] / 3;
    }
    cout << res << " " << n - res * 3;
}
