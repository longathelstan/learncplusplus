#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int limit = 1e5+1;

int main() {
    freopen("SORT2.INP", "r", stdin);
    freopen("SORT2.OUT", "w", stdout);
    ll x;
    int n = 0;
    pair<ll, int> a[limit];
    while (cin >> x) {
        n++;
        a[n].second = n;
        a[n].first = x;
    }
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++) {
        cout << a[i].second << " ";
    }
}
