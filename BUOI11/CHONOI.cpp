#include <bits/stdc++.h>
using namespace std;
const int limit = 1e4+1;

int main() {
    int n, k, a[limit], dem = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    dem = 0;
    for (int i = 1; i <= n; i++) {

    int l = 1, r = n, brocoli = -1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (a[i] + a[mid] <= k) {
            brocoli = mid;
            l = mid + 1;
        } else r = mid - 1;
    }
    if (brocoli != -1) {
        dem += (brocoli - i);
    }

    }
    cout << dem;
}
