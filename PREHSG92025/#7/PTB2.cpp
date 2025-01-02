#include <bits/stdc++.h>
using namespace std;
const int limit = 1e3+8;
int main() {
    freopen("PTB2.INP", "r", stdin);
    freopen("PTB2.OUT", "w", stdout);
    int n, a[limit], dem = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    unordered_map<int, int> m;
    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            m[a[i]-a[j]]++;
        }
    }
    for (int i = 1; i <= n; i++) {
        if (m.find(-a[i]) != m.end()) {
            dem += m[-a[i]];
        }
    }
    cout << dem;
}

