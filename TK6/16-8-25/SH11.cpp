#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll trailingZeros(ll x) {
    ll cnt = 0;
    while (x > 0) {
        cnt += x / 5;
        x /= 5;
    }
    return cnt;
}

int main() {
    ll n;
    cin >> n;
    cout << trailingZeros(n);
}

