#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, ucln;
    cin >> a >> b;
    ucln = __gcd(a, a+1);
    if (a == b) {
        cout << a;
    } else {
        cout << "1";
    }
//    else if (a + 2 > b) {
//        cout << __gcd(ucln, b);
//    } else {
//        for (int i = a + 2; i <= b; i++) ucln = __gcd(ucln, i);
//        cout << ucln;
//    }
}
