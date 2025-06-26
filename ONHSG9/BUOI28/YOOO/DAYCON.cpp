#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int limit = 1e5+1;
int main() {
    ll n, k, a[limit], kq = 0;
    unordered_map<ll, ll> m;
    cin >> n >> k;
    for (ll i = 1; i <= n; i++) cin >> a[i];
    ll tong = 0;
    m[0] = 0;
    ll start = 0, endd = 0;
    for (ll i = 1; i <= n; i++) {
        tong += a[i];
        ll temp = tong % k;

        if(m.find(temp) != m.end()) {
            ll dodai = i - m[temp];
            if (dodai > kq) {
                kq = dodai;
                start = m[temp] + 1;
                endd = i;
            }

        } else m[temp] = i;
    }
    cout << kq << endl;
    ll hanhoi = 0;
    for (ll i = start; i <= endd; i++) {
        cout << a[i] << " ";
        hanhoi += a[i];
    }
    cout << endl << hanhoi;
}
