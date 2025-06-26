#include <bits/stdc++.h>
using namespace std;
const int limit = 1e5+1;
#define ll long long

int main() {
    freopen("FINDAB.INP", "r", stdin);
    freopen("FINDAB.OUT", "w", stdout);
    int n;
    ll a[limit], b[limit], dem = 0;
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
        if (binary_search(b + 1, b + n + 1, a[i])) dem++;
    }
    cout << dem;
}
