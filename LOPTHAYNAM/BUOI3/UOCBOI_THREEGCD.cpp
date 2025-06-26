#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main() {
    io;
    ll x, y;
    cin >> x >> y;
    for (ll d = y; d >= 1; d--) {
        ll a = (x + d - 1) / d * d;
        ll b = y / d * d;
        if ((b - a) / d + 1 >= 3) {cout << d; return 0;}
    }
}
