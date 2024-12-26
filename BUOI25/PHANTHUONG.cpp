#include <bits/stdc++.h>
using namespace std;
const int limit = 1e5+1;
int main() {
    int n, a[limit];
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int gcd = a[1];
    for (int i = 2; i <= n; i++) {
        gcd = __gcd(gcd, a[i]);
    }
    cout << gcd;
}
