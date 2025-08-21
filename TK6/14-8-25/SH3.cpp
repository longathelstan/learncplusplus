#include <bits/stdc++.h>
#define ll long long
using namespace std;

void uoc(ll n) {
    int dem = 0;
    for (ll i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            dem++;
            int tmp = n / i;
            if (tmp != i) dem++;
        }
    }
    cout << dem;
}

int main() {
    ll n;
    cin >> n;
    uoc(n);
}
