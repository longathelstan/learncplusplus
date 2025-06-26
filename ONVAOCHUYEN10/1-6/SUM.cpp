#include <bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false); cin.tie(0);
#define file freopen("SUM.INP", "r", stdin); freopen("SUM.OUT", "w", stdout);
using namespace std;
const int limit = 1e6+8;
int main() {
    io;
    file;
    ll n, a[limit], d[limit] = {0}, tong = 0;
    cin >> n;
    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
        d[a[i]]++;
    }
    for (ll i = 1; i <= limit; i++) {
        if (d[i] > 0) tong += i;
    }
    cout << tong;
}
