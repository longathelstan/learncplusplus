#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int limit = 1e6+8;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("PPOINT.INP", "r", stdin);
    freopen("PPOINT.OUT", "w", stdout);
    int n, d[4] = {0};
    ll ans = LLONG_MAX;
    pair<ll, ll> a[limit];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    int l = 1;
    for (int i = 1; i <= n; i++) {
        d[a[i].second]++;
        while (d[1] > 0 && d[2] > 0 && d[3] > 0) {
            ans = min(ans, a[i].first - a[l].first);
            d[a[l].second]--;
            l++;
        }
    }
    cout << ans;
}
