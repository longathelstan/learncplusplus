#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int limit = 1e5+1;

int main() {
    freopen("Camdien.inp", "r", stdin);
    freopen("Camdien.out", "w", stdout);

    int n, m;
    ll a[limit];

    cin >> n >> m;

    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1, greater<ll>());
    ll kq = a[1];
    ll dem = 1;
    for (int i = 2; i <= n; i++) {
        if (kq >= m) break;
        else {
            kq += a[i] - 1;
            dem++;
        }
    }

    if (kq < m) cout << "-1";
    else cout << dem;
}
