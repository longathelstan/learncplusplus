#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int limit = 1e5+1;

int main() {
    freopen("PART.INP", "r", stdin);
    freopen("PART.OUT", "w", stdout);

    ll n, m, k, a[limit], b[limit], dem = 0;
    cin >> n >> m >> k;
    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (ll i = 1; i <= m; i++) {
        cin >> b[i];
    }
    sort(a + 1, a + n + 1);
    sort(b + 1, b + m + 1);

    int i = 1, j = 1;
    while (i <= n && j <= m) {
        if (a[i] - b[j] <= k && b[j] - a[i] <= k) {
            dem++;
            i++;
            j++;
        }
        else if (a[i] - b[j] > k) {
            j++;
        } else if (b[j] - a[i] > k) {
            i++;
        }
    }
    cout << dem;
}
