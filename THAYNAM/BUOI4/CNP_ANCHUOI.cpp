#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int MAX = 1e5 + 5;
ll a[MAX];
int n;
ll k;

bool check(ll s) {
    ll dem = 0;
    for (int i = 0; i < n; i++) {
        dem += (a[i] + s - 1) / s;
        if (dem > k) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> k;
    ll tmp = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        tmp = max(tmp, a[i]);
    }

    ll l = 1, r = 1e18, res = 0;
    while (l <= r) {
        ll mid = (l + r) / 2;
        if (check(mid)) {
            res = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    cout << res;
}

