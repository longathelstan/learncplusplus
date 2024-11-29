#include <bits/stdc++.h>
using namespace std;
const int limit = 1e6+1;
#define ll long long

int main() {
    freopen("DAY6.INP", "r", stdin);
    freopen("DAY6.OUT", "w", stdout);
    int n, index;
    ll a[limit], maxx = 1e9 + 1;

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0 ) {
            if (maxx > a[i]) {
                maxx = a[i];

            }

        }

    }
    if (maxx == 1e9 + 1) cout << "-1";
    else cout << maxx;
}
