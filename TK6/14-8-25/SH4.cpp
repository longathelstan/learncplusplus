#include <bits/stdc++.h>
#define ll long long
using namespace std;

void uoc(ll n) {
    ll tong = 0;
    for (ll i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            tong += i;
            ll tmp = n / i;
            if (tmp != i) tong += tmp;
        }
    }
    cout << tong;
}

int main() {
    ll n;
    cin >> n;
    uoc(n);
}
