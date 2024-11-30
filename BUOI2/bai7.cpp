#include <bits/stdc++.h>
using namespace std;
#define ll long long
void sangftsolve(ll l, ll r) {
    int dem = 0;
    bool a[r - l + 1];
    for (int i = 0; i <= r - l + 1; i++) {
        a[i] = true;
    }
    for (ll i = 2; i <= sqrt(r); i++) {
        if (a[i] == true) {
            for (ll j = max(i * i, (l + i - 1) / i * i); j <= r; j += i) {
                a[j - l] = false;
            }
        }
    }
    for (ll i = max(l, 2LL); i <= r; i++) {
        if (a[i - l] == 1) dem++;
    }
    cout << dem;
}

int main() {
    ll l, r;
    cin >> l >> r;
    sangftsolve(l, r);
}
