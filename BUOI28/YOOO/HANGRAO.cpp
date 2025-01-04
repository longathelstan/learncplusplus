#include <bits/stdc++.h>
using namespace std;
const int limit = 1e5+1;
int main() {
    int n, a[limit], tong = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    int h = a[n / 2] + 1;
    for (int i = 1; i <= n; i++) {
        tong += abs(a[i] - h);
    }
    cout << h << endl << tong;
}
