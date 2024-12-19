#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int limit = 1e5+1;

int main() {
    freopen("SSET.INP", "r", stdin);
    freopen("SSET.OUT", "w", stdout);
    int n, k;
    ll a[limit];
    int d[limit] = {0};
    cin >> n >> k;

    for (int i = 1; i <= n; i++) cin >> a[i];

    int l = 1, dem = 0;
    ll res = 0;

    for (int r = 1; r < n; r++) {
        d[a[r]]++;
        if (d[a[r]] == 1) dem++;

        while (dem > k) {
            d[a[l]]--;
            if (d[a[l]] == 0) dem--;
            l++;
        }
        res += (r - l + 1);
    }

    cout << res << endl;
}
