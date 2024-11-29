#include <bits/stdc++.h>
using namespace std;
const int limit = 1e6+1;
#define ll long long
int main() {
    freopen("SAPXEP2.INP", "r", stdin);
    freopen("SAPXEP2.OUT", "w", stdout);
    int n;
    ll a[limit];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a+1, a+n+1, greater<ll>());
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
}
