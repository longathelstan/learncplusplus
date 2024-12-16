#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll limit = 1e5+1;
ll a[limit], sum[limit] = {0};
ll check(ll u, ll v) {
    ll ans = 1e10;
    ll l = u, r = v;
    while(l <= r) {
        ll mid = (l + r) / 2;
        ll s1 = sum[mid] - sum[u - 1];
        ll s2 = sum[v] - sum[mid];
        ans = min(ans, abs(s2 - s1));
        if (s2 >= s1) {
            ans = min(ans, abs(s2 - s1));
            l = mid + 1;
        } else {
            ans = min(ans, abs(s2 - s1));
            r = mid - 1;
        }
    }
    return ans;
}
int main() {
	freopen("CHENHLECH.INP","r",stdin);
	freopen("CHENHLECH.OUT","w",stdout);
    ll n, q, u, v;
    cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum[i] = sum[i - 1] + a[i];
    }
    while(q--) {
        cin >> u >> v;
        cout << check(u, v) << endl;
    }
}
