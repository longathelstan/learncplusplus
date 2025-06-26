#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    freopen("TINHTONGSO2.INP", "r", stdin);
    freopen("TINHTONGSO2.OUT", "w", stdout);
    ll a, b, m;
    cin >> a >> b >> m;
    ll bc = a * b / __gcd(a, b);
    cout << m / a + m / b - m / bc;
}
