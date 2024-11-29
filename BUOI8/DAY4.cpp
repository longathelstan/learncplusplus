#include <bits/stdc++.h>
using namespace std;
const int limit = 1e6+1;
#define ll long long

int main() {
    freopen("DAY4.INP", "r", stdin);
    freopen("DAY4.OUT", "w", stdout);
    int n;
    ll a[limit], maxx = -1e9-1;

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] < 0)maxx = max(a[i], maxx);

    }
    cout << maxx;
}
