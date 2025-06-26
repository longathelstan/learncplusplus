#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;
const int limit = 1e5+8;

ll n, M, a[limit];

bool check(ll k) {
    ll total = 0;
    for (ll i = 1; i <= n; i++) {
        total += k / a[i];
        if (total >= M) return true;
    }
    return false;
}

void sub1() {
    for (int i = 1; i <= 1e6; i++) {
        if (check(i)) {
            cout << i;
            return;
        }
    }
}

void sub2() {
    ll d = 1, c = 1e18, ans = 0;
    while(d <= c) {
        ll mid = (c + d) / 2;
        if (check(mid)) {
            ans = mid;
            c = mid - 1;
        } else d = mid + 1;
    }
    cout << ans;
}

int main() {
    io
    cin >> n >> M;
    for (int i = 1; i <= n; i++) cin >> a[i];
    if (n <= 1000) sub1();
    else sub2();
}
