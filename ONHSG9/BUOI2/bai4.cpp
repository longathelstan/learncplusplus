#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool laSNT(ll n) {
    if (n < 2) return false;
    if (n < 4) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i <= sqrt(n); i+=6) {
        if (n % i == 0 || n % (i+2) == 0) return false;
    }
    return true;
}

ll solve(ll n) {
    if (laSNT(n)) return n;
    ll kq = -1;
    while (n % 2 == 0) {
        kq = 2;
        n /= 2;
    }
    for (ll i = 3; i <= sqrt(n); i += 2) {
        while(n % i == 0) {
            kq = i;
            n /= i;
        }
    }
    if (n > 2) kq = n;
    return kq;
}

int main() {
    ll n;
    cin >> n;
    cout << solve(n);
}
