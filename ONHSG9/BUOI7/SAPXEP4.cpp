#include <bits/stdc++.h>
using namespace std;
const int limit = 1e5+1;
#define ll long long
int main() {
    freopen("SAPXEP4.INP", "r", stdin);
    freopen("SAPXEP4.OUT", "w", stdout);
    int n, k;
    ll a[limit];
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a+1, a+n+1);
    cout << a[n] + a[n - 1] + a[n - 2] + a[n - 3] + a[n - 4];
}
