#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
#define ll int
using namespace std;

const ll limit = 1000001;
ll prime[limit];

void sang() {
    for (ll i = 0; i < limit; i++) {
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    ll sqrtLimit = sqrt(limit);
    for(ll i = 2; i <= sqrtLimit; i++) {
        if (prime[i] == 1) {
            for (ll j = i * i; j < limit; j += i) {
                prime[j] = 0;
            }
        }
    }
}

bool laSNT(ll n) {
    if (n < limit) return prime[n];
    if (n < 2) return false;
    if (n < 4) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    ll sqrtN = sqrt(n);
    for (ll i = 5; i <= sqrtN; i+=6) {
        if (n % i == 0 || n % (i+2) == 0) return false;
    }
    return true;
}

int main() {
    io;
    sang();
    ll a, b, dem = 0;
    cin >> a >> b;
    for (ll i = a; i <= b; i++) {
        if (laSNT(i)) dem++;
    }
    cout << dem;
}
