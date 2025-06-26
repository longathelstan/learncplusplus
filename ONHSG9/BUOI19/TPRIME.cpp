#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int limit = 1e5 + 1;

vector<ll> sangNT(ll n) {
    vector<bool> isPrime(n + 1, true);
    vector<ll> primes;
    isPrime[0] = isPrime[1] = false;
    for (ll i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (ll j = i * i; j <= n; j += i)
                isPrime[j] = false;
        }
    }
    for (ll i = 2; i <= n; i++) {
        if (isPrime[i]) primes.push_back(i);
    }
    return primes;
}

int main() {
    ll n, dem = 0;
    cin >> n;

    ll sqrt_n = sqrt(n);
    vector<ll> primes = sangNT(sqrt_n);

    for (ll p : primes) {
        if (p * p <= n) dem++;
    }

    cout << dem << endl;
}
