#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll a, b;
    cin >> a >> b;
    ll t = a / __gcd(a, b) * b / __gcd(a, b);
    cout << t;
}
