#include <bits/stdc++.h>
#define ll long long
using namespace std;

int solve(ll n) {
    int dem = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            dem++;
            if (n / i != i) dem++;
        }
    }
    return dem;
}

int main() {
    freopen("CHIAQUA.INP", "r", stdin);
    freopen("CHIAQUA.OUT", "w", stdout);
    ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    ll x, y;
    cin >> x >> y;
    cout << solve(__gcd(x, y));
}
