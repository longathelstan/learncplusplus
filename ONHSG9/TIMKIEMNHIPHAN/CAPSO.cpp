#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll limit = 1e5+8;
int main() {
    ll n, a[limit], s, dem = 0;
    cin >> n >> s;
    for (ll i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    for (ll i = 1; i <= n; i++) {
        ll dha = s - a[i];
        if (binary_search(a + i + 1, a + n + 1, dha)) dem++;
    }
    cout << dem;
}
