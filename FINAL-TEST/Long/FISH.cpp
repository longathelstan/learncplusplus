#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll limit = 1e6+8;
ll n, a[limit], minn = 1e9+1;
void sub1() {
    ll tong = 0;
    for (ll i = 1; i <= n; i++) {
        tong += (a[1] * 3);
    }
    cout << tong;
}
void sub2() {
    ll tong = 0;
    for (ll i = 1; i <= n; i++) {
        tong += (a[i] * 3);
    }
    cout << tong;
}
void sub3() {
    ll tong = 0;
    for (ll i = 1; i <= n; i++) {
        if (a[i] != minn) {
            tong += (a[i] * 3);
        } else {
            tong += (a[i] * 3 * (n - i + 1));
            break;
        }
    }
    cout << tong;
}
int main() {
    freopen("FISH.INP", "r", stdin);
    freopen("FISH.OUT", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
        minn = min(minn, a[i]);
    }
    if (minn == a[1]) sub1();
    else if (minn == a[n]) sub2();
    else sub3();
}
