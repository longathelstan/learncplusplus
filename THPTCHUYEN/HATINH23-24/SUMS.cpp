#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    freopen("SUMS.INP", "r", stdin);
    freopen("SUMS.OUT", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n, sum = 0;
    cin >> n;
    for (ll i = 1; i <= n; i++) {
        sum += (2*i + 1);
    }
    cout << sum;
}
