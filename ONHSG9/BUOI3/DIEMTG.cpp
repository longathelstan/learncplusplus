#include <bits/stdc++.h>
using namespace std;

#define d double

double khoangcach(d x1, d y1, d x2, d y2) {
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}
double dientich(d a, d b, d c) {
    d p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    freopen("DIEMTG.INP", "r", stdin);
    freopen("DIEMTG.OUT", "w", stdout);

    d x1, y1, x2, y2, x3, y3, xm, ym;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xm >> ym;

    d sideA = khoangcach(x1, y1, x2, y2);
    d sideB = khoangcach(x2, y2, x3, y3);
    d sideC = khoangcach(x3, y3, x1, y1);

    d toiA = khoangcach(x1, y1, xm, ym);
    d toiB = khoangcach(x2, y2, xm, ym);
    d toiC = khoangcach(x3, y3, xm, ym);

    d sABC = dientich(sideA, sideB, sideC);

    d sMAB = dientich(toiA, toiB, sideA);
    d sMBC = dientich(toiB, toiC, sideB);
    d sMCA = dientich(toiC, toiA, sideC);

    if (sMAB + sMBC + sMCA == sABC ) {
        cout << "IN";
    } else cout << "OUT";
}
