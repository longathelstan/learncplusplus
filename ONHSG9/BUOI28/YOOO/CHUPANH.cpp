#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int limit = 1e5+8;
int main() {
    ll n, m, a[limit], b[limit], d[limit] = {0};
    map<ll, ll> nedhaoi;
    cin >> n >> m;
    for (ll i = 1; i <= n; i++) cin >> a[i];
    for (ll i = 1; i <= m; i++) cin >> b[i];
    sort(b + 1, b + m + 1);
    for (ll i = 1; i <= n; i++) {
        if (binary_search(b + 1, b + m + 1, a[i])) d[i] = 1;
    }
    ll start = 0, endd = 0, dodai = 0;
    bool dthwgke = false;
    for (ll i = 1; i <= n; i++) {
        if (d[i] == 1) {
            if (!dthwgke) {
                start = i;
                dthwgke = true;
            }

        } else {
            endd = i - 1;
            ll tempdodai = endd - start + 1;
            if (tempdodai > dodai) {
                dodai = tempdodai;
                nedhaoi[start] = endd;
            }
            start = i;
            endd = i;
            dthwgke = false;
        }

    }
    cout << dodai << endl;
    for (auto x : nedhaoi) {
        ll iulamdo = x.second - x.first + 1;
        if (iulamdo == dodai) {
            cout << x.first << " " << x.second;
            return 0;
        }
    }
}
