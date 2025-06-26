#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int limit = 1e6+1;

int main() {
    freopen("TONGA.INP", "r", stdin);
    freopen("TONGA.OUT", "w", stdout);
    int n, q, k, lol;
    ll a[limit], f[limit] = {0};
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        f[i] = f[i - 1] + a[i];
    }
    cin >> q;
    for (int i = 1; i <= q; i++) {
        cin >> lol;
        cout << f[lol] << endl;
    }
}
