#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
const int limit = 1e5+8;
int main() {
    io;
    int n, k, a[limit], b[limit], c[limit], ans = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) b[i] = gcd(b[i - 1], a[i]);
    for (int i = n; i >= 1; i--) c[i] = gcd(c[i + 1], a[i]);
    for (int i = 1; i <= n - k + 1; i++) ans = max(ans, gcd(b[i - 1], c[i + k]));
    cout << ans;
}
