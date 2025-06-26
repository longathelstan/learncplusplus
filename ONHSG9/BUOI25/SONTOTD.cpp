#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int limit = 1e6+1;
bool prime[limit];
void sang() {
    fill(prime, prime + limit, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i <= sqrt(limit); i++) {
        if (prime[i]) {
            for (int j = i * i; j <= limit; j += i) prime[j] = false;
        }
    }
}

bool laSNT(ll n) {
    if (n <= limit) return prime[n];
    if (n < 2) return false;
    if (n < 4) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i <= sqrt(n); i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

void solve(ll n, set<ll>& a) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (laSNT(i)) a.insert(i);
            if (laSNT(n / i)) a.insert(n / i);
        }
    }
}

int main() {
    sang();
    ll n, m, tich = 1;
    set<ll> a;
    set<ll> b;
    cin >> n >> m;
    solve(n, a);
    solve(m, b);
    if (a.size() != b.size()) cout << 0;
    else {
        for (auto x : a) {
            if (binary_search(b.begin(), b.end(), x) != 1) {
                cout << 0;
                return 0;
            }
            tich *= x;
        }
        cout << tich;
    }
}
