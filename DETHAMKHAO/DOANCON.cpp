#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int limit = 1e6+8;
int main() {
    ll n, a[limit], f[limit] = {0}, maxx = 0;
    cin >> n;
    for (ll i = 1; i <= n; i++) {
        ll x;
        cin >> x;
        if (x % 2 == 0) f[i] = f[i - 1] + 1;
        else f[i] = 0;
    }
    ll vt = -1;
    for (ll i = 1; i <= n; i++) {
        if (maxx < f[i]) {
            maxx = f[i];
            vt = i - f[i] + 1;
        }
    }
    cout << maxx << "\n" << vt;
}
