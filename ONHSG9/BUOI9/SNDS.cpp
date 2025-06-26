#include <bits/stdc++.h>
using namespace std;
const int limit = 1e3+1;
int main() {
    int n, minn = INT_MAX, maxx = INT_MIN, dem = 0, dem2 = 0;
    int a[limit];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        minn = min(minn, a[i]);
        maxx = max(maxx, a[i]);
    }
    for (int i = minn; i <= maxx; i++) {
        dem = 0;
        for (int j = 1; j <= n; j++) {
            if (i != a[j]) dem++;
        }
        if (dem == n) {
            cout << i << " ";
            dem2++;
        }
    }
    if (dem2 == 0) cout << "-1";
}
