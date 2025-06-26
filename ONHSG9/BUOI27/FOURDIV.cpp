#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int limit = 2e6+8;
bool prime[limit];
vector<ll> v;
ll N[limit];
ll t, d;
//
//bool awl(ll n, ll d) {
//    vector<ll> v;
//    for (ll i = 1; i <= sqrt(n); i++) {
//        if (n % i == 0) {
//            v.push_back(i);
//            if (i != n / i) {
//                v.push_back(n / i);
//            }
//        }
//    }
//    if (v.size() < 4) return false;
//    sort(v.begin(), v.end());
//    for (ll i = 1; i < v.size(); i++) {
//        if (v[i] - v[i - 1] < d) return false;
//    }
//    return true;
//}
//
//void sub1() {
//    while(t--) {
//        cin >> d;
//        for (ll i = 1; i <= limit; i++) {
//            if (awl(i, d)) {
//                cout << i << "\n";
//                break;
//            }
//        }
//    }
//}

void sang() {
    fill(prime, prime + limit, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i <= sqrt(limit); i++) {
        if (prime[i]) for (int j = i * i; j <= limit; j += i) prime[j] = false;
    }
    for (int i = 2e6+3; i >= 1; i--) {
        if (prime[i]) {
            N[i] = i;
        } else N[i] = N[i + 1];
    }
}


int main() {
//    freopen("FOURDIV.INP", "r", stdin);
//    freopen("FOURDIV.OUT", "w", stdout);
    sang();
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) {
        cin >> d;
        ll t1 = N[1 + d];
        ll t2 = N[t1 + d];
        cout << t1 * t2 << "\n";
    }
}

