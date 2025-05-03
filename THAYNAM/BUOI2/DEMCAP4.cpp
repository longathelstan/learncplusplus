#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
const int limit = 1e6+8;
int main() {
    io;
    int n, m, a[limit], ans = 0;
    unordered_map<int, int> mp;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= m; i++) {
        int x;
        cin >> x;
        mp[x]++;
    }
    for (int i = 1; i <= n; i++) {
        ans += mp[a[i]];
    }
    cout << ans;
}

