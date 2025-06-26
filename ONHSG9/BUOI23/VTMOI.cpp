#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int limit = 1e5+1;
int main() {
    freopen("VTMOI.INP", "r", stdin);
    freopen("VTMOI.OUT", "w", stdout);
    int n, t, awlongontop = 1;
    pair<ll, ll> a[limit];
    cin >> n >> t;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a + 1, a + n + 1);
    for(int i = 1; i <= n; i++) {
        if (a[i].second == t) awlongontop = i;
    }
    cout << awlongontop;
}
