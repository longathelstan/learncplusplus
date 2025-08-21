#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
#define ll unsigned long long
using namespace std;
ll n;
void sub1() {
    ll tong = 0, ans = 0;
    for (ll i = 2; i <= n; i += 2) {
        tong += i;
        if (tong <= n) {
            ans = i;
        } else break;
    }
    cout << ans << '\n';
}

void sub2() {
    ll l = 2, r = n, ans = 0;
    while (l <= r) {
        ll mid = (l + r) / 2;
        if (mid % 2 != 0) mid--;
        ll tmp = mid * (mid + 2) / 4;
        if (tmp <= n) {
            ans = mid;
            l = mid + 2;
        } else r = mid - 2;
    }
    cout << ans << '\n';
}

int main() {
    io;

//    freopen("EVEN.INP", "r", stdin);
//    freopen("EVEN.OUT", "w", stdout);
    cin >> n;
    if (n <= 1e6) sub1();
    else sub2();
}

