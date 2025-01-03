#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll dha(ll n) {
    ll dem = 0;
    for (ll i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            dem++;
            if (n / i != i) dem++;
        }
    }
    return dem;
}

int main() {
    freopen("UOC.INP", "r", stdin);
    freopen("UOC.OUT", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    cout << dha(n);
}
