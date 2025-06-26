#include <bits/stdc++.h>
using namespace std;
const int limit = 1e5+1;
#define ll long long
int main() {
    freopen("SAPXEP1.INP", "r", stdin);
    freopen("SAPXEP1.OUT", "w", stdout);
    int n;
    ll a[limit];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a+1, a+n+1);
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
}
