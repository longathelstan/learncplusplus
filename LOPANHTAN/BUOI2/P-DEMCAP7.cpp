#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
const int limit = 1e6+8;
int main() {
    io;
    int n, a[limit] = {0}, b[limit] = {0};
    int res = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        a[x]++;
    }
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        b[x]++;
    }
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        res += a[x] * b[x];
    }
    cout << res;
}
