#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    freopen("TRIANG.INP", "r", stdin);
    freopen("TRIANG.OUT", "w", stdout);

    ll a, b, c;
    cin >> a >> b >> c;

    if (a + b > c && b + c > a && a + c > b) {
        if (a == b && b == c && a == c) {
            cout << 1;
        } else if (a == c || a == b || c == b) {
            cout << 2;
        } else cout << 3;
    } else cout << -1;
}
