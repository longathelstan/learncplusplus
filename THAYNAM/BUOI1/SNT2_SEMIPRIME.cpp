#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;

const int limit = 1e7+10;

bool isPrime[limit];
vector<int> primes;
int tong[limit];

void sieve() {
    fill(isPrime, isPrime + limit, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < limit; ++i) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (long long j = 1LL * i * i; j < limit; j += i)
                isPrime[j] = false;
        }
    }
}

void solve() {
    vector<bool> isSemiprime(limit, false);

    for (int i = 0; i < (int)primes.size(); ++i) {
        for (int j = i; j < (int)primes.size(); ++j) {
            long long tmp = primes[i] * primes[j];
            if (tmp >= limit) break;
            isSemiprime[tmp] = true;
        }
    }

    for (int i = 1; i < limit; ++i) {
        tong[i] = tong[i - 1] + (isSemiprime[i] ? i : 0);
    }
}

int main() {
    io;
    sieve();
    solve();

    int n;
    cin >> n;
    cout << tong[n] << '\n';

    return 0;
}
