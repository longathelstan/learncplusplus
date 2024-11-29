#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int limit = 1e5+1;

void brocoli(const ll a[limit], int n, ll m) {
    ll tong = 0;
    int i = 1, j = n, p = i + 1;
    while (i < j) {
        if (a[i] + a[j] + a[p] <= m) {
            for (int p = i + 1; p < j; p++) {
                if (a[i] + a[j] + a[p] <= m) tong = max(tong, a[i] + a[j] + a[p]);
            }
            i++;
        } else j--;

    }
    cout << tong;
}

void thaynam(const ll a[limit], int n, ll m) {
    ll tong = 0, kq = 0;
    for (int i = 1; i <= n; i++) {
        int l = 1, r = n;
        ll s = m - a[i];
        while (l < r) {
            if (a[l] + a[r] <= s && l != i && r != i) {
                tong = max(tong, a[l] + a[r]);
                l++;
            } else r--;
        }
        kq = max(kq, tong + a[i]);
    }
    cout << kq;
}

int main() {
    freopen("CHOIBAI.INP", "r", stdin);
    freopen("CHOIBAI.OUT", "w", stdout);

    int n;
    ll a[limit], m;

    cin >> n >> m;

    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    brocoli(a, n, m);

}
