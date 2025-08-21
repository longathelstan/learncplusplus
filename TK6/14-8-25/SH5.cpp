#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool isPrime(ll n) {
    if (n < 2) return false;
    if (n < 4) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (ll i = 5; i <= sqrt(n); i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}
int main() {
    ll n;
    cin >> n;
    while(!isPrime(n)) {
        ++n;
    }
    cout << n;
}
