#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("TAMGIAC1.INP", "r", stdin);
    freopen("TAMGIAC1.OUT", "w", stdout);
    double a, b, c;
    cin >> a >> b >> c;
    double p = (a+b+c) / 2;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));

    if (a + b > c && b + c > a && a + c > b) {
        cout << fixed << setprecision(2);
//        cout << fixed;
        cout << s;
    } else cout << "NONE";
}
