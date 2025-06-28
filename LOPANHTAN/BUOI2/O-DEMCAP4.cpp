#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
int main() {
    io;
    int n, m, res = 0;
    unordered_map<int, int> d;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        d[x]++;
    }
    for (int i = 1; i <= m; i++) {
        int x; cin >> x;
        res += d[x];
    }
    cout << res;
}
