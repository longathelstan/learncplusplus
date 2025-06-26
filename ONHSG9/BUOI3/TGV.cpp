#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("TGV.INP", "r", stdin);
    freopen("TGV.OUT", "w", stdout);
    double t;
    double a, b, c;
    cin >> t;
    for (double i = 1; i <= t; i++) {
        cin >> a >> b >> c;
        if (a + b + c > 180) {
            cout << "NO" << endl;
            break;
        }
        if (a == 90 || b == 90 || c == 90) {
            cout << "YES" << endl;
        } else cout << "NO" << endl;
    }
}
