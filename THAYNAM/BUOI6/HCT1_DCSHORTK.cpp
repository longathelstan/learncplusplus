#include <bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
const int limit = 1e6+8;
int main() {
    io;
    ll n, k, dodai = limit, tong = 0;
    ll a[limit];
    cin >> n >> k;
    for (ll i = 1; i <= n; i++) cin >> a[i];
    ll j = 1;
    for (ll i = 1; i <= n; i++) {
        tong += a[i];
        while(tong >= k) {
            if (tong == k) dodai = min(dodai, i - j + 1);
            tong -= a[j];
            j++;
        }
    }
    if (dodai == limit) cout << -1;
    else cout << dodai;
}


