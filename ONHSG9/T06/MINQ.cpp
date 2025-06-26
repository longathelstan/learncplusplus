#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int limit = 1e5+1;

int n, q;
ll a[limit], x;

ll binary_search1(const ll a[limit], int n, ll x) {
    ll res = -1e9-1;
    int l = 1, r = n;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (a[mid] <= x) {
            res = max(res, a[mid]);
            l = mid + 1;
        } else {
            if (a[mid] > x) r = mid - 1;
        }
    }
    return res;
}

void sub1() {
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= q; i++) {
        ll minn = 1e9+1;
        cin >> x;
        for (int i = 1; i <= n; i++) {
            minn = min(minn, abs(x - a[i]));
        }
        cout << minn << endl;
    }
}

void sub2() {
    ll minn = 1e9+1;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);

    for (int i = 1; i <= q; i++) {
        cin >> x;
        auto it = lower_bound(a + 1, a + n + 1, x);
        ll awl = binary_search1(a, n, x);
        minn = min(abs(awl - x), abs(*it - x));
        cout << minn << endl;
    }
}

int main() {
    freopen("MINQ.INP", "r", stdin);
    freopen("MINQ.OUT", "w", stdout);

    cin >> n >> q;
    if (n <= 1e3 && q <= 1e3) sub1();
    else sub2();
}
