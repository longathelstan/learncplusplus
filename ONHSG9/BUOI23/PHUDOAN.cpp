#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int limit = 1e5 + 1;

int main() {
    freopen("PHUDOAN.INP", "r", stdin);
    freopen("PHUDOAN.OUT", "w", stdout);
    int n;
    cin >> n;
    pair<ll, ll> a[limit];

    for (int i = 1; i <= n; i++) {
        ll s, d;
        cin >> s >> d;
        a[i] = {s, d};
    }

    sort(a + 1, a + n + 1);
    ll kq = 0;
    ll curdau = a[1].first, curcuoi = a[1].second;

    for (int i = 2; i <= n; i++) {
        if (a[i].first <= curcuoi) {
            curcuoi = max(curcuoi, a[i].second);
        } else {
            kq += curcuoi - curdau;
            curdau = a[i].first;
            curcuoi = a[i].second;
        }
    }
    kq += curcuoi - curdau;
    cout << kq << endl;
}
