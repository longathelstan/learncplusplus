#include <bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

bool isPrime(ll n) {
    if (n < 2) return false;
    if (n < 4) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (ll i = 5; i <= sqrt(n); i+=6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    io;
    ll n;
    cin >> n;
    int i = n / 2;
    while(true) {
        if (isPrime(i) && isPrime(n - i)) {
            cout << i << " " << n - i;
            break;
        }
        i--;
    }
}
