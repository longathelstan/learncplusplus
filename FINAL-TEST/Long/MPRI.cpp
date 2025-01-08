#include <bits/stdc++.h>
#define ll long long
#define el "\n"
using namespace std;
const ll limit = 1e6+3;
bool prime[limit];

ll q, n, a[limit], N[limit];

void sang() {
    fill(prime, prime + limit, true);
    prime[0] = prime[1] = false;
    for (ll i = 2; i <= sqrt(limit); i++) {
        if (prime[i]) {
            for (ll j = i * i; j <= limit; j += i) prime[j] = false;
        }
    }
}
bool laSNT(ll n) {
    if (n <= limit) return prime[n];
    if (n < 2) return false;
    if (n < 4) return true;
    if (n % 2 == 0 || n % 3 == 0) return true;
    for (ll i = 5; i <= sqrt(n); i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}
void sub1() {
    while(q--) {
        cin >> n;
        for (ll i = n; i <= 1e9; i++) {
            if (laSNT(i)) {
                cout << i << el;
                break;
            }
        }
    }
}
void sub2() {
    N[limit] = limit;
    for (ll i = limit - 1; i >= 0; i--) {
        if (laSNT(i)) {
            N[i] = i;
        } else N[i] = N[i + 1];
    }
    while(q--) {
        cin >> n;
        cout << N[n] << el;
    }
}
int main() {
    freopen("MPRI.INP", "r", stdin);
    freopen("MPRI.OUT", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    sang();
    cin >> q;
    if(q <= 1e2) sub1();
    else sub2();
}
