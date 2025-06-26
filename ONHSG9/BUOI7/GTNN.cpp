#include <bits/stdc++.h>
// v.begin() , v.end();
using namespace std;
const int limit = 1e5+1;
#define ll long long
int main() {
    freopen("GTNN.INP", "r", stdin);
    freopen("GTNN.OUT", "w", stdout);
    int n;
    ll a[limit], b[limit], tong = 0;

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }
    sort(a + 1, a + n + 1);
    sort(b + 1, b + n + 1);
    for (int i = 1; i <= n; i++) {
        tong += abs(a[i] - b[i]);
    }
    cout << tong;
}

