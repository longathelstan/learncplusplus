#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int limit = 5e5+8;
ll lcm(ll a, ll b) {
    return a * b / __gcd(a, b);
}
int main() {
    freopen("BANCUNG.INP", "r", stdin);
    freopen("BANCUNG.OUT", "w", stdout);
    ll n, k;
    ll a[limit];
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    ll kq = 1;
    for (int i = 1; i <= n; i++) {
        kq = lcm(kq, a[i]);
    }
    for (int i = 1; i <= limit; i++) {
        if (kq * i >= k) {
            cout << kq * i << endl;
            break;
        }
    }
}
