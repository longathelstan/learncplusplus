#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
const int limit = 5e5+8;

int main() {
    io;
    int n, k, a[limit], cnt[limit] = {0}, ans = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int x3 = 1; x3 <= n; x3++) {
        for (int x4 = x3 + 1; x4 <= n; x4++) {
            ans += cnt[a[x3] + a[x4] + int(3e5)];
        }
        for (int x1 = 1; x1 <= x3 - 1; x1++) {
            cnt[k - a[x1] - a[x3] + int(3e5)]++;
        }
    }
    cout << ans;
}
