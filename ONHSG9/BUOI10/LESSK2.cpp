#include <bits/stdc++.h>
using namespace std;
const int limit = 1e5+1;

int solve(const int a[limit], int n, int k) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] <= k) dem++;
    }
    if (dem == 0) return 0;
    int dem1 = 0;
    for (int i = 0; i < dem; i++) {
        if (a[i] > k) dem1++;
    }
    int kq = dem1;
    for (int i = dem; i < n; i++) {
        if (a[i - dem] > k) dem1--;
        if (a[i] > k) dem1++;
        kq = min(kq, dem1);
    }
    return kq;
}

int main() {
    freopen("LESSK.INP", "r", stdin);
    freopen("LESSK.OUT", "w", stdout);
    int t, n, k;
    int a[limit];
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> n >> k;
        for (int j = 0; j < n; j++) cin >> a[j];
        cout << solve(a, n, k) << endl;
    }
}
