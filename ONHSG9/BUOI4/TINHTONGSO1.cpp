#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    freopen("TINHTONGSO1.INP", "r", stdin);
    freopen("TINHTONGSO1.OUT", "w", stdout);
    ll a, b, m;
    cin >> a >> b >> m;
    cout << m / (a * b / __gcd(a, b));
}
