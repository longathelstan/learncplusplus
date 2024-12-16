#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int limit = 1e5+1;

int main() {
    freopen("DUANGUA.INP", "r", stdin);
    freopen("DUANGUA.OUT", "w", stdout);
    int n;
    ll a[limit], b[limit];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }
    sort(b + 1, b + n + 1);
    for (int i = 1; i <= n; i++) {
        ll t = upper_bound(b + 1, b + n + 1, a[i]) - b;
        cout << t - 1 << " ";
    }
}
