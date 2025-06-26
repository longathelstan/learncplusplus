#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("DIEMHT.INP", "r", stdin);
    freopen("DIEMHT.OUT", "w", stdout);
    int x1, y1, x2, y2, R;
    cin >> x1 >> y1 >> x2 >> y2 >> R;

    double distance = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));


    if (distance < R) {
        cout << "IN";
    } else if (distance == R) {
        cout << "ON";
    } else {
        cout << "OUT";
    }


    return 0;
}
