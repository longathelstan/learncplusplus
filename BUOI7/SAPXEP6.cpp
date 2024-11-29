#include <bits/stdc++.h>
// v.begin() , v.end();
using namespace std;
const int limit = 1e5+1;
#define ll long long
int main() {
    freopen("SAPXEP6.INP", "r", stdin);
    freopen("SAPXEP6.OUT", "w", stdout);
    int n, k, s;
    ll a[limit];

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    cout << max(a[1] * a[2] * a[n], a[n] * a[n - 1] * a[n - 2]);


}
