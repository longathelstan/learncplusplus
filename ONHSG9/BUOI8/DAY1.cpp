#include <bits/stdc++.h>
using namespace std;
const int limit = 1e6+1;
#define ll long long

int main() {
    freopen("DAY1.INP", "r", stdin);
    freopen("DAY1.OUT", "w", stdout);
    int n, dem = 0;
    ll a[limit];
    ll k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] > k) dem++;
    }
    cout << dem;
}
