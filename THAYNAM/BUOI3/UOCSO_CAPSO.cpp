#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(ll n) {
    ll mi;
    ll kq;
    for (ll a = n / 2; a <= n; a++) {
        ll b = n - a;
        if(__gcd(a, b) == 1) {
            cout << a * b;
            break;
        }

    }

}

int main() {
    ll n;
    cin >> n;
    solve(n);
}
