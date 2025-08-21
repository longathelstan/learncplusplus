#include <bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;

const int limit = 1e7+8;
bool primes[limit];
int f[limit];

void sang() {
    fill(primes, primes + limit, true);
    primes[0] = primes[1] = false;
    for (int i = 2; i * i <= limit ; i++) {
        if (primes[i]) {
            for (int j = i * i; j <= limit; j += i) primes[j] = false;
        }
    }
    for (int i = 2; i <= limit; i++) {
        if (primes[i]) f[i] = f[i - 1] + 1;
        else f[i] = f[i - 1];
    }
}

int main() {
    io;
    sang();
    ll a, b;
    cin >> a >> b;
    cout << f[b] - f[a - 1];
}
