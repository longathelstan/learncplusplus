#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll xa, ya, xb, yb;
    cin >> xa >> ya >> xb >> yb;

    if (xa * -1 == xb && ya * -1 == yb) {
        cout << 1 << endl;
    } else {
        if (xa * -1 == xb) {
            cout << 3 << endl;
        } else if (ya * -1 == yb) {
            cout << 2 << endl;
        } else {
            cout << 0 << endl;
        }
    }

    if (xa * xb < 0 && ya * yb < 0) {
        cout << 2 << endl;
    } else {
        if (xa * xb < 0 || ya * yb < 0) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
}
