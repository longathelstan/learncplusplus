#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll solve(ll n) {
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
    freopen("DEMUOC1.INP", "r", stdin);
    freopen("DEMUOC1.OUT", "w", stdout);
    ll n;
    cin >> n;
    cout << solve(n);
}
