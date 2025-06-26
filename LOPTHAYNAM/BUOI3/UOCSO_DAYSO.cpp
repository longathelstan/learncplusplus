#include <bits/stdc++.h>
using namespace std;
const int limit = 1e5+8;
int main() {
    int n, a[limit] = {0};
    cin >> n;
    int t= 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        t = __gcd(t, a[i]);
    }
    cout << t * n;
}
