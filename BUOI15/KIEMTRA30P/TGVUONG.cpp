#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    double a = 0, b = 0, c = 0, m, n;
    cin >> m >> n;

    for (ll i = m; i < n; i++) {
        for (ll j = i + 1; j < n; j++) {
            for (ll k = j + 1; k <= n; k++) {
                if (i + j + k > m && i + j + k <= n) {
                    if (i * i + j * j == k * k || i * i + k * k == j * j || k * k + j * j == i * i) {
                        a = i; b = j; c = k;
                    }
                }
            }
        }
    }

    if (a > 0 && b > 0 && c > 0) {
        double p = (a + b + c) / 2;
        double area = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << fixed << setprecision(1) << area;
    } else {
        cout << 0.0;
    }

    return 0;
}
