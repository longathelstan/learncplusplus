#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int limit = 1e3+1;

int main() {
    freopen("DCDN.INP", "r", stdin);
    freopen("DCDN.OUT", "w", stdout);
    int n;
    ll a[limit], f[limit] = {0}, mintong = 1e9+1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        f[i] = f[i - 1] + a[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            mintong = min(mintong, f[j] - f[i - 1]);
        }
    }
    cout << mintong;
}
