#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int limit = 1e5+1;

int main() {
    freopen("BIOP.INP", "r", stdin);
    freopen("BIOP.OUT", "w", stdout);
    int n;
    ll x;
    ll a[limit], b[limit];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b + 1, b + n + 1);
    for (int i = 1; i <= n; i++) {
        ll t1 = upper_bound(b + 1, b + n + 1, a[i]) - b;
        ll t2 = lower_bound(b + 1, b + n + 1, a[i]) - b;
        cout << t2 - 1 << " " << n - t1 + 1 << endl;
    }

}
