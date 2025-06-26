#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int limit = 1e5+1;
bool cmp(pair<ll, ll> a, pair<ll, ll> b) {
    if (a.first == b.first) {
        return a.second >= b.second;
    }
    return a.first < b.first;
}
int main() {
    freopen("SORTB.INP", "r", stdin);
    freopen("SORTB.OUT", "w", stdout);
    int n;
    ll a[limit], b[limit];
    pair<ll, ll> c[limit];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        c[i].first = a[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
        c[i].second = b[i];
    }
    sort(c + 1, c + n + 1, cmp);
    for (int i = 1; i <= n; i++) {
        cout << c[i].first << " " << c[i].second << endl;
    }
}
