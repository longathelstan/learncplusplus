#include <bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;

ll trailingZeros(ll x) {
    ll cnt = 0;
    while (x > 0) {
        cnt += x / 5;
        x /= 5;
    }
    return cnt;
}

int main() {
    io;
    int T;
    cin >> T;
    while(T--) {
        ll n;
        cin >> n;
        ll l = 1, r = 5 * n, ans = -1;
        while (l <= r) {
            ll mid = (l + r) / 2;
            ll z = trailingZeros(mid);
            if (z >= n) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        cout << ans << "\n";
    }
}
