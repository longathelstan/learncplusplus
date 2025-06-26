#include <bits/stdc++.h>
using namespace std;

int soUoc(int n) {
    int dem = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            dem++;
            if (i != n / i) dem++;
        }
    }
    return dem;
}

int main() {
    int x, y;
    cin >> x >> y;
    int t = __gcd(x, y);
    cout << soUoc(t);
}
