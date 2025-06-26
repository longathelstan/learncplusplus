#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int limit = 1e6+1;
bool prime[limit];

void sangNT() {
    for (int i = 0; i <= limit; i++) prime[i] = true;
    prime[0] = prime[1] = false;
    for (int i = 2; i <= sqrt(limit); i++) {
        if (prime[i]) {
            for (int j = i * i; j <= limit; j+=i) prime[j] = false;
        }
    }
}

ll solve(ll n, ll m) {
    for (int i = 2; i <= limit; i++) {
        if (prime[i] && n % i == 0 && m % i == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    ll n, m;
    cin >> n >> m;
    cout << solve(n, m);
}
