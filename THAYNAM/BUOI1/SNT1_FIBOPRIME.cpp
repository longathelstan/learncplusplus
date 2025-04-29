#include <bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

ll a, b, dem = 0;

bool isPrime(ll n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (ll i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

void xayDung() {
    ll x = 1, y = 1;

    if (x >= a && x <= b && isPrime(x)) dem++;
    if (y >= a && y <= b && isPrime(y)) dem++;

    while (true) {
        ll tmp = x + y;
        if (tmp > b) break;
        if (tmp >= a && isPrime(tmp)) dem++;
        x = y;
        y = tmp;
    }
    cout << dem;
}

int main() {
    io;
    cin >> a >> b;
    xayDung();
}
