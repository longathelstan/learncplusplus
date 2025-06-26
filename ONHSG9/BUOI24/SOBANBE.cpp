#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll limit = 1e6+1;
ll boi[limit] = {0};

void sangboi() {
    for (ll i = 1; i <= limit; i++) {
        for (ll j = 2 * i; j <= limit; j += i) {
            boi[j] += i;
        }
    }
}
int main() {
    sangboi();
    ll l, r;
    ll dem = 0;
    cin >> l >> r;
    for (ll a = l; a <= r; a++) {
        ll b = boi[a];
        if (b > a && b <= r && boi[b] == a) dem++;
    }
    cout << dem;
}
