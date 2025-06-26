#include <bits/stdc++.h>
using namespace std;
const int limit = 1e5+1;
int main() {
    int n, d, a[limit], dem = 0;
    cin >> n >> d;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    int l = 1, r = n;
    while (l <= r) {
        if (abs(a[l] - a[r]) <= d) {
            l++;
            r--;
            dem++;
        }
        else {
            r--;
        }
    }
    cout << dem;
}
