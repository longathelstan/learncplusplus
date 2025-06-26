#include <bits/stdc++.h>
#define ll long long
#define io ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

const int limit = 2e5 + 8;
ll a[limit];
int n, k;

bool check(ll t) {
    int dem = 1;
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > t) return false;
        if (sum + a[i] > t) {
            dem++;
            sum = a[i];
        } else {
            sum += a[i];
        }
    }
    return dem <= k;
}

int main() {
    io;
    cin >> n >> k;
    ll tong = 0, tmp = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        tong += a[i];
        tmp = max(tmp, a[i]);
    }
    ll l = tmp, r = tong, ans = tong;
    while (l <= r) {
        ll mid = (l + r) / 2;
        if (check(mid)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << ans;
}
