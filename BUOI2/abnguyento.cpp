#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool laSNT(ll n) {
    if (n < 2) return false;
    if (n < 4) return true;
    if (n % 2 == 0 || n % 3 == 0 ) return false;
    for (int i = 5; i <= sqrt(n); i+=6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}
int main() {
    ll a, b = 1;
    cin >> a;
    while (!laSNT(a+b)) {
        b++;
    }
    cout << b;
}
