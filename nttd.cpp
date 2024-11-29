#include <bits/stdc++.h>
using namespace std;

bool laSNT(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool laSOTD(int n, int m) {
    int gcd = __gcd(n, m);
    for (int i = 2; i <= gcd; i++) {
        if (laSNT(gcd / i)) return true;
    }
    return false;
}

int main() {
    int n, m;
    cin >> n >> m;
    if (laSOTD(n, m)) cout << "YES";
    else cout <<"NO";
}
