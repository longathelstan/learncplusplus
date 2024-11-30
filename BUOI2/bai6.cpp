#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int limit = 1e6+1;
int wtf[limit];

void soluonguoc(ll n) {
    for (ll i = 1; i <= n; i++) {
        for (ll j = i; j <= n; j+=i) wtf[j]++;
    }
}

int timpnt(ll n) {
    ll kq = 1;
    int tempdem = 1;
    for (ll i = n; i >= 2; i--) {
        if (tempdem < wtf[i]) {
            tempdem = wtf[i];
            kq = i;
        }
    }
    return kq;
}

int main() {
    ll k;
    cin >> k;
    soluonguoc(k);
    cout << timpnt(k);
}
