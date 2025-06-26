#include <bits/stdc++.h>
using namespace std;
#define ll double
int main() {
    freopen("TAMGIAC2.INP", "r", stdin);
    freopen("TAMGIAC2.OUT", "w", stdout);
    ll ax, bx, cx, ay, by, cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;
    ll temp = 2;
    ll ab = sqrt(pow(ax - bx, temp) + pow(ay - by, temp));
    ll ac = sqrt(pow(ax - cx, temp) + pow(ay - cy, temp));
    ll bc = sqrt(pow(bx - cx, temp) + pow(by - cy, temp));
    ll p = (ab+ac+bc) / 2;
    ll s = sqrt(p * (p - ab) * (p - ac) * (p - bc));
    if (ab + ac > bc && ab + bc > ac && ac + bc > ab) {
        cout << fixed << setprecision(2);
//        cout << fixed;
        cout << s;
    } else cout << "NONE";
}

