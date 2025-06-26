#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("DIEMHCN.INP", "r", stdin);
    freopen("DIEMHCN.OUT", "w", stdout);
    int xM, yM, x1, y1, x3, y3;
    cin >> xM >> yM >> x1 >> y1 >> x3 >> y3;

    if ((min(x1, x3) <= xM && xM <= max(x1, x3) && min(y1, y3) <= yM && yM <= max(y1, y3))) {
        cout << "IN";
    } else cout << "OUT";
}
