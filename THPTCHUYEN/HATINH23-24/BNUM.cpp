#include <bits/stdc++.h>
#define ll long long
#define el "\n"
using namespace std;

bool laSNT(ll n) {
    if (n < 2) return false;
    if (n < 4) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (ll i = 5; i <= sqrt(n); i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int tachso(ll n) {
    ll sum = 0;
    while (n != 0) {
        int digit = n % 10;
        sum += pow(digit, 2);
        n /= 10;
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("BNUM.INP", "r", stdin);
    freopen("BNUM.OUT", "w", stdout);
    ll n;
    cin >> n;
    if (laSNT(tachso(n))) cout << 1 << el;
    else cout << -1 << el;
    cout << tachso(n);
}
