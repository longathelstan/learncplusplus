#include <bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;

ll solve(ll n) {
    ll tong = 0;
    while(n != 0) {
        ll digit = n % 10;
        tong += digit;
        n /= 10;
    }
    return tong;
}

int main() {
    ll n;
    cin >> n;
    cout << solve(n);
}
