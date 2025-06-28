#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
const int limit = 1e6+8;
int main() {
    io;
    int n, d[limit] = {0}, maxn = INT_MIN, res = 0, dem = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        maxn = max(maxn, x);
        d[x]++;
    }
    for (int i = 1; i <= maxn; i++) {
        res = max(res, d[i]);
    }
    for (int i = 1; i <= maxn; i++) {
        if (d[i] == res) dem++;
    }
    cout << res << " " << dem;
}
