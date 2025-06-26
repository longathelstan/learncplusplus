#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
    ll n, x;
    cin >> n >> x;
    if (n < 3) cout << n * x;
    else if (n >= 3 && n < 7) cout << n * x - 10 * (n * x) / 100;
    else if (n >= 7) cout << n * x - 20 * (n * x) / 100;
}
