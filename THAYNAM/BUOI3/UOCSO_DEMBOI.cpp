#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll lcm(ll a, ll b) {
    return a / __gcd(a, b) * b;
}

int main() {
    ll n, a, b, x, y;
    cin >> n >> a >> b >> x >> y;

    ll A = n / a;
    ll B = n / b;
    ll AB = n / lcm(a, b);

    ll nigga = (A - AB) * x + (B - AB) * y + AB * max(x, y);
    cout << nigga << endl;
}
