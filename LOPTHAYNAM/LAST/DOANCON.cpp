#include <bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
const int limit = 1e5+8;
int main() {
    ll n, a[limit], d[limit] = {0};
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int dem = 0, res = 0, first = limit;
    for (int i = 1; i <= n; i++) {
        if (a[i] % 2 == 0) {
            dem++;
        } else dem = 0;

        if (res < dem) {
            res = dem;
            d[res] = i;
        }
    }

    cout << res << "\n" << d[res] - res + 1;
}
