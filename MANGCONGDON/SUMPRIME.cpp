#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int limit = 1e6+1;
bool prime[limit];
ll f[limit] = {0};

void sang() {
    memset(prime, true, limit);
    prime[0] = prime[1] = false;
    for (int i = 2; i <= sqrt(limit); i++) {
        if (prime[i] == true) {
            for (int j = i * i; j <= limit; j += i) prime[j] = false;
        }
    }
}

int main() {
    freopen("SUMPRIME.INP", "r", stdin);
    freopen("SUMPRIME.OUT", "w", stdout);
    sang();
    for (int i = 2; i <= limit; i++) {
        if (prime[i]) {
            f[i] = f[i - 1] + i;
        } else f[i] = f[i - 1];
    }
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        cout << f[n] << endl;
    }
}
