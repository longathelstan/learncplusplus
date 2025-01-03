#include <bits/stdc++.h>
#define ll long long
const int limit = 1e6+8;
using namespace std;
ll n, k, a[limit], d[limit] = {0};

void sub2() {
    ll dem = 0;
    for (int i = k; i <= 1e3; i += k) {
        for (int j = i; j <= 1e3; j += k) {
            if (__gcd(i, j) == k) {
                if (i == j) {
                    dem += d[i] * (d[i] - 1) / 2;
                } else {
                    dem += d[i] * d[j];
                }
            }
        }
    }
    cout << dem;
}

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        d[a[i]]++;
    }
    sub2();
}
