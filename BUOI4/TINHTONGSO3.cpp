#include <bits/stdc++.h>
using namespace std;
#define ll long long

void sub1(ll m) {
    ll tong = 0;
    for (int i = 1; i <= m; i++) {
        if (i % 3 == 0 && i % 5 != 0) tong += i;
    }
    cout << tong;
}

void sub2(ll m) {
    ll tong = 0;
    ll t1 = m / 3;
    ll t2 = m / 15;
    ll s1 = 3*(1 + t1) * t1 / 2;
    ll s2 = 15*(1 + t2) * t2 / 2;
    tong = s1 - s2;
    cout << tong;
}

int main() {
    freopen("TINHTONGSO3.INP", "r", stdin);
    freopen("TINHTONGSO3.OUT", "w", stdout);
    ll m;
    cin >> m;
    if (m <= 1e6) sub2(m);
    else sub2(m);
}
