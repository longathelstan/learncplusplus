#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int main() {

    ifstream inp("DIEMHCN.INP");
    int xM, yM, x1, y1, x3, y3;
    inp >> xM >> yM >> x1 >> y1 >> x3 >> y3;
    inp.close();

    if (min(x1, x3) <= xM && xM <= max(x1, x3) && min(y1, y3) <= yM && yM <= max(y1, y3)) {

        ofstream out("DIEMHCN.OUT");
        out << "IN";
        out.close();
    } else {

        ofstream out("DIEMHCN.OUT");
        out << "OUT";
        out.close();
    }

    return 0;
}
