#include <bits/stdc++.h>
using namespace std;
const int limit = 1e5 + 1;

int main() {
    int n, k, a[limit];
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);

    int tong = 0;

    for (int i = 1; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int s = k - a[i] - a[j];
            if (s <= 0) break;
            auto it = upper_bound(a + j + 1, a + n + 1, s) - 1;
            if (it > a + j && it <= a + n) {
                tong = max(tong, a[i] + a[j] + *it);
            }
        }
    }

    cout << tong << endl;
    return 0;
}
