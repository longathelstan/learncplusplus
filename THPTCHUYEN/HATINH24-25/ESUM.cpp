#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int limit = 1e6+1;
int main() {
    freopen("ESUM.INP", "r", stdin);
    freopen("ESUM.OUT", "w", stdout);
    ll n, a[limit], le = 0, chan = 0;
    ll tong = 0, socachchon = 0;
    cin >> n;
    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0) chan++;
        else le++;
        tong += a[i];
    }
    if (tong % 2 == 0) {
        socachchon = (le * (le - 1) / 2) + (chan * (chan - 1) / 2);
    } else socachchon = le * chan;
    cout << socachchon;
}
