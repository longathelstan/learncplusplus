#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int limit = 1e6+8;
bool prime[limit];
vector<ll> v;
void sang() {
    fill(prime, prime + limit, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i <= sqrt(limit); i++) {
        if (prime[i]) for (int j = i * i; j <= limit; j += i) prime[j] = false;
    }
    for (int i = 2; i <= limit; i++) {
        if (prime[i]) v.push_back(i);
    }
}

ll dha(ll n) {
    ll kq = 1;
    for (auto p : v) {
        if (p * p > n) break;
        ll dem = 0;
        while (n % p == 0) {
            n /= p;
            dem++;
        }
        kq *= (dem + 1);
    }
    if (n > 1) kq *= 2;
    return kq;
}

int main() {
    freopen("UOC.INP", "r", stdin);
    freopen("UOC.OUT", "w", stdout);
    ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    sang();
    ll n;
    cin >> n;
    cout << dha(n);
}
