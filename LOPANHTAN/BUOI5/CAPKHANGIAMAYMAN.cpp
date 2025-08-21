#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
const int limit = 1e5+8;
int main() {
    int n, p, a[limit], f[limit] = {0}, res = -1;
    cin >> n >> p;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    f[1] = a[1];
    for (int i = 2; i <= n; i++) {
        f[i] = min(f[i - 1], a[i]);
    }
    for (int j = 1; j <= n; j++) {
        int c = a[j] - p;
        int l = 1, r = n;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (f[mid] >= c) {
                res = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }
    }
}
