#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int limit = 1e5+1;
vector<int> prime;

void sang() {
    vector<bool> is_prime(limit, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i < limit; i++) {
        if (is_prime[i]) {
            prime.push_back(i);
            for (int j = i * 2; j < limit; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

bool isPrime(ll n) {
    if (n < 2) return false;
    for (ll p : prime) {
        if (p * p > n) break;
        if (n % p == 0) return false;
    }
    return true;
}

int main() {
    sang();
    int t;
    ll n;
    cin >> t;
    while (t--) {
        cin >> n;
        for (ll p : prime) {
            if (p >= n) break;
            ll q = n - p;
            if (q > 0 && isPrime(q)) {
                cout << p << " " << q << endl;
                break;
            }
        }
    }
}
