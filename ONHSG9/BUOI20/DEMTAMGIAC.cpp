#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int limit = 1e4+1;

int main() {
    freopen("DEMTAMGIAC.INP","r",stdin);
	freopen("DEMTAMGIAC.OUT","w",stdout);
    int n;
    ll a[limit], b[limit], c[limit], dem = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];
    for (int i = 1; i <= n; i++) cin >> c[i];

    sort(a + 1, a + n + 1);
    sort(b + 1, b + n + 1);
    sort(c + 1, c + n + 1);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
             ll x = a[i], y = b[j];
             ll t1 = lower_bound(c + 1, c + n + 1, (x+y)) - c;
             ll t2 = upper_bound(c + 1, c + n + 1, abs(x - y)) - c;
             dem += (t1 - t2);
        }
    }
    cout << dem;
}
