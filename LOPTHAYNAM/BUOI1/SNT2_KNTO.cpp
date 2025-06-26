#include <bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
ll n;
const int limit = 1e6+8;

vector<int> v;
bool prime[limit];

void sang() {
    fill(prime, prime + limit, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i <= sqrt(limit); i++) if (prime[i]) for (int j = i * i; j <= limit; j+=i) prime[j] = false;
    for (int i = 2; i <= limit; i++) if (prime[i]) v.push_back(i);
}

void solve() {
    int primeCount = 0;
    int totalCount = 1;

    for (int x : v) {
        if (1LL * x * x > n) break;
        int tmp = 0;
        while (n % x == 0) {
            n /= x;
            tmp++;
        }
        if (tmp > 0) { primeCount++; totalCount *= (tmp + 1); }
    }

    if (n > 1) { primeCount++; totalCount *= 2; }
    cout << totalCount - primeCount;
}

int main() {
    io;
    sang();
    cin >> n;
    solve();
}


