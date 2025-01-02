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
    ll x, y;
    cin >> x >> y;
    cout << solve(__gcd(x, y));
}
