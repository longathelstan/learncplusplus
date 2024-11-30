#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("HAIDIEM.INP", "r", stdin);
    freopen("HAIDIEM.OUT", "w", stdout);
    int a, b, c;
    int x1, y1, x2, y2;

    cin >> a >> b >> c;
    cin >> x1 >> y1 >> x2 >> y2;

    int fA = a * x1 + b * y1 + c;
    int fB = a * x2 + b * y2 + c;

    if (fA == 0 || fB == 0) {
        cout << 0;
    } else if (fA * fB > 0) {
        cout << 1;
    } else {
        cout << -1;
    }
}
