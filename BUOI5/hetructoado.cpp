#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll xa, ya, xb, yb;
    cin >> xa >> ya >> xb >> yb;

    cout << "caub: " << endl;

    if (xa == -xb && ya == -yb) {
        cout << "DXquagoctoado" << endl;
    } else if (ya != yb && xa != xb) {
        cout << "KHONGDX" << endl;
    } else {
        if (ya == yb && xa == -xb) cout << "DXTrucTung" << endl;
        if (xa == xb && ya == -yb) cout << "DXTrucHoanh" << endl;
    }

    cout << "cauc: " << endl;

    if (((xa >= 0 && xb >= 0 ) || (xa <= 0 && xb <= 0)) && ((ya >= 0 && yb >= 0) || (ya <= 0 && yb <= 0))) {
        cout << "DOAN THANG AB CAT HE TRUC TAI 0 DIEM" << endl;
    }
    if (xa*xb < 0 && ya * yb < 0) {
        cout << "DOAN THANG AB CAT HE TRUC TAI 2 DIEM" << endl;
    } else if (xa*xb < 0 || ya * yb < 0) {
        cout << "DOAN THANG AB CAT HE TRUC TAI 1 DIEM" << endl;
    }
}
