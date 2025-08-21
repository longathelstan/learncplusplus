#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

const int limit = 1e6 + 8;
bool primes[limit];
int nprime[limit], pprime[limit];
ll t, n;

void sang() {
    fill(primes, primes + limit, true);
    primes[0] = primes[1] = false;
    for (int i = 2; i * i < limit; i++) {
        if (primes[i]) {
            for (int j = i * i; j < limit; j += i) primes[j] = false;
        }
    }

    nprime[limit - 1] = limit;
    for (int i = limit - 2; i >= 0; --i) {
        if (primes[i]) nprime[i] = i;
        else nprime[i] = nprime[i + 1];
    }

    pprime[0] = -1;
    for (int i = 1; i < limit; ++i) {
        if (primes[i]) pprime[i] = i;
        else pprime[i] = pprime[i - 1];
    }
}

bool isPrime(ll n) {
    if (n <= 1e6) return primes[n];
    if (n < 2) return false;
    if (n < 4) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (ll i = 5; i <= sqrt(n); i += 6) {
        if (n % i == 0 || n % (i + 2 ) == 0) return false;
    }
    return true;
}

void sub1() {
    while(t--) {
        cin >> n;
        ll tmp1 = n, tmp2 = n;
        if (n == 1) {
            cout << 2 << "\n";
            continue;
        }
        while(tmp1 >= 2 && !isPrime(tmp1)) {
            tmp1--;
        }
        while(!isPrime(tmp2)) {
            tmp2++;
        }
        if (abs(tmp1 - n) <= abs(tmp2 - n)) cout << tmp1 << '\n';
        else cout << tmp2 << '\n';
    }
}

void sub2() {
    while (t--) {
        cin >> n;
        if (n == 1) {
            cout << 2 << '\n';
            continue;
        }
        int tmp1 = nprime[n];
        int tmp2 = pprime[n];
        if (abs(tmp1 - n) < abs(tmp2 - n)) cout << tmp1 << '\n';
        else if (abs(tmp1 - n) > abs(tmp2 - n)) cout << tmp2 << '\n';
        else cout << min(tmp1, tmp2) << '\n';
    }
}

int main() {
    io;
    sang();
    freopen("NPRI.INP", "r", stdin);
    freopen("NPRI.OUT", "w", stdout);
//    for (ll x : v) {
//        cout << x << " ";
//    }
    cin >> t;
    if (t <= 1e2) sub1();
    else sub2();
}
