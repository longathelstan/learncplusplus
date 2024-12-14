#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int limit = 1e6+1;
bool prime[limit];

void sangnt() {
    fill(prime, prime + limit, true);
    prime[0] = prime[1] = false;
    for (ll i = 2; i <= sqrt(limit); i++) {
        if (prime[i]) {
            for (ll j = i * i; j <= limit; j += i) {
                prime[j] = false;
            }
        }
    }
}

bool laSNT(ll n) {
    if (n <= limit) return prime[n];
    if (n < 2) return false;
    if (n < 4) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (ll i = 5; i <= sqrt(n); i+=6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

ll souoc(ll n) {
    ll dem = 0;
    for (ll i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (!laSNT(i)) dem++;
            if (n / i != i && !laSNT(n / i)) dem++;
        }
    }
    return dem;
}

int main() {
    freopen("KNTO.INP", "r", stdin);
    freopen("KNTO.OUT", "w", stdout);

    sangnt();
    ll n;
    cin >> n;
    cout << souoc(n);
}
