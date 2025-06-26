#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
#define el "\n"
using namespace std;

const int loop = 2e6+8;
vector<int> v;
bool primes[loop];

void solve() {
    fill(primes, primes + loop, true);
    primes[0] = primes[1] = false;
    for (int i = 2; i <= sqrt(loop); i++) {
        if (primes[i]) for (int j = i * i; j <= loop; j += i) primes[j] = false;
    }
    for (int i = 2; i <= loop; i++) {
        if (primes[i]) v.push_back(i);
    }
}

int main() {
    io;
    solve();
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << v[n - 1] << el;
    }
}
