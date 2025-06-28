#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
const int limit = 1e4+8;
int main() {
    io;
    int n, L, res = 0;
    cin >> n >> L;

    int a[limit], b[limit], c[limit], d[limit];
    unordered_map<int, int> mp;

    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];
    for (int i = 1; i <= n; i++) cin >> c[i];
    for (int i = 1; i <= n; i++) cin >> d[i];

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            mp[a[i] + b[j]]++;
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            res += mp[L - c[i] - d[j]];
        }
    }
    cout << res;
}
