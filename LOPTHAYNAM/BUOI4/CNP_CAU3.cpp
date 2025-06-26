#include <bits/stdc++.h>
#define ll long long
#define io ios::sync_with_stdio(false); cin.tie(0);
using namespace std;

ll solve(ll a, ll b, ll n) {
    ll lcm = a / __gcd(a, b) * b;
    ll res = n / a + n / b - n / lcm;
    return res;
}

int main() {
    io;
    ll t, a, b, N;
    cin >> t;
    while (t--) {
        cin >> a >> b >> N;
        ll l = 1, r = 1e18, res = 0;

        while (l <= r) {
            ll mid = (l + r) / 2;
            if (solve(a, b, mid) >= N) {
                res = mid;
                r = mid - 1;
            } else l = mid + 1;
        }
        cout << res << "\n";
    }
}
