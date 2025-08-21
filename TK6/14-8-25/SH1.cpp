#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll a, b;
    cin >> a >> b;
    cout << __gcd(a, b) << endl;
    cout << a / __gcd(a, b) * b;
}
