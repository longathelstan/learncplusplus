#include <bits/stdc++.h>
#define ll long long
using namespace std;
int solve(ll n) {
    int dem = 0;
    for (ll i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            dem++;
            if (i != n / i) dem++;
        }
    }
    return dem;
}
bool laSNT(ll n) {
    if (n < 2) return false;
    if (n < 4) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i <= sqrt(n); i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}
int main() {
    ll n;
    cin >> n;
    if (laSNT(n)) cout << 2;
    else if (laSNT(sqrt(n))) cout << 3;
    else if (laSNT(pow(n, 1.0 / 4.0))) cout << 5;
    else cout << solve(n);
}
