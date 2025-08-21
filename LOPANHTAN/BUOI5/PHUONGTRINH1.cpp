#include <bits/stdc++.h>
#define int long long
using namespace std;
int limit = 1e5+8;
main() {
    int n, k, f[limit] = {0}, res = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        f[i] = f[i - 1] + x;
    }
    for (int y = 1; y <= n; y++) {
        int tmp = f[y] - k;
        int l = 1, r = y;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (f[mid - 1] == tmp) {
                res++;
                break;
            } else if (f[mid - 1] > tmp) {
                r = mid - 1;
            } else l = mid + 1;
        }
    }
    cout << res;
}
